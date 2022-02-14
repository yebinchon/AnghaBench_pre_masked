
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int rate_offset; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

unsigned long FUNC_3(struct clk *VAR_2)
{
 int VAR_3;
 FUNC_2(VAR_1);
 VAR_3 = 1 << (3 & (FUNC_0(VAR_0) >> VAR_2->rate_offset));
 FUNC_1(VAR_1);

 return VAR_2->parent->rate / VAR_3;
}
