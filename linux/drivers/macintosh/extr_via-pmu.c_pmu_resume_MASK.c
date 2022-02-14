
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int) ;
 int VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;

void
FUNC_5(void)
{
 unsigned long VAR_10;

 if (VAR_6 == VAR_8 || VAR_7 < 1)
  return;

 FUNC_3(&VAR_5, VAR_10);
 VAR_7--;
 if (VAR_7 > 0) {
  FUNC_4(&VAR_5, VAR_10);
  return;
 }
 VAR_3 = 1;
 if (VAR_4 >= 0)
  FUNC_0(VAR_4);
 FUNC_1(&VAR_9[VAR_1], VAR_0 | VAR_2);
 FUNC_4(&VAR_5, VAR_10);
 FUNC_2();
}
