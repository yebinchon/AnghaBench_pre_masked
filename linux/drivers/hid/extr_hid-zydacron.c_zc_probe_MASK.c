
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zc_device {int dummy; } ;
struct hid_device_id {int dummy; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zc_device* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct zc_device*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_3, const struct hid_device_id *VAR_4)
{
 int VAR_5;
 struct zc_device *VAR_6;

 VAR_6 = FUNC_0(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_3, "can't alloc descriptor\n");
  return -VAR_0;
 }

 FUNC_4(VAR_3, VAR_6);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_3, "parse failed\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5) {
  FUNC_1(VAR_3, "hw start failed\n");
  return VAR_5;
 }

 return 0;
}
