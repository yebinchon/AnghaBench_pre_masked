
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device_id {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct hid_device {TYPE_1__ dev; } ;
struct elo_priv {int work; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (struct hid_device*,int ) ;
 int FUNC_4 (struct hid_device*,char*) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*,struct elo_priv*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct elo_priv*) ;
 struct elo_priv* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct hid_device *VAR_6, const struct hid_device_id *VAR_7)
{
 struct elo_priv *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(&VAR_8->work, VAR_4);
 VAR_8->usbdev = FUNC_7(FUNC_11(VAR_6->dev.parent));

 FUNC_6(VAR_6, VAR_8);

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9) {
  FUNC_2(VAR_6, "parse failed\n");
  goto err_free;
 }

 VAR_9 = FUNC_3(VAR_6, VAR_3);
 if (VAR_9) {
  FUNC_2(VAR_6, "hw start failed\n");
  goto err_free;
 }

 if (FUNC_1(VAR_8->usbdev)) {
  FUNC_4(VAR_6, "broken firmware found, installing workaround\n");
  FUNC_10(VAR_5, &VAR_8->work, VAR_0);
 }

 return 0;
err_free:
 FUNC_8(VAR_8);
 return VAR_9;
}
