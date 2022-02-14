
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int hdev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (struct wiimote_data*,int,int*,int) ;

__attribute__((used)) static __u8 FUNC_2(struct wiimote_data *VAR_8, __u8 *VAR_9)
{
 int VAR_10;


 VAR_10 = FUNC_1(VAR_8, 0xa400fa, VAR_9, 6);
 if (VAR_10 != 6)
  return VAR_4;

 FUNC_0(VAR_8->hdev, "extension ID: %6phC\n", VAR_9);

 if (VAR_9[0] == 0xff && VAR_9[1] == 0xff && VAR_9[2] == 0xff &&
     VAR_9[3] == 0xff && VAR_9[4] == 0xff && VAR_9[5] == 0xff)
  return VAR_4;

 if (VAR_9[4] == 0x00 && VAR_9[5] == 0x00)
  return VAR_5;
 if (VAR_9[4] == 0x01 && VAR_9[5] == 0x01)
  return VAR_1;
 if (VAR_9[4] == 0x04 && VAR_9[5] == 0x02)
  return VAR_0;
 if (VAR_9[4] == 0x01 && VAR_9[5] == 0x20)
  return VAR_6;
 if (VAR_9[0] == 0x01 && VAR_9[1] == 0x00 &&
     VAR_9[4] == 0x01 && VAR_9[5] == 0x03)
  return VAR_2;
 if (VAR_9[0] == 0x00 && VAR_9[1] == 0x00 &&
     VAR_9[4] == 0x01 && VAR_9[5] == 0x03)
  return VAR_3;

 return VAR_7;
}
