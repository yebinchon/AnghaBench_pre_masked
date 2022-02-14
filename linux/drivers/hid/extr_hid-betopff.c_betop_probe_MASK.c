
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {scalar_t__ driver_data; } ;
struct hid_device {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int) ;
 int FUNC_3 (struct hid_device*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3, const struct hid_device_id *VAR_4)
{
 int VAR_5;

 if (VAR_4->driver_data)
  VAR_3->quirks |= VAR_2;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_3, "parse failed\n");
  goto err;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_0 & ~VAR_1);
 if (VAR_5) {
  FUNC_1(VAR_3, "hw start failed\n");
  goto err;
 }

 FUNC_0(VAR_3);

 return 0;
err:
 return VAR_5;
}
