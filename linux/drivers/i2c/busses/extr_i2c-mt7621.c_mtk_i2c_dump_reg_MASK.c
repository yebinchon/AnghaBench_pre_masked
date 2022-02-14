
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_i2c {scalar_t__ base; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_i2c *VAR_5)
{
 FUNC_0(VAR_5->dev,
  "SM0CFG2 %08x, SM0CTL0 %08x, SM0CTL1 %08x, SM0D0 %08x, SM0D1 %08x\n",
  FUNC_1(VAR_5->base + VAR_0),
  FUNC_1(VAR_5->base + VAR_1),
  FUNC_1(VAR_5->base + VAR_2),
  FUNC_1(VAR_5->base + VAR_3),
  FUNC_1(VAR_5->base + VAR_4));
}
