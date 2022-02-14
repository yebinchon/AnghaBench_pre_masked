
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
 if (*VAR_2 == 178 &&
       VAR_1[111] == 0x06 && VAR_1[112] == 0x00 &&
       VAR_1[113] == 0xff) {
  FUNC_0(VAR_0,
    "fixing up pc-midi keyboard report descriptor\n");

  VAR_1[144] = 0x18;
 }
 return VAR_1;
}
