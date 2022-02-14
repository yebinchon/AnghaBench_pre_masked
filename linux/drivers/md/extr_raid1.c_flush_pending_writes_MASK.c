
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ head; } ;
struct r1conf {int device_lock; scalar_t__ pending_count; TYPE_1__ pending_bio_list; } ;
struct blk_plug {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct bio* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (struct r1conf*,struct bio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct r1conf *VAR_1)
{



 FUNC_5(&VAR_1->device_lock);

 if (VAR_1->pending_bio_list.head) {
  struct blk_plug VAR_2;
  struct bio *VAR_3;

  VAR_3 = FUNC_1(&VAR_1->pending_bio_list);
  VAR_1->pending_count = 0;
  FUNC_6(&VAR_1->device_lock);
  FUNC_0(VAR_0);
  FUNC_3(&VAR_2);
  FUNC_4(VAR_1, VAR_3);
  FUNC_2(&VAR_2);
 } else
  FUNC_6(&VAR_1->device_lock);
}
