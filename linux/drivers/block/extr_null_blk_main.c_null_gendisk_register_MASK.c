
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nullb {TYPE_1__* dev; int disk_name; int q; int index; struct gendisk* disk; } ;
struct gendisk {int flags; int disk_name; int queue; struct nullb* private_data; int * fops; int first_minor; int major; } ;
typedef int sector_t ;
struct TYPE_2__ {scalar_t__ zoned; scalar_t__ size; int home_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gendisk*) ;
 struct gendisk* FUNC_1 (int,int ) ;
 int FUNC_2 (struct gendisk*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct gendisk*,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct nullb *VAR_6)
{
 struct gendisk *VAR_7;
 sector_t VAR_8;

 VAR_7 = VAR_6->disk = FUNC_1(1, VAR_6->dev->home_node);
 if (!VAR_7)
  return -VAR_1;
 VAR_8 = (sector_t)VAR_6->dev->size * 1024 * 1024ULL;
 FUNC_3(VAR_7, VAR_8 >> 9);

 VAR_7->flags |= VAR_2 | VAR_3;
 VAR_7->major = VAR_5;
 VAR_7->first_minor = VAR_6->index;
 VAR_7->fops = &VAR_4;
 VAR_7->private_data = VAR_6;
 VAR_7->queue = VAR_6->q;
 FUNC_4(VAR_7->disk_name, VAR_6->disk_name, VAR_0);

 if (VAR_6->dev->zoned) {
  int VAR_9 = FUNC_2(VAR_7);

  if (VAR_9 != 0)
   return VAR_9;
 }

 FUNC_0(VAR_7);
 return 0;
}
