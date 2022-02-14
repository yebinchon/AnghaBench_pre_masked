
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int quirks; } ;
struct cmhid {struct hid_device* hid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,struct cmhid*) ;
 int FUNC_4 (struct cmhid*) ;
 struct cmhid* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_5, const struct hid_device_id *VAR_6)
{
 int VAR_7;
 struct cmhid *VAR_8;

 VAR_8 = FUNC_5(sizeof(struct cmhid), VAR_1);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto allocfail;
 }

 VAR_8->hid = VAR_5;

 VAR_5->quirks |= VAR_4;
 FUNC_3(VAR_5, VAR_8);

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_5, "parse failed\n");
  goto fail;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_2 | VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_5, "hw start failed\n");
  goto fail;
 }

 return 0;
fail:
 FUNC_4(VAR_8);
allocfail:
 return VAR_7;
}
