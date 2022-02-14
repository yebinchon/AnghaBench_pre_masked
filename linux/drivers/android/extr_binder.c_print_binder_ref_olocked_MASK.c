
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int weak; int strong; int desc; int debug_id; } ;
struct binder_ref {TYPE_2__* node; int death; TYPE_1__ data; } ;
struct TYPE_5__ {int debug_id; scalar_t__ proc; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0,
         struct binder_ref *VAR_1)
{
 FUNC_0(VAR_1->node);
 FUNC_2(VAR_0, "  ref %d: desc %d %snode %d s %d w %d d %pK\n",
     VAR_1->data.debug_id, VAR_1->data.desc,
     VAR_1->node->proc ? "" : "dead ",
     VAR_1->node->debug_id, VAR_1->data.strong,
     VAR_1->data.weak, VAR_1->death);
 FUNC_1(VAR_1->node);
}
