
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report {int dummy; } ;
struct hid_device {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_1,
   struct hid_report *VAR_2, u8 *VAR_3, int VAR_4)
{





 if (FUNC_0(VAR_1->product == VAR_0
   && VAR_4 == 3
   && VAR_3[0] == 0x15
   && VAR_3[1] == 0x94
   && VAR_3[2] == 0x01)) {
  VAR_3[1] = 0x00;
  VAR_3[2] = 0x01;
 }

 return 0;
}
