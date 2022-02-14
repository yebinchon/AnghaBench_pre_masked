
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct keylist {int dummy; } ;
struct btree_op {int lock; } ;
struct TYPE_2__ {scalar_t__* ptr; } ;
struct btree {unsigned long seq; int level; int lock; TYPE_1__ key; } ;
struct bkey {int * ptr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bkey*,int) ;
 int FUNC_2 (struct bkey*,int ,int ) ;
 int FUNC_3 (struct btree*,struct btree_op*,struct keylist*,int *,int *) ;
 int FUNC_4 (struct keylist*,struct bkey*) ;
 int FUNC_5 (struct keylist*) ;
 int FUNC_6 (struct keylist*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,struct btree*,int) ;
 int FUNC_10 (int,struct btree*) ;

int FUNC_11(struct btree *VAR_2, struct btree_op *VAR_3,
          struct bkey *VAR_4)
{
 int VAR_5 = -VAR_0;
 uint64_t VAR_6 = VAR_2->key.ptr[0];
 unsigned long VAR_7 = VAR_2->seq;
 struct keylist VAR_8;
 bool VAR_9 = VAR_3->lock == -1;

 FUNC_6(&VAR_8);

 if (VAR_9) {
  FUNC_10(0, VAR_2);
  FUNC_9(1, VAR_2, VAR_2->level);

  if (VAR_2->key.ptr[0] != VAR_6 ||
      VAR_2->seq != VAR_7 + 1) {
   VAR_3->lock = VAR_2->level;
   goto out;
  }
 }

 FUNC_1(VAR_4, 1);
 FUNC_8(&VAR_4->ptr[0], sizeof(uint64_t));

 FUNC_2(VAR_4, 0, VAR_1);

 FUNC_4(&VAR_8, VAR_4);

 VAR_5 = FUNC_3(VAR_2, VAR_3, &VAR_8, ((void*)0), ((void*)0));

 FUNC_0(!VAR_5 && !FUNC_5(&VAR_8));
out:
 if (VAR_9)
  FUNC_7(&VAR_2->lock);
 return VAR_5;
}
