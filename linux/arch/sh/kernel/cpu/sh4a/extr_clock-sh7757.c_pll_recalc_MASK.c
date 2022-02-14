
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0) ? 24 : 16;

 return VAR_1->parent->rate * VAR_2;
}
