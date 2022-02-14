
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pr_ops {int (* pr_register ) (TYPE_3__*,int ,int ,int ) ;} ;
struct dm_target {int dummy; } ;
struct dm_pr {int flags; int new_key; int old_key; } ;
struct dm_dev {TYPE_3__* bdev; } ;
typedef int sector_t ;
struct TYPE_6__ {TYPE_2__* bd_disk; } ;
struct TYPE_5__ {TYPE_1__* fops; } ;
struct TYPE_4__ {struct pr_ops* pr_ops; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_1, struct dm_dev *VAR_2,
       sector_t VAR_3, sector_t VAR_4, void *VAR_5)
{
 struct dm_pr *VAR_6 = VAR_5;
 const struct pr_ops *VAR_7 = VAR_2->bdev->bd_disk->fops->pr_ops;

 if (!VAR_7 || !VAR_7->pr_register)
  return -VAR_0;
 return VAR_7->pr_register(VAR_2->bdev, VAR_6->old_key, VAR_6->new_key, VAR_6->flags);
}
