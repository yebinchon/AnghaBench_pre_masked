
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct elan_drvdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct elan_drvdata*,scalar_t__*) ;
 int FUNC_1 (struct elan_drvdata*,scalar_t__*) ;
 struct elan_drvdata* FUNC_2 (struct hid_device*) ;
 scalar_t__ FUNC_3 (struct hid_device*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_6,
     struct hid_report *VAR_7, u8 *VAR_8, int VAR_9)
{
 struct elan_drvdata *VAR_10 = FUNC_2(VAR_6);

 if (FUNC_3(VAR_6))
  return 0;

 if (VAR_8[0] == VAR_5 ||
     VAR_8[0] == VAR_2 ||
     VAR_8[0] == VAR_4) {
  if (VAR_9 == VAR_1) {
   FUNC_1(VAR_10, VAR_8);
   return 1;
  }
 }

 if (VAR_8[0] == VAR_3 && VAR_9 == VAR_0) {
  FUNC_0(VAR_10, VAR_8);
  return 1;
 }

 return 0;
}
