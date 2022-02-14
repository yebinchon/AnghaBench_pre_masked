
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int quirks; int dev; } ;
struct creative_sb0540 {struct hid_device* hid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct creative_sb0540* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct creative_sb0540*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_4,
  const struct hid_device_id *VAR_5)
{
 int VAR_6;
 struct creative_sb0540 *VAR_7;

 VAR_7 = FUNC_0(&VAR_4->dev,
  sizeof(struct creative_sb0540), VAR_1);

 if (!VAR_7)
  return -VAR_0;

 VAR_7->hid = VAR_4;


 VAR_4->quirks |= VAR_3;

 FUNC_4(VAR_4, VAR_7);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_4, "parse failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_4, "hw start failed\n");
  return VAR_6;
 }

 return VAR_6;
}
