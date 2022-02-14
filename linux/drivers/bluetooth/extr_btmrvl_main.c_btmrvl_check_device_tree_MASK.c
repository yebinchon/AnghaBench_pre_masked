
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct device_node {int dummy; } ;
struct btmrvl_sdio_card {struct device_node* plt_of_node; } ;
struct TYPE_2__ {int gpio_gap; struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct btmrvl_private*,int*,int) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*,char*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct btmrvl_private *VAR_2)
{
 struct device_node *VAR_3;
 struct btmrvl_sdio_card *VAR_4 = VAR_2->btmrvl_dev.card;
 u8 VAR_5[VAR_1 + VAR_0];
 int VAR_6 = 0;
 u16 VAR_7, VAR_8;

 if (VAR_4->plt_of_node) {
  VAR_3 = VAR_4->plt_of_node;
  VAR_6 = FUNC_3(VAR_3, "marvell,wakeup-pin",
        &VAR_7);
  if (VAR_6)
   VAR_7 = (VAR_2->btmrvl_dev.gpio_gap & 0xff00) >> 8;

  VAR_6 = FUNC_3(VAR_3, "marvell,wakeup-gap-ms",
        &VAR_8);
  if (VAR_6)
   VAR_8 = (u8)(VAR_2->btmrvl_dev.gpio_gap & 0x00ff);

  VAR_2->btmrvl_dev.gpio_gap = (VAR_7 << 8) + VAR_8;

  VAR_6 = FUNC_4(VAR_3, "marvell,cal-data",
      VAR_5 + VAR_1,
      VAR_0);
  if (VAR_6)
   return VAR_6;

  FUNC_0("Use cal data from device tree");
  VAR_6 = FUNC_2(VAR_2, VAR_5,
            VAR_0);
  if (VAR_6)
   FUNC_1("Fail to download calibrate data");
 }

 return VAR_6;
}
