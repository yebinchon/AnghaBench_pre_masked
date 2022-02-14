
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bi_size; } ;
struct bio {int * bi_private; TYPE_1__ bi_iter; int bi_inline_vecs; } ;
struct TYPE_5__ {struct bio bio; } ;
struct moving_io {int cl; TYPE_3__* w; TYPE_2__ bio; } ;
struct TYPE_6__ {int key; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct bio*,int *) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int ,int ) ;
 int FUNC_6 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_7(struct moving_io *VAR_2)
{
 struct bio *VAR_3 = &VAR_2->bio.bio;

 FUNC_5(VAR_3, VAR_3->bi_inline_vecs,
   FUNC_0(FUNC_2(&VAR_2->w->key), VAR_1));
 FUNC_4(VAR_3);
 FUNC_6(VAR_3, FUNC_1(VAR_0, 0));

 VAR_3->bi_iter.bi_size = FUNC_2(&VAR_2->w->key) << 9;
 VAR_3->bi_private = &VAR_2->cl;
 FUNC_3(VAR_3, ((void*)0));
}
