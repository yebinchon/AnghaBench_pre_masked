
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_device {int protocol_major; } ;
struct hid_device {int name; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct hidpp_device* FUNC_2 (struct hid_device*) ;
 char* FUNC_3 (struct hidpp_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_0)
{
 struct hidpp_device *VAR_1 = FUNC_2(VAR_0);
 char *VAR_2;

 if (VAR_1->protocol_major < 2)
  return;

 VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2) {
  FUNC_1(VAR_0, "unable to retrieve the name of the device");
 } else {
  FUNC_0("HID++: Got name: %s\n", VAR_2);
  FUNC_5(VAR_0->name, sizeof(VAR_0->name), "%s", VAR_2);
 }

 FUNC_4(VAR_2);
}
