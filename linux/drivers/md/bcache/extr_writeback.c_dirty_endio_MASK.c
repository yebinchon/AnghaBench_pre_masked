
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keybuf_key {int key; struct dirty_io* private; } ;
struct dirty_io {int cl; int dc; } ;
struct bio {scalar_t__ bi_status; struct keybuf_key* bi_private; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,struct bio*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct keybuf_key *VAR_1 = VAR_0->bi_private;
 struct dirty_io *VAR_2 = VAR_1->private;

 if (VAR_0->bi_status) {
  FUNC_0(&VAR_1->key, 0);
  FUNC_1(VAR_2->dc, VAR_0);
 }

 FUNC_2(&VAR_2->cl);
}
