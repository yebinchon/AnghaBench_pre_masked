
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct blkfront_info* private_data; } ;
struct block_device {struct gendisk* bd_disk; } ;
struct blkfront_info {int mutex; int gd; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct gendisk *VAR_4 = VAR_2->bd_disk;
 struct blkfront_info *VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_1);

 VAR_5 = VAR_4->private_data;
 if (!VAR_5) {

  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_0(&VAR_5->mutex);

 if (!VAR_5->gd)

  VAR_6 = -VAR_0;

 FUNC_1(&VAR_5->mutex);

out:
 FUNC_1(&VAR_1);
 return VAR_6;
}
