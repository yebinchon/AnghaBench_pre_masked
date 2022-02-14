
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int clk_delay; int cmd_read; int cmd_write; int gpio_sck; int gpio_sda; } ;
struct rtl8366_platform_data {int gpio_sck; int gpio_sda; } ;
typedef int smi ;
typedef enum rtl8366_type { ____Placeholder_rtl8366_type } rtl8366_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8366_smi*) ;
 scalar_t__ FUNC_1 (struct rtl8366_smi*,char*) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct rtl8366_smi*,int,int*) ;

enum rtl8366_type FUNC_5(struct rtl8366_platform_data *VAR_3)
{
 static struct rtl8366_smi VAR_4;
 enum rtl8366_type VAR_5 = VAR_2;
 u32 VAR_6 = 0;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.gpio_sda = VAR_3->gpio_sda;
 VAR_4.gpio_sck = VAR_3->gpio_sck;
 VAR_4.clk_delay = 10;
 VAR_4.cmd_read = 0xa9;
 VAR_4.cmd_write = 0xa8;

 if (FUNC_1(&VAR_4, "rtl8366"))
  goto out;

 if (FUNC_4(&VAR_4, 0x5c, &VAR_6))
  goto cleanup;

 switch(VAR_6) {
 case 0x6027:
  FUNC_3("Found an RTL8366S switch\n");
  VAR_5 = VAR_1;
  break;
 case 0x5937:
  FUNC_3("Found an RTL8366RB switch\n");
  VAR_5 = VAR_0;
  break;
 default:
  FUNC_3("Found an Unknown RTL8366 switch (id=0x%04x)\n", VAR_6);
  break;
 }

cleanup:
 FUNC_0(&VAR_4);
out:
 return VAR_5;
}
