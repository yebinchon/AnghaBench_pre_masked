
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int product; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;







 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,int ) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_1, const struct hid_device_id *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_1, "parse failed\n");
  goto err;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1, "hw start failed\n");
  goto err;
 }

 switch (VAR_2->product) {
 case 133:
 case 130:
 case 129:
 case 131:
 case 132:
 case 128:
  VAR_3 = FUNC_6(VAR_1);
  if (VAR_3) {
   FUNC_0(VAR_1, "tablet enabling failed\n");
   goto enabling_err;
  }
  break;
 case 134:




  if (FUNC_2(VAR_1))
   FUNC_1(VAR_1);
  break;
 }

 return 0;
enabling_err:
 FUNC_4(VAR_1);
err:
 return VAR_3;
}
