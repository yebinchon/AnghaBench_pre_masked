
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pr_ops {int (* pr_reserve ) (struct block_device*,int ,int,int ) ;} ;
struct mapped_device {int dummy; } ;
struct block_device {TYPE_2__* bd_disk; } ;
typedef enum pr_type { ____Placeholder_pr_type } pr_type ;
struct TYPE_4__ {TYPE_1__* fops; struct mapped_device* private_data; } ;
struct TYPE_3__ {struct pr_ops* pr_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct mapped_device*,int*,struct block_device**) ;
 int FUNC_1 (struct mapped_device*,int) ;
 int FUNC_2 (struct block_device*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_1, u64 VAR_2, enum pr_type VAR_3,
    u32 VAR_4)
{
 struct mapped_device *VAR_5 = VAR_1->bd_disk->private_data;
 const struct pr_ops *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_5, &VAR_8, &VAR_1);
 if (VAR_7 < 0)
  goto out;

 VAR_6 = VAR_1->bd_disk->fops->pr_ops;
 if (VAR_6 && VAR_6->pr_reserve)
  VAR_7 = VAR_6->pr_reserve(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  VAR_7 = -VAR_0;
out:
 FUNC_1(VAR_5, VAR_8);
 return VAR_7;
}
