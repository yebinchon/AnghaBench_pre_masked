
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int batch_head; int disks; scalar_t__ state; int cpu; scalar_t__ overwrite_disks; scalar_t__ sector; struct r5dev* dev; scalar_t__ generation; int count; struct r5conf* raid_conf; } ;
struct r5dev {int sector; scalar_t__ flags; scalar_t__ written; scalar_t__ towrite; scalar_t__ read; scalar_t__ toread; } ;
struct r5conf {int previous_raid_disks; int raid_disks; int gen_lock; scalar_t__ generation; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct r5conf*,struct stripe_head*) ;
 int FUNC_4 (char*,unsigned long long) ;
 int FUNC_5 (char*,unsigned long long,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct stripe_head*,int,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct stripe_head*) ;
 int FUNC_12 (scalar_t__,struct r5conf*,int,struct stripe_head*) ;
 int FUNC_13 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_14(struct stripe_head *VAR_3, sector_t VAR_4, int VAR_5)
{
 struct r5conf *VAR_6 = VAR_3->raid_conf;
 int VAR_7, VAR_8;

 FUNC_0(FUNC_2(&VAR_3->count) != 0);
 FUNC_0(FUNC_13(VAR_2, &VAR_3->state));
 FUNC_0(FUNC_11(VAR_3));
 FUNC_0(VAR_3->batch_head);

 FUNC_4("init_stripe called, stripe %llu\n",
  (unsigned long long)VAR_4);
retry:
 VAR_8 = FUNC_7(&VAR_6->gen_lock);
 VAR_3->generation = VAR_6->generation - VAR_5;
 VAR_3->disks = VAR_5 ? VAR_6->previous_raid_disks : VAR_6->raid_disks;
 VAR_3->sector = VAR_4;
 FUNC_12(VAR_4, VAR_6, VAR_5, VAR_3);
 VAR_3->state = 0;

 for (VAR_7 = VAR_3->disks; VAR_7--; ) {
  struct r5dev *VAR_9 = &VAR_3->dev[VAR_7];

  if (VAR_9->toread || VAR_9->read || VAR_9->towrite || VAR_9->written ||
      FUNC_13(VAR_0, &VAR_9->flags)) {
   FUNC_5("sector=%llx i=%d %p %p %p %p %d\n",
          (unsigned long long)VAR_3->sector, VAR_7, VAR_9->toread,
          VAR_9->read, VAR_9->towrite, VAR_9->written,
          FUNC_13(VAR_0, &VAR_9->flags));
   FUNC_1(1);
  }
  VAR_9->flags = 0;
  VAR_9->sector = FUNC_6(VAR_3, VAR_7, VAR_5);
 }
 if (FUNC_8(&VAR_6->gen_lock, VAR_8))
  goto retry;
 VAR_3->overwrite_disks = 0;
 FUNC_3(VAR_6, VAR_3);
 VAR_3->cpu = FUNC_10();
 FUNC_9(VAR_1, &VAR_3->state);
}
