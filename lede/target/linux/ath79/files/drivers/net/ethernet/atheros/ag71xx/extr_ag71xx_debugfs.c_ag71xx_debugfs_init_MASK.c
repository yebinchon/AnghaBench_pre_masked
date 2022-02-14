
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int debugfs_dir; } ;
struct ag71xx {TYPE_1__ debug; TYPE_2__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int ,struct ag71xx*,int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct ag71xx *VAR_7)
{
 struct device *VAR_8 = &VAR_7->pdev->dev;

 VAR_7->debug.debugfs_dir = FUNC_0(FUNC_3(VAR_8),
         VAR_2);
 if (!VAR_7->debug.debugfs_dir) {
  FUNC_2(VAR_8, "unable to create debugfs directory\n");
  return -VAR_0;
 }

 FUNC_1("int_stats", VAR_1, VAR_7->debug.debugfs_dir,
       VAR_7, &VAR_3);
 FUNC_1("napi_stats", VAR_1, VAR_7->debug.debugfs_dir,
       VAR_7, &VAR_4);
 FUNC_1("tx_ring", VAR_1, VAR_7->debug.debugfs_dir,
       VAR_7, &VAR_6);
 FUNC_1("rx_ring", VAR_1, VAR_7->debug.debugfs_dir,
       VAR_7, &VAR_5);

 return 0;
}
