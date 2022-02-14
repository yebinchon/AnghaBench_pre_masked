
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pk_device {TYPE_1__* pm; } ;
struct hid_report {int id; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int ifnum; } ;


 struct pk_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (TYPE_1__*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_0, struct hid_report *VAR_1,
 u8 *VAR_2, int VAR_3)
{
 struct pk_device *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = 0;

 if (1 == VAR_4->pm->ifnum) {
  if (VAR_1->id == VAR_2[0])
   switch (VAR_1->id) {
   case 0x01:
   case 0x03:
   case 0x04:
    VAR_5 = FUNC_1(VAR_4->pm,
      VAR_1->id, VAR_2, VAR_3);
    break;
   }
 }

 return VAR_5;
}
