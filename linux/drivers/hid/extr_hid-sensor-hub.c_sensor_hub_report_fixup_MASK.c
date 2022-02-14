
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {scalar_t__ product; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static __u8 *FUNC_0(struct hid_device *VAR_1, __u8 *VAR_2,
  unsigned int *VAR_3)
{




 if (VAR_1->product == VAR_0 &&
  *VAR_3 == 2558 && VAR_2[913] == 0x17 && VAR_2[914] == 0x40 &&
  VAR_2[915] == 0x81 && VAR_2[916] == 0x08 &&
  VAR_2[917] == 0x00 && VAR_2[918] == 0x27 &&
  VAR_2[921] == 0x07 && VAR_2[922] == 0x00) {

  VAR_2[914] = VAR_2[935] = VAR_2[956] = 0xc0;
  VAR_2[915] = VAR_2[936] = VAR_2[957] = 0x7e;
  VAR_2[916] = VAR_2[937] = VAR_2[958] = 0xf7;
  VAR_2[917] = VAR_2[938] = VAR_2[959] = 0xff;
 }

 return VAR_2;
}
