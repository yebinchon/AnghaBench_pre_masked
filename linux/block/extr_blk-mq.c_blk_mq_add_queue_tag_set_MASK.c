
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int tag_set_list; } ;
struct blk_mq_tag_set {int flags; int tag_list_lock; int tag_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_mq_tag_set*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct request_queue*,int) ;

__attribute__((used)) static void FUNC_6(struct blk_mq_tag_set *VAR_1,
         struct request_queue *VAR_2)
{
 FUNC_3(&VAR_1->tag_list_lock);




 if (!FUNC_2(&VAR_1->tag_list) &&
     !(VAR_1->flags & VAR_0)) {
  VAR_1->flags |= VAR_0;

  FUNC_0(VAR_1, 1);
 }
 if (VAR_1->flags & VAR_0)
  FUNC_5(VAR_2, 1);
 FUNC_1(&VAR_2->tag_set_list, &VAR_1->tag_list);

 FUNC_4(&VAR_1->tag_list_lock);
}
