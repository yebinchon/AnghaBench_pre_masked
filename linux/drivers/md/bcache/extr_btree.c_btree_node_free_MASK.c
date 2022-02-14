
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree {TYPE_1__* c; int key; int work; int write_lock; int flags; } ;
struct TYPE_2__ {int bucket_lock; struct btree* root; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct btree*,int ) ;
 int FUNC_3 (struct btree*) ;
 scalar_t__ FUNC_4 (struct btree*) ;
 scalar_t__ FUNC_5 (struct btree*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct btree*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,struct btree*) ;
 int FUNC_12 (struct btree*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct btree *VAR_1)
{
 FUNC_12(VAR_1);

 FUNC_0(VAR_1 == VAR_1->c->root);

retry:
 FUNC_9(&VAR_1->write_lock);






 if (FUNC_5(VAR_1)) {
  FUNC_10(&VAR_1->write_lock);
  FUNC_11("bnode %p journal_flush set, retry", VAR_1);
  FUNC_13(1);
  goto retry;
 }

 if (FUNC_4(VAR_1)) {
  FUNC_2(VAR_1, FUNC_3(VAR_1));
  FUNC_7(VAR_0, &VAR_1->flags);
 }

 FUNC_10(&VAR_1->write_lock);

 FUNC_6(&VAR_1->work);

 FUNC_9(&VAR_1->c->bucket_lock);
 FUNC_1(VAR_1->c, &VAR_1->key);
 FUNC_8(VAR_1);
 FUNC_10(&VAR_1->c->bucket_lock);
}
