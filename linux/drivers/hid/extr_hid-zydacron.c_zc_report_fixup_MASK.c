
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
 if (*VAR_2 >= 253 &&
  VAR_1[0x96] == 0xbc && VAR_1[0x97] == 0xff &&
  VAR_1[0xca] == 0xbc && VAR_1[0xcb] == 0xff &&
  VAR_1[0xe1] == 0xbc && VAR_1[0xe2] == 0xff) {
   FUNC_0(VAR_0,
    "fixing up zydacron remote control report descriptor\n");
   VAR_1[0x96] = VAR_1[0xca] = VAR_1[0xe1] = 0x0c;
   VAR_1[0x97] = VAR_1[0xcb] = VAR_1[0xe2] = 0x00;
  }
 return VAR_1;
}
