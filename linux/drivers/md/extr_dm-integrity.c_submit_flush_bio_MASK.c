
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_io {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct dm_integrity_c {int commit_work; int commit_wq; TYPE_1__ endio_wait; int flush_bio_list; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 struct bio* FUNC_1 (struct dm_integrity_io*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dm_integrity_c *VAR_0, struct dm_integrity_io *VAR_1)
{
 struct bio *VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_0->endio_wait.lock, VAR_3);
 VAR_2 = FUNC_1(VAR_1, sizeof(struct dm_integrity_io));
 FUNC_0(&VAR_0->flush_bio_list, VAR_2);
 FUNC_4(&VAR_0->endio_wait.lock, VAR_3);

 FUNC_2(VAR_0->commit_wq, &VAR_0->commit_work);
}
