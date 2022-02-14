
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct btree_iter {int size; TYPE_2__* b; scalar_t__ used; } ;
struct TYPE_10__ {TYPE_1__* set; } ;
struct btree {scalar_t__ written; int key; TYPE_4__* c; TYPE_2__ keys; } ;
struct bset {scalar_t__ seq; int version; scalar_t__ magic; int keys; int start; int csum; } ;
struct TYPE_11__ {int bucket_size; int block_size; } ;
struct TYPE_12__ {int fill_iter; TYPE_3__ sb; int sort; } ;
struct TYPE_9__ {int end; scalar_t__ size; struct bset* data; } ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,struct bset*,scalar_t__) ;
 int FUNC_3 (struct btree_iter*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,struct btree_iter*,int *) ;
 int FUNC_5 (TYPE_4__*,char*,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct bset*) ;
 int FUNC_9 (struct btree*,struct bset*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,struct bset*) ;
 scalar_t__ FUNC_12 (struct btree*) ;
 struct bset* FUNC_13 (struct btree*) ;
 int FUNC_14 (struct btree*,struct bset*) ;
 int FUNC_15 (struct bset*) ;
 struct btree_iter* FUNC_16 (int *,int ) ;
 int FUNC_17 (struct btree_iter*,int *) ;
 scalar_t__ FUNC_18 (struct bset*,int) ;
 int FUNC_19 (struct btree*) ;
 struct bset* FUNC_20 (struct btree*) ;

void FUNC_21(struct btree *VAR_1)
{
 const char *VAR_2 = "bad btree header";
 struct bset *VAR_3 = FUNC_13(VAR_1);
 struct btree_iter *VAR_4;






 VAR_4 = FUNC_16(&VAR_1->c->fill_iter, VAR_0);
 VAR_4->size = VAR_1->c->sb.bucket_size / VAR_1->c->sb.block_size;
 VAR_4->used = 0;





 if (!VAR_3->seq)
  goto err;

 for (;
      VAR_1->written < FUNC_12(VAR_1) && VAR_3->seq == VAR_1->keys.set[0].data->seq;
      VAR_3 = FUNC_20(VAR_1)) {
  VAR_2 = "unsupported bset version";
  if (VAR_3->version > 128)
   goto err;

  VAR_2 = "bad btree header";
  if (VAR_1->written + FUNC_18(VAR_3, FUNC_7(VAR_1->c)) >
      FUNC_12(VAR_1))
   goto err;

  VAR_2 = "bad magic";
  if (VAR_3->magic != FUNC_10(&VAR_1->c->sb))
   goto err;

  VAR_2 = "bad checksum";
  switch (VAR_3->version) {
  case 0:
   if (VAR_3->csum != FUNC_15(VAR_3))
    goto err;
   break;
  case 128:
   if (VAR_3->csum != FUNC_14(VAR_1, VAR_3))
    goto err;
   break;
  }

  VAR_2 = "empty set";
  if (VAR_3 != VAR_1->keys.set[0].data && !VAR_3->keys)
   goto err;

  FUNC_3(VAR_4, VAR_3->start, FUNC_8(VAR_3));

  VAR_1->written += FUNC_18(VAR_3, FUNC_7(VAR_1->c));
 }

 VAR_2 = "corrupted btree";
 for (VAR_3 = FUNC_20(VAR_1);
      FUNC_11(&VAR_1->keys, VAR_3) < FUNC_0(&VAR_1->key);
      VAR_3 = ((void *) VAR_3) + FUNC_7(VAR_1->c))
  if (VAR_3->seq == VAR_1->keys.set[0].data->seq)
   goto err;

 FUNC_4(&VAR_1->keys, VAR_4, &VAR_1->c->sort);

 VAR_3 = VAR_1->keys.set[0].data;
 VAR_2 = "short btree key";
 if (VAR_1->keys.set[0].size &&
     FUNC_6(&VAR_1->key, &VAR_1->keys.set[0].end) < 0)
  goto err;

 if (VAR_1->written < FUNC_12(VAR_1))
  FUNC_2(&VAR_1->keys, FUNC_20(VAR_1),
       FUNC_10(&VAR_1->c->sb));
out:
 FUNC_17(VAR_4, &VAR_1->c->fill_iter);
 return;
err:
 FUNC_19(VAR_1);
 FUNC_5(VAR_1->c, "%s at bucket %zu, block %u, %u keys",
       VAR_2, FUNC_1(VAR_1->c, &VAR_1->key, 0),
       FUNC_9(VAR_1, VAR_3), VAR_3->keys);
 goto out;
}
