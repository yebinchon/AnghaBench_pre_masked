
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int* args; } ;
struct mbox_controller {int num_chans; struct mbox_chan* chans; } ;
struct mbox_chan {int dummy; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;

__attribute__((used)) static struct mbox_chan *
FUNC_1(struct mbox_controller *VAR_1,
      const struct of_phandle_args *VAR_2)
{
 int VAR_3 = VAR_2->args[0];

 if (VAR_3 >= VAR_1->num_chans)
  return FUNC_0(-VAR_0);

 return &VAR_1->chans[VAR_3];
}
