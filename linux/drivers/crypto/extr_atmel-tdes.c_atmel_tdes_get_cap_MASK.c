
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int has_dma; int has_cfb_3keys; } ;
struct atmel_tdes_dev {int hw_version; int dev; TYPE_1__ caps; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct atmel_tdes_dev *VAR_0)
{

 VAR_0->caps.has_dma = 0;
 VAR_0->caps.has_cfb_3keys = 0;


 switch (VAR_0->hw_version & 0xf00) {
 case 0x700:
  VAR_0->caps.has_dma = 1;
  VAR_0->caps.has_cfb_3keys = 1;
  break;
 case 0x600:
  break;
 default:
  FUNC_0(VAR_0->dev,
    "Unmanaged tdes version, set minimum capabilities\n");
  break;
 }
}
