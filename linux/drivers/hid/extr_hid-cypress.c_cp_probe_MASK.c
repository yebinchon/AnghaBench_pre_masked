
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int ) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,void*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_1, const struct hid_device_id *VAR_2)
{
 unsigned long VAR_3 = VAR_2->driver_data;
 int VAR_4;

 FUNC_3(VAR_1, (void *)VAR_3);

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_1, "parse failed\n");
  goto err_free;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_1, "hw start failed\n");
  goto err_free;
 }

 return 0;
err_free:
 return VAR_4;
}
