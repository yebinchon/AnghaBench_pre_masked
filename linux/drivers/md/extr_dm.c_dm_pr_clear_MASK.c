
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pr_ops {int (* pr_clear ) (struct block_device*,int ) ;} ;
struct mapped_device {int dummy; } ;
struct block_device {TYPE_2__* bd_disk; } ;
struct TYPE_4__ {TYPE_1__* fops; struct mapped_device* private_data; } ;
struct TYPE_3__ {struct pr_ops* pr_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct mapped_device*,int*,struct block_device**) ;
 int FUNC_1 (struct mapped_device*,int) ;
 int FUNC_2 (struct block_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_1, u64 VAR_2)
{
 struct mapped_device *VAR_3 = VAR_1->bd_disk->private_data;
 const struct pr_ops *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3, &VAR_6, &VAR_1);
 if (VAR_5 < 0)
  goto out;

 VAR_4 = VAR_1->bd_disk->fops->pr_ops;
 if (VAR_4 && VAR_4->pr_clear)
  VAR_5 = VAR_4->pr_clear(VAR_1, VAR_2);
 else
  VAR_5 = -VAR_0;
out:
 FUNC_1(VAR_3, VAR_6);
 return VAR_5;
}
