
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int structsize ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,void*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int*,int,void*,size_t*,int *,int ) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_2, int VAR_3, size_t VAR_4, size_t *VAR_5)
{
 size_t VAR_6;
 pid_t VAR_7;
 int VAR_8[4], VAR_9;
 void *VAR_10, *VAR_11;

 VAR_7 = *(pid_t *)VAR_2;
 VAR_9 = VAR_4;
 VAR_8[0] = VAR_0;
 VAR_8[1] = VAR_1;
 VAR_8[2] = VAR_3;
 VAR_8[3] = VAR_7;
 VAR_6 = 0;
 if (FUNC_4(VAR_8, 4, ((void*)0), &VAR_6, ((void*)0), 0) == -1)
  FUNC_2(1, "kern.proc.%d.%u", VAR_3, VAR_7);
 VAR_10 = FUNC_1(1, sizeof(VAR_9) + VAR_6 * 4 / 3);
 if (VAR_10 == ((void*)0))
  FUNC_3(1, "out of memory");
 FUNC_0(&VAR_9, VAR_10, sizeof(VAR_9));
 VAR_11 = (char *)VAR_10 + sizeof(VAR_9);
 if (FUNC_4(VAR_8, 4, VAR_11, &VAR_6, ((void*)0), 0) == -1)
  FUNC_2(1, "kern.proc.%d.%u", VAR_3, VAR_7);

 *VAR_5 = sizeof(VAR_9) + VAR_6;
 return (VAR_10);
}
