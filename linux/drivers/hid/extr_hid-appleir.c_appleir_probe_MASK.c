
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int quirks; } ;
struct appleir {int key_up_timer; int lock; struct hid_device* hid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,struct appleir*) ;
 int VAR_5 ;
 int FUNC_4 (struct appleir*) ;
 struct appleir* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_6, const struct hid_device_id *VAR_7)
{
 int VAR_8;
 struct appleir *VAR_9;

 VAR_9 = FUNC_5(sizeof(struct appleir), VAR_1);
 if (!VAR_9) {
  VAR_8 = -VAR_0;
  goto allocfail;
 }

 VAR_9->hid = VAR_6;


 VAR_6->quirks |= VAR_4;

 FUNC_6(&VAR_9->lock);
 FUNC_7(&VAR_9->key_up_timer, VAR_5, 0);

 FUNC_3(VAR_6, VAR_9);

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_6, "parse failed\n");
  goto fail;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_2 | VAR_3);
 if (VAR_8) {
  FUNC_0(VAR_6, "hw start failed\n");
  goto fail;
 }

 return 0;
fail:
 FUNC_4(VAR_9);
allocfail:
 return VAR_8;
}
