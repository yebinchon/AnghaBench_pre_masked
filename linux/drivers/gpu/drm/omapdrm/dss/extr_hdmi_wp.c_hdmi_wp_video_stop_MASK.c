
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_wp_data {int base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct hdmi_wp_data *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_4->base, VAR_1, VAR_0);

 FUNC_1(VAR_4->base, VAR_3, 0, 31, 31);

 for (VAR_5 = 0; VAR_5 < 50; ++VAR_5) {
  u32 VAR_6;

  FUNC_4(20);

  VAR_6 = FUNC_2(VAR_4->base, VAR_2);
  if (VAR_6 & VAR_0)
   return;
 }

 FUNC_0("no HDMI FRAMEDONE when disabling output\n");
}
