
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct keybuf_key {int key; struct dirty_io* private; } ;
struct TYPE_4__ {int bi_size; } ;
struct bio {struct keybuf_key* bi_private; TYPE_2__ bi_iter; int bi_inline_vecs; } ;
struct dirty_io {TYPE_1__* dc; struct bio bio; } ;
struct TYPE_3__ {int writeback_percent; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct bio*,int *) ;
 int FUNC_4 (struct bio*,int ,int ) ;
 int FUNC_5 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_6(struct keybuf_key *VAR_2)
{
 struct dirty_io *VAR_3 = VAR_2->private;
 struct bio *VAR_4 = &VAR_3->bio;

 FUNC_4(VAR_4, VAR_4->bi_inline_vecs,
   FUNC_0(FUNC_2(&VAR_2->key), VAR_1));
 if (!VAR_3->dc->writeback_percent)
  FUNC_5(VAR_4, FUNC_1(VAR_0, 0));

 VAR_4->bi_iter.bi_size = FUNC_2(&VAR_2->key) << 9;
 VAR_4->bi_private = VAR_2;
 FUNC_3(VAR_4, ((void*)0));
}
