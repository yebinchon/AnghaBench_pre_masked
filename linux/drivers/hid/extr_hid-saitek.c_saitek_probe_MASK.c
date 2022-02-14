
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saitek_sc {unsigned long quirks; int mode; } ;
struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct saitek_sc* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct saitek_sc*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_3,
  const struct hid_device_id *VAR_4)
{
 unsigned long VAR_5 = VAR_4->driver_data;
 struct saitek_sc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_3, "can't alloc saitek descriptor\n");
  return -VAR_0;
 }

 VAR_6->quirks = VAR_5;
 VAR_6->mode = -1;

 FUNC_4(VAR_3, VAR_6);

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7) {
  FUNC_1(VAR_3, "parse failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_3, "hw start failed\n");
  return VAR_7;
 }

 return 0;
}
