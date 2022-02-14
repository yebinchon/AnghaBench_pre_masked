
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* enable ) (struct clk_hw*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 int VAR_2;

 FUNC_0();

 VAR_2 = VAR_0.enable(VAR_1);

 FUNC_1();

 return VAR_2;
}
