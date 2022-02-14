
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_core_data {int base; int adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int,int) ;
 int FUNC_1 (int ,int,int ,int,int ,int ) ;
 int FUNC_2 (struct hdmi_core_data*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct hdmi_core_data *VAR_6)
{
 u32 VAR_7 = FUNC_3(VAR_6->base, VAR_4);
 u32 VAR_8 = FUNC_3(VAR_6->base, VAR_5);

 FUNC_4(VAR_6->base, VAR_4, VAR_7);
 FUNC_4(VAR_6->base, VAR_5, VAR_8);

 if (VAR_7 & 0x20) {
  FUNC_1(VAR_6->adap, VAR_2,
      0, 0, 0, 0);
  FUNC_0(VAR_6->base, VAR_3, 0x1, 7, 7);
 } else if (VAR_8 & 0x02) {
  u32 VAR_9 = FUNC_3(VAR_6->base, VAR_3);

  FUNC_1(VAR_6->adap,
      VAR_1 |
      VAR_0,
      0, (VAR_9 >> 4) & 7, 0, 0);
  FUNC_0(VAR_6->base, VAR_3, 0x1, 7, 7);
 }
 if (VAR_7 & 0x02)
  FUNC_2(VAR_6);
}
