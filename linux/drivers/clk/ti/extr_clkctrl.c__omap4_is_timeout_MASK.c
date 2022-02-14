
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union omap4_timeout {int start; int cycles; } ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(union omap4_timeout *VAR_2, u32 VAR_3)
{
 if (FUNC_5(VAR_0 || VAR_1)) {
  if (VAR_2->cycles++ < VAR_3) {
   FUNC_4(1 * 2);
   return 0;
  }
 } else {
  if (!FUNC_2(VAR_2->start)) {
   VAR_2->start = FUNC_1();
   return 0;
  }

  if (FUNC_3(FUNC_1(), VAR_2->start) < VAR_3) {
   FUNC_0();
   return 0;
  }
 }

 return 1;
}
