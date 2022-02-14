
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct closure {int dummy; } ;
struct btree {scalar_t__ written; TYPE_4__* c; int key; int flags; int io; int io_mutex; int work; int keys; int write_lock; } ;
struct bset {scalar_t__ seq; int keys; } ;
struct TYPE_11__ {int btree_sectors_written; } ;
struct TYPE_7__ {int block_size; } ;
struct TYPE_10__ {TYPE_1__ sb; int cl; } ;
struct TYPE_9__ {scalar_t__ seq; } ;
struct TYPE_8__ {int bio_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int *,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (struct btree*) ;
 TYPE_3__* FUNC_6 (struct btree*) ;
 struct bset* FUNC_7 (struct btree*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_12 (struct btree*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct bset*,int ) ;
 int FUNC_16 (struct btree*) ;

void FUNC_17(struct btree *VAR_3, struct closure *VAR_4)
{
 struct bset *VAR_5 = FUNC_7(VAR_3);

 FUNC_14(&VAR_3->write_lock);

 FUNC_16(VAR_3);

 FUNC_0(VAR_2->bio_list);
 FUNC_0(VAR_3->written >= FUNC_5(VAR_3));
 FUNC_0(VAR_3->written && !VAR_5->keys);
 FUNC_0(FUNC_6(VAR_3)->seq != VAR_5->seq);
 FUNC_3(&VAR_3->keys, "writing");

 FUNC_8(&VAR_3->work);


 FUNC_13(&VAR_3->io_mutex);
 FUNC_11(&VAR_3->io, VAR_4 ?: &VAR_3->c->cl);

 FUNC_10(VAR_0, &VAR_3->flags);
 FUNC_9(VAR_1, &VAR_3->flags);

 FUNC_12(VAR_3);

 FUNC_2(FUNC_15(VAR_5, FUNC_4(VAR_3->c)) * VAR_3->c->sb.block_size,
   &FUNC_1(VAR_3->c, &VAR_3->key, 0)->btree_sectors_written);

 VAR_3->written += FUNC_15(VAR_5, FUNC_4(VAR_3->c));
}
