
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {int dev; int lock; int open_count; int flags; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct rbd_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct rbd_device *VAR_4 = VAR_2->bd_disk->private_data;
 bool VAR_5 = 0;

 FUNC_1(&VAR_4->lock);
 if (FUNC_3(VAR_1, &VAR_4->flags))
  VAR_5 = 1;
 else
  VAR_4->open_count++;
 FUNC_2(&VAR_4->lock);
 if (VAR_5)
  return -VAR_0;

 (void) FUNC_0(&VAR_4->dev);

 return 0;
}
