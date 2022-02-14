
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,char*,unsigned char,int) ;
 int FUNC_1 (struct hid_device*,unsigned char,unsigned char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_5,
     unsigned char *VAR_6, unsigned char VAR_7)
{
 int VAR_8;

 VAR_6[0] = VAR_0;
 VAR_6[1] = 0x05;
 VAR_6[2] = 0x03;
 VAR_6[3] = VAR_7;
 VAR_6[4] = 0x01;

 VAR_8 = FUNC_1(VAR_5, VAR_0, VAR_6,
     VAR_1, VAR_2,
     VAR_4);
 if (VAR_8 != VAR_1) {
  FUNC_0(VAR_5, "Set report error for parm %d: %d\n", VAR_7, VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_0, VAR_6,
     VAR_1, VAR_2,
     VAR_3);
 if (VAR_8 != VAR_1) {
  FUNC_0(VAR_5, "Get report error for parm %d: %d\n", VAR_7, VAR_8);
  return VAR_8;
 }

 return 0;
}
