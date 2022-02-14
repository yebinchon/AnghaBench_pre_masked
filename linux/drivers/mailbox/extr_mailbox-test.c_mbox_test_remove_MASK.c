
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mbox_test_device {scalar_t__ rx_channel; scalar_t__ tx_channel; int root_debugfs_dir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct mbox_test_device* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mbox_test_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->root_debugfs_dir);

 if (VAR_1->tx_channel)
  FUNC_1(VAR_1->tx_channel);
 if (VAR_1->rx_channel)
  FUNC_1(VAR_1->rx_channel);

 return 0;
}
