
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int desc; int debug_id; scalar_t__ strong; } ;
struct binder_ref {TYPE_2__* death; TYPE_5__* proc; TYPE_1__ data; TYPE_3__* node; int node_entry; int rb_node_node; int rb_node_desc; } ;
struct TYPE_10__ {int pid; int refs_by_node; int refs_by_desc; } ;
struct TYPE_9__ {int debug_id; } ;
struct TYPE_8__ {int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,...) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct binder_ref *VAR_4)
{
 bool VAR_5 = 0;

 FUNC_0(VAR_1,
       "%d delete ref %d desc %d for node %d\n",
        VAR_4->proc->pid, VAR_4->data.debug_id, VAR_4->data.desc,
        VAR_4->node->debug_id);

 FUNC_7(&VAR_4->rb_node_desc, &VAR_4->proc->refs_by_desc);
 FUNC_7(&VAR_4->rb_node_node, &VAR_4->proc->refs_by_node);

 FUNC_3(VAR_4->node);
 if (VAR_4->data.strong)
  FUNC_1(VAR_4->node, 1, 1);

 FUNC_6(&VAR_4->node_entry);
 VAR_5 = FUNC_1(VAR_4->node, 0, 1);
 FUNC_4(VAR_4->node);



 if (!VAR_5) {





  VAR_4->node = ((void*)0);
 }

 if (VAR_4->death) {
  FUNC_0(VAR_0,
        "%d delete ref %d desc %d has death notification\n",
         VAR_4->proc->pid, VAR_4->data.debug_id,
         VAR_4->data.desc);
  FUNC_2(VAR_4->proc, &VAR_4->death->work);
  FUNC_5(VAR_2);
 }
 FUNC_5(VAR_3);
}
