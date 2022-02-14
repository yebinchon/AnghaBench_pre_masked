
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* set_parent ) (struct clk_hw*,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct clk_hw*,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_0();

 FUNC_2();

 VAR_3 = VAR_0.set_parent(VAR_1, VAR_2);

 FUNC_1();

 return VAR_3;
}
