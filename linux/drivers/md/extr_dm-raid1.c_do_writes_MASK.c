
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_list {int head; } ;
struct mirror_set {int log_failure; int leg_failure; int lock; struct bio_list failures; int rh; struct bio_list writes; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct bio {int bi_opf; } ;
typedef int region_t ;
struct TYPE_2__ {scalar_t__ (* is_remote_recovering ) (struct dm_dirty_log*,int ) ;} ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio_list*,struct bio*) ;
 int FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_3 (struct bio_list*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct mirror_set*) ;
 int FUNC_6 (int ,struct bio*) ;
 int FUNC_7 (int ,struct bio*) ;
 struct dm_dirty_log* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,struct bio_list*) ;
 int FUNC_12 (struct mirror_set*,struct bio*) ;
 scalar_t__ FUNC_13 (struct mirror_set*) ;
 int FUNC_14 (struct bio*) ;
 int FUNC_15 (struct mirror_set*) ;
 int FUNC_16 (struct mirror_set*) ;
 int FUNC_17 (int ,struct bio*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (struct dm_dirty_log*,int ) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (struct mirror_set*) ;

__attribute__((used)) static void FUNC_23(struct mirror_set *VAR_2, struct bio_list *VAR_3)
{
 int VAR_4;
 struct bio *VAR_5;
 struct bio_list VAR_6, VAR_7, VAR_8, *VAR_9 = ((void*)0);
 struct bio_list VAR_10;
 struct dm_dirty_log *VAR_11 = FUNC_8(VAR_2->rh);
 region_t VAR_12;

 if (!VAR_3->head)
  return;




 FUNC_1(&VAR_6);
 FUNC_1(&VAR_7);
 FUNC_1(&VAR_8);
 FUNC_1(&VAR_10);

 while ((VAR_5 = FUNC_3(VAR_3))) {
  if ((VAR_5->bi_opf & VAR_1) ||
      (FUNC_4(VAR_5) == VAR_0)) {
   FUNC_0(&VAR_6, VAR_5);
   continue;
  }

  VAR_12 = FUNC_6(VAR_2->rh, VAR_5);

  if (VAR_11->type->is_remote_recovering &&
      VAR_11->type->is_remote_recovering(VAR_11, VAR_12)) {
   FUNC_0(&VAR_10, VAR_5);
   continue;
  }

  VAR_4 = FUNC_10(VAR_2->rh, VAR_12, 1);
  switch (VAR_4) {
  case 131:
  case 130:
   VAR_9 = &VAR_6;
   break;

  case 129:
   VAR_9 = &VAR_7;
   break;

  case 128:
   VAR_9 = &VAR_8;
   break;
  }

  FUNC_0(VAR_9, VAR_5);
 }





 if (FUNC_21(VAR_10.head)) {
  FUNC_18(&VAR_2->lock);
  FUNC_2(&VAR_2->writes, &VAR_10);
  FUNC_19(&VAR_2->lock);
  FUNC_5(VAR_2);
 }






 FUNC_11(VAR_2->rh, &VAR_6);
 FUNC_11(VAR_2->rh, &VAR_7);






 VAR_2->log_failure = FUNC_9(VAR_2->rh) ? 1 : VAR_2->log_failure;




 if (FUNC_21(VAR_2->log_failure) && FUNC_13(VAR_2)) {
  FUNC_18(&VAR_2->lock);
  FUNC_2(&VAR_2->failures, &VAR_6);
  FUNC_19(&VAR_2->lock);
  FUNC_22(VAR_2);
 } else
  while ((VAR_5 = FUNC_3(&VAR_6)))
   FUNC_12(VAR_2, VAR_5);

 while ((VAR_5 = FUNC_3(&VAR_8)))
  FUNC_7(VAR_2->rh, VAR_5);

 while ((VAR_5 = FUNC_3(&VAR_7))) {
  if (FUNC_21(VAR_2->leg_failure) && FUNC_13(VAR_2) && !FUNC_16(VAR_2)) {
   FUNC_18(&VAR_2->lock);
   FUNC_0(&VAR_2->failures, VAR_5);
   FUNC_19(&VAR_2->lock);
   FUNC_22(VAR_2);
  } else {
   FUNC_17(FUNC_15(VAR_2), VAR_5);
   FUNC_14(VAR_5);
  }
 }
}
