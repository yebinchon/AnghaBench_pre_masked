
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct clk_core {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_parent ) (int ,int ) ;} ;


 int FUNC_0 (struct clk_core*,struct clk_core*,struct clk_core*) ;
 struct clk_core* FUNC_1 (struct clk_core*,struct clk_core*) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct clk_core*,struct clk_core*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct clk_core*,struct clk_core*) ;
 int FUNC_7 (struct clk_core*,struct clk_core*) ;

__attribute__((used)) static int FUNC_8(struct clk_core *VAR_0, struct clk_core *VAR_1,
       u8 VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;
 struct clk_core *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1);

 FUNC_6(VAR_0, VAR_1);


 if (VAR_1 && VAR_0->ops->set_parent)
  VAR_4 = VAR_0->ops->set_parent(VAR_0->hw, VAR_2);

 FUNC_7(VAR_0, VAR_1);

 if (VAR_4) {
  VAR_3 = FUNC_2();
  FUNC_4(VAR_0, VAR_5);
  FUNC_3(VAR_3);
  FUNC_0(VAR_0, VAR_5, VAR_1);

  return VAR_4;
 }

 FUNC_0(VAR_0, VAR_1, VAR_5);

 return 0;
}
