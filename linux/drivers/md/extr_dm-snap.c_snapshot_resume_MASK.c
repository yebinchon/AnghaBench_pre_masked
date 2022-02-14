
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct dm_target {int table; struct dm_snapshot* private; } ;
struct dm_snapshot {int active; int lock; int state_bits; TYPE_3__* ti; TYPE_1__* origin; } ;
struct dm_origin {TYPE_2__* ti; } ;
struct TYPE_6__ {int table; } ;
struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dm_snapshot*,struct dm_snapshot**,struct dm_snapshot**,struct dm_snapshot**) ;
 int FUNC_1 (struct dm_snapshot*,struct dm_snapshot*) ;
 struct dm_origin* FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*) ;
 struct mapped_device* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct dm_snapshot*) ;
 int FUNC_12 (struct dm_snapshot*) ;
 int FUNC_13 (struct dm_snapshot*) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct dm_target *VAR_3)
{
 struct dm_snapshot *VAR_4 = VAR_3->private;
 struct dm_snapshot *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct dm_origin *VAR_8;
 struct mapped_device *VAR_9 = ((void*)0);
 bool VAR_10 = 0;

 FUNC_8(&VAR_2);

 VAR_8 = FUNC_2(VAR_4->origin->bdev);
 if (VAR_8)
  VAR_9 = FUNC_7(VAR_8->ti->table);
 if (!VAR_9) {
  (void) FUNC_0(VAR_4, ((void*)0), ((void*)0), &VAR_7);
  if (VAR_7)
   VAR_9 = FUNC_7(VAR_7->ti->table);
 }
 if (VAR_9 == FUNC_7(VAR_3->table))
  VAR_9 = ((void*)0);
 if (VAR_9) {
  if (FUNC_3(VAR_9))
   VAR_9 = ((void*)0);
 }

 FUNC_15(&VAR_2);

 if (VAR_9) {
  FUNC_5(VAR_9);
  if (VAR_7 && FUNC_14(VAR_0, &VAR_7->state_bits)) {
   VAR_10 = 1;
   FUNC_13(VAR_7);
  }
 }

 FUNC_8(&VAR_2);

 (void) FUNC_0(VAR_4, &VAR_5, &VAR_6, ((void*)0));
 if (VAR_5 && VAR_6) {
  FUNC_9(&VAR_5->lock);
  FUNC_10(&VAR_6->lock, VAR_1);
  FUNC_1(VAR_5, VAR_6);
  FUNC_16(&VAR_6->lock);
  FUNC_16(&VAR_5->lock);
 }

 FUNC_15(&VAR_2);

 if (VAR_9) {
  if (VAR_10)
   FUNC_12(VAR_7);
  FUNC_4(VAR_9);
  FUNC_6(VAR_9);
 }


 FUNC_11(VAR_4);

 FUNC_9(&VAR_4->lock);
 VAR_4->active = 1;
 FUNC_16(&VAR_4->lock);
}
