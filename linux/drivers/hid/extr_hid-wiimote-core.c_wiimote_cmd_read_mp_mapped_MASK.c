
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
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (struct wiimote_data*,int,int*,int) ;

__attribute__((used)) static __u8 FUNC_2(struct wiimote_data *VAR_5)
{
 int VAR_6;
 __u8 VAR_7[6];


 VAR_6 = FUNC_1(VAR_5, 0xa400fa, VAR_7, 6);
 if (VAR_6 != 6)
  return VAR_0;

 FUNC_0(VAR_5->hdev, "mapped motion plus ID: %6phC\n", VAR_7);

 if (VAR_7[0] == 0xff && VAR_7[1] == 0xff && VAR_7[2] == 0xff &&
     VAR_7[3] == 0xff && VAR_7[4] == 0xff && VAR_7[5] == 0xff)
  return VAR_0;

 if (VAR_7[4] == 0x04 && VAR_7[5] == 0x05)
  return VAR_3;
 else if (VAR_7[4] == 0x05 && VAR_7[5] == 0x05)
  return VAR_2;
 else if (VAR_7[4] == 0x07 && VAR_7[5] == 0x05)
  return VAR_1;

 return VAR_4;
}
