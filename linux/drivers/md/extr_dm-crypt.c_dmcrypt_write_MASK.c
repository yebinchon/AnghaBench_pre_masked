
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int rb_node; } ;
struct dm_crypt_io {int rb_node; } ;
struct crypt_config {int write_thread_lock; struct rb_root write_tree; } ;
struct blk_plug {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rb_root*) ;
 struct rb_root VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct blk_plug*) ;
 struct dm_crypt_io* FUNC_4 (int ) ;
 int FUNC_5 (struct dm_crypt_io*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct rb_root*) ;
 int FUNC_8 (struct rb_root*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(void *VAR_3)
{
 struct crypt_config *VAR_4 = VAR_3;
 struct dm_crypt_io *VAR_5;

 while (1) {
  struct rb_root VAR_6;
  struct blk_plug VAR_7;

  FUNC_12(&VAR_4->write_thread_lock);
continue_locked:

  if (!FUNC_1(&VAR_4->write_tree))
   goto pop_from_list;

  FUNC_11(VAR_1);

  FUNC_13(&VAR_4->write_thread_lock);

  if (FUNC_14(FUNC_6())) {
   FUNC_11(VAR_2);
   break;
  }

  FUNC_10();

  FUNC_11(VAR_2);
  FUNC_12(&VAR_4->write_thread_lock);
  goto continue_locked;

pop_from_list:
  VAR_6 = VAR_4->write_tree;
  VAR_4->write_tree = VAR_0;
  FUNC_13(&VAR_4->write_thread_lock);

  FUNC_0(FUNC_9(VAR_6.rb_node));





  FUNC_3(&VAR_7);
  do {
   VAR_5 = FUNC_4(FUNC_8(&VAR_6));
   FUNC_7(&VAR_5->rb_node, &VAR_6);
   FUNC_5(VAR_5);
  } while (!FUNC_1(&VAR_6));
  FUNC_2(&VAR_7);
 }
 return 0;
}
