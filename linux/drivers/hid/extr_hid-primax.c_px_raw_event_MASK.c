
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report {int id; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*,int) ;
 int FUNC_1 (struct hid_device*,int ,int*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1, struct hid_report *VAR_2,
  u8 *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4;

 switch (VAR_2->id) {
 case 0:
  while (--VAR_5 > 1) {
   if (VAR_3[VAR_5] < 0xE0 || VAR_3[VAR_5] > 0xE7)
    continue;
   VAR_3[0] |= (1 << (VAR_3[VAR_5] - 0xE0));
   VAR_3[VAR_5] = 0;
  }
  FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4, 0);
  return 1;

 default:

  FUNC_0(VAR_1, "unknown report type %d\n", VAR_2->id);
  break;
 }

 return 0;
}
