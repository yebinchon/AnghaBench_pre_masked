
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sony_sc {int quirks; TYPE_1__* hdev; scalar_t__ hw_version; scalar_t__ fw_version; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct sony_sc* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct sony_sc*) ;
 int FUNC_5 (struct sony_sc*) ;
 int FUNC_6 (struct sony_sc*) ;

__attribute__((used)) static void FUNC_7(struct hid_device *VAR_4)
{
 struct sony_sc *VAR_5 = FUNC_1(VAR_4);

 FUNC_2(VAR_4);

 if (VAR_5->quirks & VAR_0)
  FUNC_0(&VAR_5->hdev->dev, &VAR_1);

 if (VAR_5->fw_version)
  FUNC_0(&VAR_5->hdev->dev, &VAR_2);

 if (VAR_5->hw_version)
  FUNC_0(&VAR_5->hdev->dev, &VAR_3);

 FUNC_4(VAR_5);

 FUNC_6(VAR_5);

 FUNC_5(VAR_5);

 FUNC_3(VAR_4);
}
