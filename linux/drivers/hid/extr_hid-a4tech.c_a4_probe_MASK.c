
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int driver_data; } ;
struct hid_device {int dev; } ;
struct a4tech_sc {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct a4tech_sc* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct a4tech_sc*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_3, const struct hid_device_id *VAR_4)
{
 struct a4tech_sc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3, "can't alloc device descriptor\n");
  return -VAR_0;
 }

 VAR_5->quirks = VAR_4->driver_data;

 FUNC_4(VAR_3, VAR_5);

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_3, "parse failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_3, "hw start failed\n");
  return VAR_6;
 }

 return 0;
}
