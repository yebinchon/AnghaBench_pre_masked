
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{

 if (VAR_3 < VAR_1) {
  if (VAR_2 == 0) {
   FUNC_0("swap_pager: out of swap space\n");
   VAR_2 = 1;
  }
 } else {
  VAR_4 = 0;
  if (VAR_3 > VAR_0)
   VAR_2 = 0;
 }
}
