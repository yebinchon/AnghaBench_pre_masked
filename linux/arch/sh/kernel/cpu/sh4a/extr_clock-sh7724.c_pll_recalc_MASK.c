
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_2)
{
 unsigned long VAR_3 = 1;

 if (FUNC_0(VAR_1) & 0x4000)
  VAR_3 = (((FUNC_0(VAR_0) >> 24) & 0x3f) + 1) * 2;

 return VAR_2->parent->rate * VAR_3;
}
