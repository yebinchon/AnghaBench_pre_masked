
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {TYPE_1__* fops; } ;
struct block_device {struct gendisk* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {int (* ioctl ) (struct block_device*,int ,unsigned int,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*,int ,unsigned int,unsigned long) ;

int FUNC_1(struct block_device *VAR_1, fmode_t VAR_2,
   unsigned VAR_3, unsigned long VAR_4)
{
 struct gendisk *VAR_5 = VAR_1->bd_disk;

 if (VAR_5->fops->ioctl)
  return VAR_5->fops->ioctl(VAR_1, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
