
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hdmi_phy_data {int base; TYPE_1__* features; } ;
struct TYPE_2__ {unsigned long max_phy; scalar_t__ ldo_voltage; scalar_t__ bist_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int,int) ;
 int FUNC_1 (struct hdmi_phy_data*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct hdmi_phy_data *VAR_4, unsigned long VAR_5,
 unsigned long VAR_6)
{
 u8 VAR_7;





 FUNC_2(VAR_4->base, VAR_3);





 if (VAR_4->features->bist_ctrl)
  FUNC_0(VAR_4->base, VAR_0, 1, 11, 11);





 if (VAR_5 != VAR_6)
  VAR_7 = 0;
 else if (VAR_5 / 10 < VAR_4->features->max_phy)
  VAR_7 = 1;
 else
  VAR_7 = 2;





 FUNC_0(VAR_4->base, VAR_3, VAR_7, 31, 30);


 FUNC_3(VAR_4->base, VAR_1, 0xF0000000);


 if (VAR_4->features->ldo_voltage)
  FUNC_0(VAR_4->base, VAR_2, 0xB, 3, 0);

 FUNC_1(VAR_4);

 return 0;
}
