
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_write {int * journal; } ;
struct btree {int c; int work; int written; int write_lock; } ;
struct bset {int keys; } ;
typedef int atomic_t ;
struct TYPE_2__ {int bio_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btree*,int *) ;
 struct bset* FUNC_4 (struct btree*) ;
 struct btree_write* FUNC_5 (struct btree*) ;
 int FUNC_6 (struct btree*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct btree*) ;
 int FUNC_11 (struct bset*) ;

__attribute__((used)) static void FUNC_12(struct btree *VAR_3, atomic_t *VAR_4)
{
 struct bset *VAR_5 = FUNC_4(VAR_3);
 struct btree_write *VAR_6 = FUNC_5(VAR_3);

 FUNC_8(&VAR_3->write_lock);

 FUNC_0(!VAR_3->written);
 FUNC_0(!VAR_5->keys);

 if (!FUNC_6(VAR_3))
  FUNC_9(&VAR_3->work, 30 * VAR_0);

 FUNC_10(VAR_3);

 if (VAR_4) {
  if (VAR_6->journal &&
      FUNC_7(VAR_3->c, VAR_6->journal, VAR_4)) {
   FUNC_1(VAR_6->journal);
   VAR_6->journal = ((void*)0);
  }

  if (!VAR_6->journal) {
   VAR_6->journal = VAR_4;
   FUNC_2(VAR_6->journal);
  }
 }


 if (FUNC_11(VAR_5) > VAR_1 - 48 &&
     !VAR_2->bio_list)
  FUNC_3(VAR_3, ((void*)0));
}
