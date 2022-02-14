
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; int dev; } ;
struct gendisk {struct blkfront_info* private_data; } ;
struct block_device {int bd_mutex; int bd_openers; } ;
struct blkfront_info {int mutex; int * xbdev; struct gendisk* gd; } ;


 struct block_device* FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (struct block_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct blkfront_info*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 struct blkfront_info* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (struct gendisk*) ;
 int FUNC_7 (struct blkfront_info*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct blkfront_info*) ;

__attribute__((used)) static int FUNC_11(struct xenbus_device *VAR_1)
{
 struct blkfront_info *VAR_2 = FUNC_4(&VAR_1->dev);
 struct block_device *VAR_3 = ((void*)0);
 struct gendisk *VAR_4;

 FUNC_3(&VAR_1->dev, "%s removed", VAR_1->nodename);

 if (!VAR_2)
  return 0;

 FUNC_2(VAR_2, 0);

 FUNC_8(&VAR_2->mutex);

 VAR_4 = VAR_2->gd;
 if (VAR_4)
  VAR_3 = FUNC_0(VAR_4, 0);

 VAR_2->xbdev = ((void*)0);
 FUNC_9(&VAR_2->mutex);

 if (!VAR_3) {
  FUNC_8(&VAR_0);
  FUNC_7(VAR_2);
  FUNC_9(&VAR_0);
  return 0;
 }







 FUNC_8(&VAR_3->bd_mutex);
 VAR_2 = VAR_4->private_data;

 FUNC_5(FUNC_6(VAR_4),
   "%s was hot-unplugged, %d stale handles\n",
   VAR_1->nodename, VAR_3->bd_openers);

 if (VAR_2 && !VAR_3->bd_openers) {
  FUNC_10(VAR_2);
  VAR_4->private_data = ((void*)0);
  FUNC_8(&VAR_0);
  FUNC_7(VAR_2);
  FUNC_9(&VAR_0);
 }

 FUNC_9(&VAR_3->bd_mutex);
 FUNC_1(VAR_3);

 return 0;
}
