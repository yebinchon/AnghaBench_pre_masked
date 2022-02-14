
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int flags; scalar_t__ prepare_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (struct clk_core*) ;

__attribute__((used)) static void FUNC_2(struct clk_core *VAR_1,
       struct clk_core *VAR_2,
       struct clk_core *VAR_3)
{




 if (VAR_1->prepare_count) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_3);
 }


 if (VAR_1->flags & VAR_0) {
  FUNC_1(VAR_2);
  FUNC_1(VAR_3);
 }
}
