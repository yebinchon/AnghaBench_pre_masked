
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dev; } ;
typedef int __u8 ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static __u8 *FUNC_1(struct hid_device *VAR_0, __u8 *VAR_1,
  unsigned int *VAR_2)
{
 if (*VAR_2 >= 54 && VAR_1[52] == 0x25 && VAR_1[53] == 0x01) {
  FUNC_0(&VAR_0->dev, "fixing Aureal Cy se W-01RN USB_V3.1 report descriptor.\n");
  VAR_1[53] = 0x65;
 }
 return VAR_1;
}
