
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int symbol_rate; int clkdiv; int ratediv; } ;
struct cx24120_state {TYPE_2__ dnxt; TYPE_1__* i2c; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct cx24120_state *VAR_0, u32 VAR_1)
{
 FUNC_0(&VAR_0->i2c->dev, "(%d)\n", VAR_1);

 VAR_0->dnxt.symbol_rate = VAR_1;


 if (VAR_1 > 31000000) {
  VAR_0->dnxt.clkdiv = (-(VAR_1 < 31000001) & 3) + 2;
  VAR_0->dnxt.ratediv = (-(VAR_1 < 31000001) & 6) + 4;
 } else {
  VAR_0->dnxt.clkdiv = 3;
  VAR_0->dnxt.ratediv = 6;
 }

 return 0;
}
