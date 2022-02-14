
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2497_st {int time_prev; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ltc2497_st *VAR_2)
{
 s64 VAR_3;

 VAR_3 = FUNC_1(FUNC_0(), VAR_2->time_prev);

 if (VAR_3 < VAR_1) {



  if (FUNC_2(
      VAR_1 - VAR_3))
   return -VAR_0;

  return 0;
 }

 if (VAR_3 - VAR_1 <= 0) {



  return 0;
 }

 return 1;
}
