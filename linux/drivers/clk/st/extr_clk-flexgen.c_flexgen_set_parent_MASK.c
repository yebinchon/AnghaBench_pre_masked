
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {struct clk_hw hw; } ;
struct flexgen {TYPE_1__ mux; } ;
struct TYPE_4__ {int (* set_parent ) (struct clk_hw*,int ) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct clk_hw*,int ) ;
 struct flexgen* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct flexgen *VAR_3 = FUNC_2(VAR_1);
 struct clk_hw *VAR_4 = &VAR_3->mux.hw;

 FUNC_0(VAR_4, VAR_1);

 return VAR_0.set_parent(VAR_4, VAR_2);
}
