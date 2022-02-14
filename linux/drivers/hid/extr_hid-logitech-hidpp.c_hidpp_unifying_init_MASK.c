
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidpp_device {struct hid_device* hid_dev; } ;
struct hid_device {char const* uniq; int product; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (struct hidpp_device*) ;
 int FUNC_2 (struct hidpp_device*,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int,char*,...) ;

__attribute__((used)) static int FUNC_5(struct hidpp_device *VAR_1)
{
 struct hid_device *VAR_2 = VAR_1->hid_dev;
 const char *VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_4(VAR_2->uniq, sizeof(VAR_2->uniq), "%04x-%4phD",
   VAR_2->product, &VAR_4);
 FUNC_0("HID++ Unifying: Got serial: %s\n", VAR_2->uniq);

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_4(VAR_2->name, sizeof(VAR_2->name), "%s", VAR_3);
 FUNC_0("HID++ Unifying: Got name: %s\n", VAR_3);

 FUNC_3(VAR_3);
 return 0;
}
