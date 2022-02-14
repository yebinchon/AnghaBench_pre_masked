
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long divider; scalar_t__ parent; } ;


 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_0)
{
 if (VAR_0->parent && VAR_0->divider)
  return FUNC_0(VAR_0->parent) / VAR_0->divider;
 else
  return 0;
}
