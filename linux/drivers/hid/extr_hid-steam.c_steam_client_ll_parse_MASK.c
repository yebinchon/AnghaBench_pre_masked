
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct steam_device {TYPE_1__* hdev; } ;
struct hid_device {struct steam_device* driver_data; } ;
struct TYPE_2__ {int dev_rsize; int dev_rdesc; } ;


 int FUNC_0 (struct hid_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0)
{
 struct steam_device *VAR_1 = VAR_0->driver_data;

 return FUNC_0(VAR_0, VAR_1->hdev->dev_rdesc,
   VAR_1->hdev->dev_rsize);
}
