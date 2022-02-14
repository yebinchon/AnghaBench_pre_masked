
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_lwpinfo {int dummy; } ;
typedef int lwpinfo ;
typedef int lwpid_t ;
typedef int elfcore_lwpinfo_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,struct ptrace_lwpinfo*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,void*,int) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_1, size_t *VAR_2)
{
 lwpid_t VAR_3;
 elfcore_lwpinfo_t *VAR_4;
 struct ptrace_lwpinfo VAR_5;
 void *VAR_6;

 VAR_3 = *(lwpid_t *)VAR_1;
 VAR_6 = FUNC_0(1, sizeof(int) + sizeof(elfcore_lwpinfo_t));
 if (VAR_6 == ((void*)0))
  FUNC_2(1, "out of memory");
 *(int *)VAR_6 = sizeof(elfcore_lwpinfo_t);
 VAR_4 = (void *)((int *)VAR_6 + 1);
 FUNC_3(VAR_0, VAR_3, (void *)&VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_4, &VAR_5);

 *VAR_2 = sizeof(int) + sizeof(struct ptrace_lwpinfo);
 return (VAR_6);
}
