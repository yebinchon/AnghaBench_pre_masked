
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int flags; scalar_t__ prepare_count; struct clk_core* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (struct clk_core*) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct clk_core*,struct clk_core*) ;

__attribute__((used)) static struct clk_core *FUNC_5(struct clk_core *VAR_1,
        struct clk_core *VAR_2)
{
 unsigned long VAR_3;
 struct clk_core *VAR_4 = VAR_1->parent;
 if (VAR_1->flags & VAR_0) {
  FUNC_1(VAR_4);
  FUNC_1(VAR_2);
 }


 if (VAR_1->prepare_count) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_1);
 }


 VAR_3 = FUNC_2();
 FUNC_4(VAR_1, VAR_2);
 FUNC_3(VAR_3);

 return VAR_4;
}
