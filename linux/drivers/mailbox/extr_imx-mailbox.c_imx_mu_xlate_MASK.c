
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {int args_count; int* args; } ;
struct mbox_controller {int num_chans; struct mbox_chan* chans; int dev; } ;
struct mbox_chan {int dummy; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static struct mbox_chan * FUNC_2(struct mbox_controller *VAR_1,
           const struct of_phandle_args *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;

 if (VAR_2->args_count != 2) {
  FUNC_1(VAR_1->dev, "Invalid argument count %d\n", VAR_2->args_count);
  return FUNC_0(-VAR_0);
 }

 VAR_3 = VAR_2->args[0];
 VAR_4 = VAR_2->args[1];
 VAR_5 = VAR_3 * 4 + VAR_4;

 if (VAR_5 >= VAR_1->num_chans) {
  FUNC_1(VAR_1->dev, "Not supported channel number: %d. (type: %d, idx: %d)\n", VAR_5, VAR_3, VAR_4);
  return FUNC_0(-VAR_0);
 }

 return &VAR_1->chans[VAR_5];
}
