
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int rate_offset; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(struct clk *VAR_1)
{

 int VAR_2 = 1 << (3 & (FUNC_0(VAR_0) >> VAR_1->rate_offset));

 return VAR_1->parent->rate / VAR_2;
}
