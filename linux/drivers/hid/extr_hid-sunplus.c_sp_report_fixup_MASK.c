
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
 if (*VAR_2 >= 112 && VAR_1[104] == 0x26 && VAR_1[105] == 0x80 &&
   VAR_1[106] == 0x03) {
  FUNC_0(VAR_0, "fixing up Sunplus Wireless Desktop report descriptor\n");
  VAR_1[105] = VAR_1[110] = 0x03;
  VAR_1[106] = VAR_1[111] = 0x21;
 }
 return VAR_1;
}
