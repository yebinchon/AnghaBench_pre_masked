
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct disk_events* ev; struct block_device_operations* fops; } ;
struct disk_events {unsigned int clearing; unsigned int pending; int lock; } ;
struct block_device_operations {scalar_t__ (* media_changed ) (struct gendisk*) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct gendisk*,int) ;
 int FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct disk_events*,unsigned int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct gendisk*) ;

unsigned int FUNC_7(struct gendisk *VAR_1, unsigned int VAR_2)
{
 const struct block_device_operations *VAR_3 = VAR_1->fops;
 struct disk_events *VAR_4 = VAR_1->ev;
 unsigned int VAR_5;
 unsigned int VAR_6 = VAR_2;

 if (!VAR_4) {

  if ((VAR_2 & VAR_0) &&
      VAR_3->media_changed && VAR_3->media_changed(VAR_1))
   return VAR_0;
  return 0;
 }

 FUNC_2(VAR_1);






 FUNC_4(&VAR_4->lock);
 VAR_6 |= VAR_4->clearing;
 VAR_4->clearing = 0;
 FUNC_5(&VAR_4->lock);

 FUNC_3(VAR_4, &VAR_6);




 FUNC_1(VAR_1, VAR_4->clearing ? 1 : 0);


 FUNC_4(&VAR_4->lock);
 VAR_5 = VAR_4->pending & VAR_2;
 VAR_4->pending &= ~VAR_2;
 FUNC_5(&VAR_4->lock);
 FUNC_0(VAR_6 & VAR_2);

 return VAR_5;
}
