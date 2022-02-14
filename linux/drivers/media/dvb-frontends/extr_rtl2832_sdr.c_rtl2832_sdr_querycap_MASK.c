
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct TYPE_2__ {int name; } ;
struct rtl2832_sdr_dev {int udev; TYPE_1__ vdev; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct rtl2832_sdr_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
  struct v4l2_capability *VAR_3)
{
 struct rtl2832_sdr_dev *VAR_4 = FUNC_3(VAR_1);
 struct platform_device *VAR_5 = VAR_4->pdev;

 FUNC_0(&VAR_5->dev, "\n");

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->card, VAR_4->vdev.name, sizeof(VAR_3->card));
 FUNC_2(VAR_4->udev, VAR_3->bus_info, sizeof(VAR_3->bus_info));
 return 0;
}
