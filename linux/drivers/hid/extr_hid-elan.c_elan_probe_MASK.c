
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int driver_data; } ;
struct hid_device {int dev; } ;
struct elan_drvdata {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct elan_drvdata* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,char*) ;
 int FUNC_4 (struct hid_device*,int ) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*,struct elan_drvdata*) ;
 scalar_t__ FUNC_8 (struct hid_device*) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_5, const struct hid_device_id *VAR_6)
{
 int VAR_7;
 struct elan_drvdata *VAR_8;

 VAR_8 = FUNC_0(&VAR_5->dev, sizeof(*VAR_8), VAR_3);

 if (!VAR_8)
  return -VAR_2;

 FUNC_7(VAR_5, VAR_8);

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_5, "Hid Parse failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_3(VAR_5, "Hid hw start failed\n");
  return VAR_7;
 }

 if (FUNC_8(VAR_5))
  return 0;

 if (!VAR_8->input) {
  FUNC_3(VAR_5, "Input device is not registered\n");
  VAR_7 = -VAR_1;
  goto err;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  goto err;

 if (VAR_6->driver_data & VAR_0) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7)
   goto err;
 }

 return 0;
err:
 FUNC_5(VAR_5);
 return VAR_7;
}
