
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmi_data {int device_flags; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;



 int VAR_0 ;

 struct rmi_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,int*,int) ;
 int FUNC_2 (struct hid_device*,int*,int) ;
 int FUNC_3 (struct hid_device*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_1,
  struct hid_report *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct rmi_data *VAR_5 = FUNC_0(VAR_1);

 if (!(VAR_5->device_flags & VAR_0))
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (VAR_4 < 2)
  return 0;

 switch (VAR_3[0]) {
 case 128:
  return FUNC_3(VAR_1, VAR_3, VAR_4);
 case 129:
  return FUNC_2(VAR_1, VAR_3, VAR_4);
 default:
  return 1;
 }

 return 0;
}
