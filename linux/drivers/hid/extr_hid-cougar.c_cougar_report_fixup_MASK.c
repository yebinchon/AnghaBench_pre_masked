
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;

__attribute__((used)) static __u8 *FUNC_1(struct hid_device *VAR_1, __u8 *VAR_2,
     unsigned int *VAR_3)
{
 if (VAR_2[2] == 0x09 && VAR_2[3] == 0x02 &&
     (VAR_2[115] | VAR_2[116] << 8) >= VAR_0) {
  FUNC_0(VAR_1,
   "usage count exceeds max: fixing up report descriptor\n");
  VAR_2[115] = ((VAR_0-1) & 0xff);
  VAR_2[116] = ((VAR_0-1) >> 8);
 }
 return VAR_2;
}
