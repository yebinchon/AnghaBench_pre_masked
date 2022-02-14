
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct hid_device*,char*) ;

__attribute__((used)) static __u8 *FUNC_1(struct hid_device *VAR_0, __u8 *VAR_1,
  unsigned int *VAR_2)
{
 if (*VAR_2 >= 18 && VAR_1[11] == 0x3c && VAR_1[12] == 0x02) {
  FUNC_0(VAR_0, "fixing up Cherry Cymotion report descriptor\n");
  VAR_1[11] = VAR_1[16] = 0xff;
  VAR_1[12] = VAR_1[17] = 0x03;
 }
 return VAR_1;
}
