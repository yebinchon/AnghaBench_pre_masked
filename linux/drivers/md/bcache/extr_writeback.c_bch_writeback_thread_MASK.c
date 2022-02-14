
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; struct cache_set* c; } ;
struct TYPE_3__ {int keys; } ;
struct cached_dev {unsigned int writeback_delay; scalar_t__ writeback_write_wq; int writeback_rate; TYPE_2__ disk; int writeback_lock; int sb; int has_dirty; TYPE_1__ writeback_keys; int writeback_running; } ;
struct cache_set {int gc_after_writeback; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cached_dev*,int *) ;
 int FUNC_6 (struct cached_dev*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct cache_set*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct cached_dev*) ;
 int FUNC_13 (struct cached_dev*) ;
 int FUNC_14 () ;
 unsigned int FUNC_15 (unsigned int) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;

__attribute__((used)) static int FUNC_20(void *VAR_8)
{
 struct cached_dev *VAR_9 = VAR_8;
 struct cache_set *VAR_10 = VAR_9->disk.c;
 bool VAR_11;

 FUNC_4(&VAR_9->writeback_rate);

 while (!FUNC_11() &&
        !FUNC_17(VAR_4, &VAR_10->flags)) {
  FUNC_8(&VAR_9->writeback_lock);
  FUNC_16(VAR_6);







  if (!FUNC_17(VAR_0, &VAR_9->disk.flags) &&
      (!FUNC_2(&VAR_9->has_dirty) || !VAR_9->writeback_running)) {
   FUNC_18(&VAR_9->writeback_lock);

   if (FUNC_11() ||
       FUNC_17(VAR_4, &VAR_10->flags)) {
    FUNC_16(VAR_7);
    break;
   }

   FUNC_14();
   continue;
  }
  FUNC_16(VAR_7);

  VAR_11 = FUNC_13(VAR_9);

  if (VAR_11 &&
      FUNC_0(&VAR_9->writeback_keys.keys)) {
   FUNC_3(&VAR_9->has_dirty, 0);
   FUNC_1(&VAR_9->sb, VAR_3);
   FUNC_5(VAR_9, ((void*)0));






   if (FUNC_17(VAR_0, &VAR_9->disk.flags)) {
    FUNC_18(&VAR_9->writeback_lock);
    break;
   }
   if (VAR_10->gc_after_writeback ==
       (VAR_2|VAR_1)) {
    VAR_10->gc_after_writeback &= ~VAR_1;
    FUNC_10(VAR_10);
   }
  }

  FUNC_18(&VAR_9->writeback_lock);

  FUNC_12(VAR_9);

  if (VAR_11) {
   unsigned int VAR_12 = VAR_9->writeback_delay * VAR_5;

   while (VAR_12 &&
          !FUNC_11() &&
          !FUNC_17(VAR_4, &VAR_10->flags) &&
          !FUNC_17(VAR_0, &VAR_9->disk.flags))
    VAR_12 = FUNC_15(VAR_12);

   FUNC_4(&VAR_9->writeback_rate);
  }
 }

 if (VAR_9->writeback_write_wq) {
  FUNC_9(VAR_9->writeback_write_wq);
  FUNC_7(VAR_9->writeback_write_wq);
 }
 FUNC_6(VAR_9);
 FUNC_19();

 return 0;
}
