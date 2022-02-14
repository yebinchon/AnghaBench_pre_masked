
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,unsigned char,int *,size_t,int ) ;
 int FUNC_1 (struct hid_device*,unsigned char,int *,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_5, unsigned char VAR_6,
    __u8 *VAR_7, size_t VAR_8, unsigned char VAR_9,
    int VAR_10)
{
 u8 VAR_11;

 switch (VAR_9) {
 case 132:
  VAR_11 = VAR_2;
  break;
 case 130:
  VAR_11 = VAR_4;
  break;
 case 131:
  VAR_11 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_10) {
 case 129:
  return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
 case 128:
  return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
 default:
  return -VAR_1;
 }
}
