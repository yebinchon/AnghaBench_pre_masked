
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int dummy; } ;
struct hid_device {int dummy; } ;


 struct wiimote_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct wiimote_data*) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_0)
{
 struct wiimote_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "Device removed\n");
 FUNC_2(VAR_1);
}
