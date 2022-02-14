
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lwpid_t ;
typedef int fpregset_t ;
typedef void elfcore_fpregset_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,void*,int ) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_1, size_t *VAR_2)
{
 lwpid_t VAR_3;
 elfcore_fpregset_t *VAR_4;
 fpregset_t VAR_5;

 VAR_3 = *(lwpid_t *)VAR_1;
 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "out of memory");
 FUNC_3(VAR_0, VAR_3, (void *)&VAR_5, 0);
 FUNC_1(VAR_4, &VAR_5);

 *VAR_2 = sizeof(*VAR_4);
 return (VAR_4);
}
