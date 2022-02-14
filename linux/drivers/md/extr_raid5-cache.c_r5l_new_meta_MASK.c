
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_meta_block {void* position; void* seq; int version; int magic; } ;
struct r5l_log {int io_list_lock; int running_ios; int seq; int log_start; int meta_pool; int io_pool; } ;
struct r5l_io_unit {int meta_offset; int log_sibling; void* meta_page; TYPE_1__* current_bio; scalar_t__ seq; int log_start; int state; int flush_barriers; int stripe_list; struct r5l_log* log; } ;
struct TYPE_3__ {struct r5l_io_unit* bi_private; int bi_end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,void*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct r5l_meta_block*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 void* FUNC_7 (int *,int ) ;
 int FUNC_8 (struct r5l_io_unit*,int ,int) ;
 struct r5l_meta_block* FUNC_9 (void*) ;
 int FUNC_10 (struct r5l_log*,struct r5l_io_unit*) ;
 TYPE_1__* FUNC_11 (struct r5l_log*) ;
 int VAR_6 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static struct r5l_io_unit *FUNC_14(struct r5l_log *VAR_7)
{
 struct r5l_io_unit *VAR_8;
 struct r5l_meta_block *VAR_9;

 VAR_8 = FUNC_7(&VAR_7->io_pool, VAR_0);
 if (!VAR_8)
  return ((void*)0);
 FUNC_8(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->log = VAR_7;
 FUNC_0(&VAR_8->log_sibling);
 FUNC_0(&VAR_8->stripe_list);
 FUNC_2(&VAR_8->flush_barriers);
 VAR_8->state = VAR_2;

 VAR_8->meta_page = FUNC_7(&VAR_7->meta_pool, VAR_1);
 VAR_9 = FUNC_9(VAR_8->meta_page);
 FUNC_3(VAR_9);
 VAR_9->magic = FUNC_4(VAR_4);
 VAR_9->version = VAR_5;
 VAR_9->seq = FUNC_5(VAR_7->seq);
 VAR_9->position = FUNC_5(VAR_7->log_start);

 VAR_8->log_start = VAR_7->log_start;
 VAR_8->meta_offset = sizeof(struct r5l_meta_block);
 VAR_8->seq = VAR_7->seq++;

 VAR_8->current_bio = FUNC_11(VAR_7);
 VAR_8->current_bio->bi_end_io = VAR_6;
 VAR_8->current_bio->bi_private = VAR_8;
 FUNC_1(VAR_8->current_bio, VAR_8->meta_page, VAR_3, 0);

 FUNC_10(VAR_7, VAR_8);

 FUNC_12(&VAR_7->io_list_lock);
 FUNC_6(&VAR_8->log_sibling, &VAR_7->running_ios);
 FUNC_13(&VAR_7->io_list_lock);

 return VAR_8;
}
