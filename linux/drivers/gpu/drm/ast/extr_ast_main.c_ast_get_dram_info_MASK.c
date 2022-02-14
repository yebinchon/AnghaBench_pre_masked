
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {struct ast_private* dev_private; TYPE_2__* pdev; } ;
struct device_node {int dummy; } ;
struct ast_private {int config_mode; int dram_bus_width; scalar_t__ chip; int mclk; void* dram_type; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (struct ast_private*,int) ;



 int FUNC_1 (struct ast_private*,int,int) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->pdev->dev.of_node;
 struct ast_private *VAR_12 = VAR_10->dev_private;
 uint32_t VAR_13, VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 switch (VAR_12->config_mode) {
 case 129:




  if (FUNC_2(VAR_11, "aspeed,mcr-configuration",
      &VAR_13))
   VAR_13 = 0x00000577;
  if (FUNC_2(VAR_11, "aspeed,mcr-scu-mpll",
      &VAR_14))
   VAR_14 = 0x000050C0;
  if (FUNC_2(VAR_11, "aspeed,mcr-scu-strap",
      &VAR_15))
   VAR_15 = 0;
  break;
 case 128:
  FUNC_1(VAR_12, 0xf004, 0x1e6e0000);
  FUNC_1(VAR_12, 0xf000, 0x1);
  VAR_13 = FUNC_0(VAR_12, 0x10004);
  VAR_14 = FUNC_0(VAR_12, 0x10120);
  VAR_15 = FUNC_0(VAR_12, 0x10170);
  break;
 case 130:
 default:
  VAR_12->dram_bus_width = 16;
  VAR_12->dram_type = VAR_3;
  if (VAR_12->chip == VAR_2)
   VAR_12->mclk = 800;
  else
   VAR_12->mclk = 396;
  return 0;
 }

 if (VAR_13 & 0x40)
  VAR_12->dram_bus_width = 16;
 else
  VAR_12->dram_bus_width = 32;

 if (VAR_12->chip == VAR_2) {
  switch (VAR_13 & 0x03) {
  case 0:
   VAR_12->dram_type = VAR_3;
   break;
  default:
  case 1:
   VAR_12->dram_type = VAR_5;
   break;
  case 2:
   VAR_12->dram_type = VAR_6;
   break;
  case 3:
   VAR_12->dram_type = VAR_9;
   break;
  }
 } else if (VAR_12->chip == VAR_0 || VAR_12->chip == VAR_1) {
  switch (VAR_13 & 0x03) {
  case 0:
   VAR_12->dram_type = VAR_7;
   break;
  default:
  case 1:
   VAR_12->dram_type = VAR_3;
   break;
  case 2:
   VAR_12->dram_type = VAR_5;
   break;
  case 3:
   VAR_12->dram_type = VAR_6;
   break;
  }
 } else {
  switch (VAR_13 & 0x0c) {
  case 0:
  case 4:
   VAR_12->dram_type = VAR_7;
   break;
  case 8:
   if (VAR_13 & 0x40)
    VAR_12->dram_type = VAR_3;
   else
    VAR_12->dram_type = VAR_8;
   break;
  case 0xc:
   VAR_12->dram_type = VAR_4;
   break;
  }
 }

 if (VAR_15 & 0x2000)
  VAR_19 = 14318;
 else
  VAR_19 = 12000;

 VAR_16 = VAR_14 & 0x1f;
 VAR_17 = (VAR_14 & 0x3fe0) >> 5;
 VAR_20 = (VAR_14 & 0xc000) >> 14;
 switch (VAR_20) {
 case 3:
  VAR_18 = 0x4;
  break;
 case 2:
 case 1:
  VAR_18 = 0x2;
  break;
 default:
  VAR_18 = 0x1;
  break;
 }
 VAR_12->mclk = VAR_19 * (VAR_17 + 2) / ((VAR_16 + 2) * (VAR_18 * 1000));
 return 0;
}
