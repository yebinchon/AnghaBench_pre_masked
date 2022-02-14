
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct closure {int dummy; } ;
struct btree {TYPE_1__* c; int list; int key; int written; } ;
struct TYPE_5__ {scalar_t__ prio; } ;
struct TYPE_4__ {struct btree* root; int bucket_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_3 (TYPE_1__*,struct closure*) ;
 int FUNC_4 (struct closure*) ;
 int FUNC_5 (struct closure*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct btree*) ;

void FUNC_10(struct btree *VAR_1)
{
 unsigned int VAR_2;
 struct closure VAR_3;

 FUNC_4(&VAR_3);

 FUNC_9(VAR_1);

 FUNC_0(!VAR_1->written);

 for (VAR_2 = 0; VAR_2 < FUNC_1(&VAR_1->key); VAR_2++)
  FUNC_0(FUNC_2(VAR_1->c, &VAR_1->key, VAR_2)->prio != VAR_0);

 FUNC_7(&VAR_1->c->bucket_lock);
 FUNC_6(&VAR_1->list);
 FUNC_8(&VAR_1->c->bucket_lock);

 VAR_1->c->root = VAR_1;

 FUNC_3(VAR_1->c, &VAR_3);
 FUNC_5(&VAR_3);
}
