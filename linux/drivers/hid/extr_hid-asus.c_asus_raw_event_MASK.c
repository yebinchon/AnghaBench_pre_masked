
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct asus_drvdata {scalar_t__ tp; scalar_t__ battery; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct asus_drvdata*,scalar_t__*,int) ;
 int FUNC_1 (struct asus_drvdata*,scalar_t__*,int) ;
 struct asus_drvdata* FUNC_2 (struct hid_device*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_2,
  struct hid_report *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct asus_drvdata *VAR_6 = FUNC_2(VAR_2);

 if (VAR_6->battery && VAR_4[0] == VAR_0)
  return FUNC_0(VAR_6, VAR_4, VAR_5);

 if (VAR_6->tp && VAR_4[0] == VAR_1)
  return FUNC_1(VAR_6, VAR_4, VAR_5);

 return 0;
}
