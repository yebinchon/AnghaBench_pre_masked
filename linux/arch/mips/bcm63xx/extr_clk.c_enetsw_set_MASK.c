
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct clk *VAR_6, int VAR_7)
{
 if (FUNC_0()) {
  FUNC_4(VAR_1, VAR_7);
 } else if (FUNC_1()) {
  FUNC_4(VAR_2, VAR_7);
 } else if (FUNC_2()) {
  if (VAR_7) {
   FUNC_6(&VAR_4);
   FUNC_6(&VAR_5);
  } else {
   FUNC_5(&VAR_5);
   FUNC_5(&VAR_4);
  }
  FUNC_4(VAR_3, VAR_7);
 } else {
  return;
 }

 if (VAR_7) {

  FUNC_3(VAR_0, 1);
  FUNC_7(10);
  FUNC_3(VAR_0, 0);
  FUNC_7(10);
 }
}
