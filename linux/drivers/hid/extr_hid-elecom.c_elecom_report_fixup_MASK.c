
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int product; } ;
typedef int __u8 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int*,unsigned int,int) ;

__attribute__((used)) static __u8 *FUNC_2(struct hid_device *VAR_0, __u8 *VAR_1,
  unsigned int *VAR_2)
{
 switch (VAR_0->product) {
 case 135:


  if (*VAR_2 >= 48 && VAR_1[46] == 0x05 && VAR_1[47] == 0x0c) {
   FUNC_0(VAR_0, "Fixing up Elecom BM084 report descriptor\n");
   VAR_1[47] = 0x00;
  }
  break;
 case 129:
 case 130:
 case 128:
  FUNC_1(VAR_0, VAR_1, *VAR_2, 6);
  break;
 case 133:
 case 134:
 case 131:
 case 132:
  FUNC_1(VAR_0, VAR_1, *VAR_2, 8);
  break;
 }
 return VAR_1;
}
