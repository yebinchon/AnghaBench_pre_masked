
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int tag_set_list; struct blk_mq_tag_set* tag_set; } ;
struct blk_mq_tag_set {int tag_list_lock; int flags; int tag_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct blk_mq_tag_set*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct request_queue *VAR_1)
{
 struct blk_mq_tag_set *VAR_2 = VAR_1->tag_set;

 FUNC_4(&VAR_2->tag_list_lock);
 FUNC_2(&VAR_1->tag_set_list);
 if (FUNC_3(&VAR_2->tag_list)) {

  VAR_2->flags &= ~VAR_0;

  FUNC_1(VAR_2, 0);
 }
 FUNC_5(&VAR_2->tag_list_lock);
 FUNC_0(&VAR_1->tag_set_list);
}
