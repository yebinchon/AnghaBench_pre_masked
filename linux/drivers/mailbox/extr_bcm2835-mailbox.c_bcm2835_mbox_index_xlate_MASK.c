
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {scalar_t__ args_count; } ;
struct mbox_controller {struct mbox_chan* chans; } ;
struct mbox_chan {int dummy; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;

__attribute__((used)) static struct mbox_chan *FUNC_1(struct mbox_controller *VAR_1,
      const struct of_phandle_args *VAR_2)
{
 if (VAR_2->args_count != 0)
  return FUNC_0(-VAR_0);

 return &VAR_1->chans[0];
}
