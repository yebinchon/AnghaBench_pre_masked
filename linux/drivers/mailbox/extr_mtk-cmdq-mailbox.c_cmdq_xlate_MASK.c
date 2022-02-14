
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int* args; } ;
struct mbox_controller {int num_chans; struct mbox_chan* chans; } ;
struct mbox_chan {scalar_t__ con_priv; } ;
struct cmdq_thread {int priority; int atomic_exec; struct mbox_chan* chan; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;

__attribute__((used)) static struct mbox_chan *FUNC_1(struct mbox_controller *VAR_1,
  const struct of_phandle_args *VAR_2)
{
 int VAR_3 = VAR_2->args[0];
 struct cmdq_thread *VAR_4;

 if (VAR_3 >= VAR_1->num_chans)
  return FUNC_0(-VAR_0);

 VAR_4 = (struct cmdq_thread *)VAR_1->chans[VAR_3].con_priv;
 VAR_4->priority = VAR_2->args[1];
 VAR_4->atomic_exec = (VAR_2->args[2] != 0);
 VAR_4->chan = &VAR_1->chans[VAR_3];

 return &VAR_1->chans[VAR_3];
}
