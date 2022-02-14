
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ usage; int (* set ) (struct clk*,int ) ;} ;


 int FUNC_0 (struct clk*,int ) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_0)
{
 if (VAR_0->set && (--VAR_0->usage) == 0)
  VAR_0->set(VAR_0, 0);
}
