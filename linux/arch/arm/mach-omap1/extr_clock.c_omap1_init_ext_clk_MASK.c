
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; int enable_reg; } ;
typedef int __u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct clk *VAR_0)
{
 unsigned VAR_1;
 __u16 VAR_2;


 VAR_2 = FUNC_0(VAR_0->enable_reg) & ~1;
 FUNC_1(VAR_2, VAR_0->enable_reg);

 VAR_2 = (VAR_2 & 0xfc) >> 2;
 if (VAR_2 > 6)
  VAR_1 = (VAR_2 - 6) * 2 + 8;
 else
  VAR_1 = VAR_2 + 2;

 VAR_0-> rate = 96000000 / VAR_1;
}
