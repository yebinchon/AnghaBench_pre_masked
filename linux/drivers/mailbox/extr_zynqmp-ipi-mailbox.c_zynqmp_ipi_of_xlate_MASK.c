
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {unsigned int* args; } ;
struct mbox_controller {struct mbox_chan* chans; struct device* dev; } ;
struct mbox_chan {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct device*,char*,unsigned int) ;

__attribute__((used)) static struct mbox_chan *FUNC_2(struct mbox_controller *VAR_3,
          const struct of_phandle_args *VAR_4)
{
 struct mbox_chan *VAR_5;
 struct device *VAR_6 = VAR_3->dev;
 unsigned int VAR_7;


 VAR_7 = VAR_4->args[0];
 if (VAR_7 != VAR_2 && VAR_7 != VAR_1) {
  FUNC_1(VAR_6, "req chnl failure: invalid chnl type %u.\n",
   VAR_7);
  return FUNC_0(-VAR_0);
 }
 VAR_5 = &VAR_3->chans[VAR_7];
 return VAR_5;
}
