
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* enable ) (struct clk_hw*) ;int (* is_enabled ) (struct clk_hw*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 if (!VAR_0.is_enabled(VAR_1))
  VAR_0.enable(VAR_1);

 return 0;
}
