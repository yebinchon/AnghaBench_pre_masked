
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pktcdvd_device {TYPE_1__* bdev; } ;
struct gendisk {TYPE_2__* fops; struct pktcdvd_device* private_data; } ;
struct TYPE_4__ {unsigned int (* check_events ) (struct gendisk*,unsigned int) ;} ;
struct TYPE_3__ {struct gendisk* bd_disk; } ;


 unsigned int FUNC_0 (struct gendisk*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct gendisk *VAR_0,
         unsigned int VAR_1)
{
 struct pktcdvd_device *VAR_2 = VAR_0->private_data;
 struct gendisk *VAR_3;

 if (!VAR_2)
  return 0;
 if (!VAR_2->bdev)
  return 0;
 VAR_3 = VAR_2->bdev->bd_disk;
 if (!VAR_3 || !VAR_3->fops->check_events)
  return 0;
 return VAR_3->fops->check_events(VAR_3, VAR_1);
}
