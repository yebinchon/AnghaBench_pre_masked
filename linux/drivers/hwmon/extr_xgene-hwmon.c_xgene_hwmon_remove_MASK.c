
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_hwmon_dev {int mbox_chan; int async_msg_fifo; int hwmon_dev; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct xgene_hwmon_dev* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct xgene_hwmon_dev *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2->hwmon_dev);
 FUNC_1(&VAR_2->async_msg_fifo);
 if (VAR_0)
  FUNC_2(VAR_2->mbox_chan);
 else
  FUNC_3(VAR_2->mbox_chan);

 return 0;
}
