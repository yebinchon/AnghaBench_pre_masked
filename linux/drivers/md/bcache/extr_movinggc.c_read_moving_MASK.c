
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bio {int bi_end_io; } ;
struct TYPE_4__ {struct bio bio; } ;
struct TYPE_3__ {int wq; struct cache_set* c; int inode; } ;
struct moving_io {int cl; TYPE_2__ bio; TYPE_1__ op; struct keybuf_key* w; } ;
struct keybuf_key {struct moving_io* private; int key; } ;
struct closure {int dummy; } ;
struct cache_set {int moving_gc_keys; int moving_in_flight; int moving_gc_wq; int flags; } ;
struct bio_vec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct moving_io*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (int *,struct keybuf_key*) ;
 struct keybuf_key* FUNC_6 (struct cache_set*,int *,int *,int ) ;
 int FUNC_7 (struct bio*,int ,int ) ;
 int FUNC_8 (int *,int ,int *,struct closure*) ;
 int FUNC_9 (struct closure*) ;
 int FUNC_10 (struct closure*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct moving_io*) ;
 struct moving_io* FUNC_13 (int,int ) ;
 int FUNC_14 (struct moving_io*) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (struct cache_set*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct cache_set *VAR_8)
{
 struct keybuf_key *VAR_9;
 struct moving_io *VAR_10;
 struct bio *VAR_11;
 struct closure VAR_12;

 FUNC_9(&VAR_12);



 while (!FUNC_16(VAR_0, &VAR_8->flags)) {
  VAR_9 = FUNC_6(VAR_8, &VAR_8->moving_gc_keys,
        &VAR_2, VAR_5);
  if (!VAR_9)
   break;

  if (FUNC_15(VAR_8, &VAR_9->key, 0)) {
   FUNC_5(&VAR_8->moving_gc_keys, VAR_9);
   continue;
  }

  VAR_10 = FUNC_13(sizeof(struct moving_io) + sizeof(struct bio_vec)
        * FUNC_0(FUNC_3(&VAR_9->key), VAR_3),
        VAR_1);
  if (!VAR_10)
   goto err;

  VAR_9->private = VAR_10;
  VAR_10->w = VAR_9;
  VAR_10->op.inode = FUNC_2(&VAR_9->key);
  VAR_10->op.c = VAR_8;
  VAR_10->op.wq = VAR_8->moving_gc_wq;

  FUNC_14(VAR_10);
  VAR_11 = &VAR_10->bio.bio;

  FUNC_7(VAR_11, VAR_4, 0);
  VAR_11->bi_end_io = VAR_6;

  if (FUNC_4(VAR_11, VAR_1))
   goto err;

  FUNC_17(&VAR_9->key);

  FUNC_11(&VAR_8->moving_in_flight);
  FUNC_8(&VAR_10->cl, VAR_7, ((void*)0), &VAR_12);
 }

 if (0) {
err: if (!FUNC_1(VAR_9->private))
   FUNC_12(VAR_9->private);

  FUNC_5(&VAR_8->moving_gc_keys, VAR_9);
 }

 FUNC_10(&VAR_12);
}
