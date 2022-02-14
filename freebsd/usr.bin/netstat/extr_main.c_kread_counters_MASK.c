
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(u_long VAR_1, void *VAR_2, size_t VAR_3)
{
 uint64_t *VAR_4;
 u_long *VAR_5;
 size_t VAR_6, VAR_7;

 if (FUNC_3() < 0)
  return (-1);

 if (VAR_3 % sizeof(uint64_t) != 0) {
  FUNC_6("kread_counters: invalid counter set size");
  return (-1);
 }

 VAR_7 = VAR_3 / sizeof(uint64_t);
 if ((VAR_5 = FUNC_4(VAR_7 * sizeof(u_long))) == ((void*)0))
  FUNC_5(-1, "malloc");
 if (FUNC_1(VAR_1, VAR_5, VAR_7 * sizeof(u_long)) < 0) {
  FUNC_0(VAR_5);
  return (-1);
 }

 VAR_4 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  VAR_4[VAR_6] = FUNC_2(VAR_0, VAR_5[VAR_6]);

 FUNC_0(VAR_5);
 return (0);
}
