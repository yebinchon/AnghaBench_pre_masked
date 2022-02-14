
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree {struct btree* parent; TYPE_1__* c; scalar_t__ level; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {int bucket_lock; } ;


 int FUNC_0 (struct btree*) ;
 int FUNC_1 (struct btree*) ;
 struct btree* FUNC_2 (TYPE_1__*,int *,struct bkey*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,struct btree*) ;

__attribute__((used)) static void FUNC_6(struct btree *VAR_0, struct bkey *VAR_1)
{
 struct btree *VAR_2;

 FUNC_3(&VAR_0->c->bucket_lock);
 VAR_2 = FUNC_2(VAR_0->c, ((void*)0), VAR_1, VAR_0->level - 1);
 FUNC_4(&VAR_0->c->bucket_lock);

 if (!FUNC_0(VAR_2)) {
  VAR_2->parent = VAR_0;
  FUNC_1(VAR_2);
  FUNC_5(1, VAR_2);
 }
}
