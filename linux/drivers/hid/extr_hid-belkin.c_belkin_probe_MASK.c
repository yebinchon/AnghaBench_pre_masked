
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,void*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3, const struct hid_device_id *VAR_4)
{
 unsigned long VAR_5 = VAR_4->driver_data;
 int VAR_6;

 FUNC_3(VAR_3, (void *)VAR_5);

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_3, "parse failed\n");
  goto err_free;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_1 |
  ((VAR_5 & VAR_0) ? VAR_2 : 0));
 if (VAR_6) {
  FUNC_0(VAR_3, "hw start failed\n");
  goto err_free;
 }

 return 0;
err_free:
 return VAR_6;
}
