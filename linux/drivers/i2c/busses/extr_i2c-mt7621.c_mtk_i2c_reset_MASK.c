
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct mtk_i2c {int clk_div; scalar_t__ base; int dev; TYPE_2__ adap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_i2c *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5->adap.dev.parent);
 if (VAR_6)
  FUNC_0(VAR_5->dev, "I2C reset failed!\n");





 FUNC_2(((VAR_5->clk_div << 16) & VAR_2) | VAR_3 |
    VAR_4, VAR_5->base + VAR_1);
 FUNC_2(0, VAR_5->base + VAR_0);
}
