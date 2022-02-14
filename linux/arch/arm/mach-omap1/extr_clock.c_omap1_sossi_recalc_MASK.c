
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(struct clk *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0);

 VAR_2 = (VAR_2 >> 17) & 0x7;
 VAR_2++;

 return VAR_1->parent->rate / VAR_2;
}
