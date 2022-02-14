
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct clk {int rate_offset; int rate; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct clk*,unsigned long) ;

int FUNC_3(struct clk *VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 > 3)
  VAR_4 = -VAR_1;
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_0(VAR_0);
 VAR_5 &= ~(3 << VAR_2->rate_offset);
 VAR_5 |= VAR_4 << VAR_2->rate_offset;
 FUNC_1(VAR_5, VAR_0);
 VAR_2->rate = VAR_2->parent->rate / (1 << VAR_4);

 return 0;
}
