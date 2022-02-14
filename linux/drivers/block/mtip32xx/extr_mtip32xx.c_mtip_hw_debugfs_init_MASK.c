
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {int * dfs_node; TYPE_1__* disk; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int disk_name; } ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int,int *,struct driver_data*,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct driver_data *VAR_3)
{
 if (!VAR_0)
  return -1;

 VAR_3->dfs_node = FUNC_1(VAR_3->disk->disk_name, VAR_0);
 if (FUNC_0(VAR_3->dfs_node)) {
  FUNC_3(&VAR_3->pdev->dev,
   "Error creating node %s under debugfs\n",
      VAR_3->disk->disk_name);
  VAR_3->dfs_node = ((void*)0);
  return -1;
 }

 FUNC_2("flags", 0444, VAR_3->dfs_node, VAR_3, &VAR_1);
 FUNC_2("registers", 0444, VAR_3->dfs_node, VAR_3,
       &VAR_2);

 return 0;
}
