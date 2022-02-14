
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int dummy; } ;
struct clone {int last_commit_jiffies; int cmd; int lock; struct bio_list deferred_flush_completions; struct bio_list deferred_flush_bios; } ;
struct bio {int dummy; } ;


 struct bio_list VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct bio_list*) ;
 int FUNC_4 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_5 (struct bio_list*) ;
 scalar_t__ FUNC_6 (struct clone*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct bio*) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (struct clone*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct clone *VAR_2)
{
 struct bio *VAR_3;
 unsigned long VAR_4;
 struct bio_list VAR_5 = VAR_0;
 struct bio_list VAR_6 = VAR_0;





 FUNC_10(&VAR_2->lock, VAR_4);
 FUNC_4(&VAR_5, &VAR_2->deferred_flush_bios);
 FUNC_3(&VAR_2->deferred_flush_bios);

 FUNC_4(&VAR_6, &VAR_2->deferred_flush_completions);
 FUNC_3(&VAR_2->deferred_flush_completions);
 FUNC_11(&VAR_2->lock, VAR_4);

 if (FUNC_2(&VAR_5) && FUNC_2(&VAR_6) &&
     !(FUNC_7(VAR_2->cmd) && FUNC_9(VAR_2)))
  return;

 if (FUNC_6(VAR_2)) {
  FUNC_4(&VAR_5, &VAR_6);

  while ((VAR_3 = FUNC_5(&VAR_5)))
   FUNC_1(VAR_3);

  return;
 }

 VAR_2->last_commit_jiffies = VAR_1;

 while ((VAR_3 = FUNC_5(&VAR_6)))
  FUNC_0(VAR_3);

 while ((VAR_3 = FUNC_5(&VAR_5)))
  FUNC_8(VAR_3);
}
