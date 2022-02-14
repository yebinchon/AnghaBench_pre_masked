
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int dev; int lock; int open_count; } ;
struct gendisk {struct rbd_device* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct rbd_device *VAR_2 = VAR_0->private_data;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock);
 VAR_3 = VAR_2->open_count--;
 FUNC_3(&VAR_2->lock);
 FUNC_1(VAR_3 > 0);

 FUNC_0(&VAR_2->dev);
}
