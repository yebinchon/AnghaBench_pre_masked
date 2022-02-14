
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gc_stat {int dummy; } ;
struct closure {int dummy; } ;
struct btree_op {int dummy; } ;
struct btree {int key; TYPE_1__* c; scalar_t__ level; } ;
struct TYPE_2__ {int gc_done; } ;


 int VAR_0 ;
 int FUNC_0 (struct btree*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_2 (struct btree*) ;
 int FUNC_3 (struct btree*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct btree*,struct gc_stat*) ;
 int FUNC_6 (struct btree*,struct btree_op*,struct closure*,struct gc_stat*) ;
 struct btree* FUNC_7 (struct btree*,int *) ;
 int FUNC_8 (struct btree*) ;
 int FUNC_9 (int,struct btree*) ;

__attribute__((used)) static int FUNC_10(struct btree *VAR_1, struct btree_op *VAR_2,
        struct closure *VAR_3, struct gc_stat *VAR_4)
{
 struct btree *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 bool VAR_7;

 VAR_7 = FUNC_5(VAR_1, VAR_4);
 if (VAR_7) {
  VAR_5 = FUNC_7(VAR_1, ((void*)0));

  if (!FUNC_0(VAR_5)) {
   FUNC_2(VAR_5);

   FUNC_3(VAR_5);
   FUNC_8(VAR_1);
   FUNC_9(1, VAR_5);

   return -VAR_0;
  }
 }

 FUNC_1(VAR_1->c, VAR_1->level + 1, &VAR_1->key);

 if (VAR_1->level) {
  VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_4(&VAR_1->c->gc_done, &VAR_1->key);

 return VAR_6;
}
