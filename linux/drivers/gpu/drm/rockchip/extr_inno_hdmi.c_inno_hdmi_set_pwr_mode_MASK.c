
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inno_hdmi {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (struct inno_hdmi*,int ,int) ;
 int FUNC_2 (struct inno_hdmi*,int) ;

__attribute__((used)) static void FUNC_3(struct inno_hdmi *VAR_5, int VAR_6)
{
 switch (VAR_6) {
 case 128:
  FUNC_2(VAR_5, 0);

  FUNC_1(VAR_5, VAR_2, 0x6f);
  FUNC_1(VAR_5, VAR_1, 0xbb);

  FUNC_1(VAR_5, VAR_4, 0x15);
  FUNC_1(VAR_5, VAR_4, 0x14);
  FUNC_1(VAR_5, VAR_4, 0x10);
  FUNC_1(VAR_5, VAR_0, 0x0f);
  FUNC_1(VAR_5, VAR_3, 0x00);
  FUNC_1(VAR_5, VAR_3, 0x01);

  FUNC_2(VAR_5, 1);
  break;

 case 129:
  FUNC_2(VAR_5, 0);
  FUNC_1(VAR_5, VAR_1, 0x00);
  FUNC_1(VAR_5, VAR_2, 0x00);
  FUNC_1(VAR_5, VAR_0, 0x00);
  FUNC_1(VAR_5, VAR_4, 0x15);

  break;

 default:
  FUNC_0(VAR_5->dev, "Unknown power mode %d\n", VAR_6);
 }
}
