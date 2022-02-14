
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int gpio_gap; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct btmrvl_private*,int ,int*,int) ;

int FUNC_3(struct btmrvl_private *VAR_1)
{
 int VAR_2;
 u8 VAR_3[2];

 VAR_3[0] = (VAR_1->btmrvl_dev.gpio_gap & 0xff00) >> 8;
 VAR_3[1] = (u8) (VAR_1->btmrvl_dev.gpio_gap & 0x00ff);

 FUNC_0("Sending HSCFG Command, gpio=0x%x, gap=0x%x",
        VAR_3[0], VAR_3[1]);

 VAR_2 = FUNC_2(VAR_1, VAR_0, VAR_3, 2);
 if (VAR_2)
  FUNC_1("HSCFG command failed");

 return VAR_2;
}
