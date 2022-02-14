
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nullb_queue {int queue_depth; struct nullb_cmd* cmds; void* tag_map; } ;
struct TYPE_2__ {int * next; } ;
struct nullb_cmd {unsigned int tag; TYPE_1__ ll_list; int list; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct nullb_cmd*) ;

__attribute__((used)) static int FUNC_4(struct nullb_queue *VAR_3)
{
 struct nullb_cmd *VAR_4;
 int VAR_5, VAR_6;

 VAR_3->cmds = FUNC_2(VAR_3->queue_depth, sizeof(*VAR_4), VAR_2);
 if (!VAR_3->cmds)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3->queue_depth, VAR_0) / VAR_0;
 VAR_3->tag_map = FUNC_2(VAR_6, sizeof(unsigned long), VAR_2);
 if (!VAR_3->tag_map) {
  FUNC_3(VAR_3->cmds);
  return -VAR_1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->queue_depth; VAR_5++) {
  VAR_4 = &VAR_3->cmds[VAR_5];
  FUNC_1(&VAR_4->list);
  VAR_4->ll_list.next = ((void*)0);
  VAR_4->tag = -1U;
 }

 return 0;
}
