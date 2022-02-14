
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int structsize ;
struct rlimit {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,void*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int*,int,void*,size_t*,int *,int ) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_4, size_t *VAR_5)
{
 pid_t VAR_6;
 size_t VAR_7;
 int VAR_8, VAR_9[5], VAR_10;
 void *VAR_11, *VAR_12;

 VAR_6 = *(pid_t *)VAR_4;
 VAR_10 = sizeof(struct rlimit) * VAR_3;
 VAR_11 = FUNC_1(1, sizeof(VAR_10) + VAR_10);
 if (VAR_11 == ((void*)0))
  FUNC_3(1, "out of memory");
 FUNC_0(&VAR_10, VAR_11, sizeof(VAR_10));
 VAR_12 = (char *)VAR_11 + sizeof(VAR_10);
 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_1;
 VAR_9[2] = VAR_2;
 VAR_9[3] = VAR_6;
 VAR_7 = sizeof(struct rlimit);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_9[4] = VAR_8;
  if (FUNC_4(VAR_9, 5, VAR_12, &VAR_7, ((void*)0), 0) == -1)
   FUNC_2(1, "kern.proc.rlimit.%u", VAR_6);
  if (VAR_7 != sizeof(struct rlimit))
   FUNC_3(1, "kern.proc.rlimit.%u: short read", VAR_6);
  VAR_12 += VAR_7;
 }

 *VAR_5 = sizeof(VAR_10) + VAR_10;
 return (VAR_11);
}
