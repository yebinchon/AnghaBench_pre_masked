
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct TYPE_7__ {int bi_size; } ;
struct TYPE_8__ {TYPE_1__ iter_out; struct bio* bio_out; } ;
struct dm_crypt_io {scalar_t__ sector; int rb_node; TYPE_2__ ctx; int error; struct crypt_config* cc; } ;
struct TYPE_10__ {struct rb_node* rb_node; } ;
struct crypt_config {scalar_t__ start; int write_thread_lock; TYPE_4__ write_tree; int write_thread; int flags; } ;
struct TYPE_9__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_3__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_11__ {scalar_t__ sector; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct dm_crypt_io*) ;
 int FUNC_4 (struct crypt_config*,struct bio*) ;
 TYPE_5__* FUNC_5 (struct rb_node*) ;
 int FUNC_6 (struct bio*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int *,struct rb_node*,struct rb_node**) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct dm_crypt_io *VAR_1, int VAR_2)
{
 struct bio *VAR_3 = VAR_1->ctx.bio_out;
 struct crypt_config *VAR_4 = VAR_1->cc;
 unsigned long VAR_5;
 sector_t VAR_6;
 struct rb_node **VAR_7, *VAR_8;

 if (FUNC_13(VAR_1->error)) {
  FUNC_4(VAR_4, VAR_3);
  FUNC_2(VAR_3);
  FUNC_3(VAR_1);
  return;
 }


 FUNC_0(VAR_1->ctx.iter_out.bi_size);

 VAR_3->bi_iter.bi_sector = VAR_4->start + VAR_1->sector;

 if (FUNC_7(!VAR_2) && FUNC_12(VAR_0, &VAR_4->flags)) {
  FUNC_6(VAR_3);
  return;
 }

 FUNC_10(&VAR_4->write_thread_lock, VAR_5);
 if (FUNC_1(&VAR_4->write_tree))
  FUNC_14(VAR_4->write_thread);
 VAR_7 = &VAR_4->write_tree.rb_node;
 VAR_8 = ((void*)0);
 VAR_6 = VAR_1->sector;
 while (*VAR_7) {
  VAR_8 = *VAR_7;
  if (VAR_6 < FUNC_5(VAR_8)->sector)
   VAR_7 = &(*VAR_7)->rb_left;
  else
   VAR_7 = &(*VAR_7)->rb_right;
 }
 FUNC_9(&VAR_1->rb_node, VAR_8, VAR_7);
 FUNC_8(&VAR_1->rb_node, &VAR_4->write_tree);
 FUNC_11(&VAR_4->write_thread_lock, VAR_5);
}
