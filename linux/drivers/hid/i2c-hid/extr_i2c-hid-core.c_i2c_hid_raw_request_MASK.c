
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef unsigned char __u8 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct hid_device*,unsigned char,unsigned char*,size_t,unsigned char) ;
 int FUNC_1 (struct hid_device*,unsigned char*,size_t,unsigned char,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2, unsigned char VAR_3,
          __u8 *VAR_4, size_t VAR_5, unsigned char VAR_6,
          int VAR_7)
{
 switch (VAR_7) {
 case 129:
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 case 128:
  if (VAR_4[0] != VAR_3)
   return -VAR_0;
  return FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6, 1);
 default:
  return -VAR_1;
 }
}
