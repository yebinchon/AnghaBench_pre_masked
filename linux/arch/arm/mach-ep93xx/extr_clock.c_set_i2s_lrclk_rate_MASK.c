
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {int enable_reg; } ;
struct TYPE_4__ {unsigned long rate; } ;
struct TYPE_3__ {int rate; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_7, unsigned long VAR_8)
{
 unsigned VAR_9 = FUNC_0(VAR_7->enable_reg) &
  ~VAR_4;

 if (VAR_8 == VAR_6.rate / 32)
  FUNC_1(VAR_9 | VAR_2,
          VAR_7->enable_reg);
 else if (VAR_8 == VAR_6.rate / 64)
  FUNC_1(VAR_9 | VAR_3,
          VAR_7->enable_reg);
 else if (VAR_8 == VAR_6.rate / 128)
  FUNC_1(VAR_9 | VAR_1,
          VAR_7->enable_reg);
 else
  return -VAR_0;

 VAR_5.rate = VAR_8;
 return 0;
}
