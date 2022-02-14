
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int ) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_1, const struct hid_device_id *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_1, "parse failed\n");
  goto exit;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1, "hw start failed\n");
  goto exit;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_1, "couldn't install mouse\n");
  goto exit_stop;
 }
 return 0;

exit_stop:
 FUNC_2(VAR_1);
exit:
 return VAR_3;
}
