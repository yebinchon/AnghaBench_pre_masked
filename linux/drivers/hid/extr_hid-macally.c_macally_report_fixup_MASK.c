
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
 if (*VAR_2 >= 60 && VAR_1[53] == 0x65 && VAR_1[59] == 0x65) {
  FUNC_0(VAR_0,
   "fixing up Macally ikey keyboard report descriptor\n");
  VAR_1[53] = VAR_1[59] = 0x67;
 }
 return VAR_1;
}
