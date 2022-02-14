
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {int enable_reg; } ;
struct TYPE_4__ {int rate; } ;
struct TYPE_3__ {unsigned long rate; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_4, unsigned long VAR_5)
{
 unsigned VAR_6 = FUNC_0(VAR_4->enable_reg);

 if (VAR_5 == VAR_2.rate / 2)
  FUNC_1(VAR_6 & ~VAR_1,
          VAR_4->enable_reg);
 else if (VAR_5 == VAR_2.rate / 4)
  FUNC_1(VAR_6 | VAR_1,
          VAR_4->enable_reg);
 else
  return -VAR_0;

 VAR_3.rate = VAR_5;
 return 0;
}
