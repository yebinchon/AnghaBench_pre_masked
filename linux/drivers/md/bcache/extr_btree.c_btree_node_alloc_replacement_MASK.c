
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_op {int dummy; } ;
struct btree {int write_lock; int key; TYPE_1__* c; int keys; int parent; int level; } ;
struct TYPE_2__ {int sort; } ;


 int FUNC_0 (struct btree*) ;
 struct btree* FUNC_1 (TYPE_1__*,struct btree_op*,int ,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct btree *FUNC_6(struct btree *VAR_0,
        struct btree_op *VAR_1)
{
 struct btree *VAR_2 = FUNC_1(VAR_0->c, VAR_1, VAR_0->level, VAR_0->parent);

 if (!FUNC_0(VAR_2)) {
  FUNC_4(&VAR_2->write_lock);
  FUNC_2(&VAR_0->keys, &VAR_2->keys, &VAR_0->c->sort);
  FUNC_3(&VAR_2->key, &VAR_0->key);
  FUNC_5(&VAR_2->write_lock);
 }

 return VAR_2;
}
