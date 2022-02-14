
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bcache_device {int cl; int stripe_sectors_dirty; int full_dirty_stripes; int bio_split; TYPE_1__* disk; scalar_t__ c; } ;
struct TYPE_3__ {int flags; int first_minor; scalar_t__ queue; int disk_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcache_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(struct bcache_device *VAR_3)
{
 FUNC_8(&VAR_2);

 FUNC_9("%s stopped", VAR_3->disk->disk_name);

 if (VAR_3->c)
  FUNC_0(VAR_3);
 if (VAR_3->disk && VAR_3->disk->flags & VAR_0)
  FUNC_4(VAR_3->disk);
 if (VAR_3->disk && VAR_3->disk->queue)
  FUNC_2(VAR_3->disk->queue);
 if (VAR_3->disk) {
  FUNC_6(&VAR_1,
      FUNC_5(VAR_3->disk->first_minor));
  FUNC_10(VAR_3->disk);
 }

 FUNC_1(&VAR_3->bio_split);
 FUNC_7(VAR_3->full_dirty_stripes);
 FUNC_7(VAR_3->stripe_sectors_dirty);

 FUNC_3(&VAR_3->cl);
}
