
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_list {int dummy; } ;
struct mirror_set {int kmirrord_wq; int rh; int lock; struct bio_list holds; int suspend; } ;
struct dm_target {scalar_t__ private; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* presuspend ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bio_list*) ;
 struct bio* FUNC_3 (struct bio_list*) ;
 struct dm_dirty_log* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mirror_set*,struct bio*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct dm_dirty_log*) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static void FUNC_13(struct dm_target *VAR_1)
{
 struct mirror_set *VAR_2 = (struct mirror_set *) VAR_1->private;
 struct dm_dirty_log *VAR_3 = FUNC_4(VAR_2->rh);

 struct bio_list VAR_4;
 struct bio *VAR_5;

 FUNC_1(&VAR_2->suspend, 1);







 FUNC_9(&VAR_2->lock);
 VAR_4 = VAR_2->holds;
 FUNC_2(&VAR_2->holds);
 FUNC_10(&VAR_2->lock);

 while ((VAR_5 = FUNC_3(&VAR_4)))
  FUNC_8(VAR_2, VAR_5);





 FUNC_6(VAR_2->rh);

 FUNC_12(VAR_0,
     !FUNC_5(VAR_2->rh));

 if (VAR_3->type->presuspend && VAR_3->type->presuspend(VAR_3))

  FUNC_0("log presuspend failed");







 FUNC_7(VAR_2->kmirrord_wq);
}
