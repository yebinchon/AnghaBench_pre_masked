
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;

void
FUNC_2(void)
{
 int VAR_7;

 FUNC_1(VAR_2);

 if (VAR_4 != VAR_1) {
  FUNC_0(VAR_6, "illegal starting point for range");
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_3[VAR_7] = VAR_5[VAR_7];
 }
}
