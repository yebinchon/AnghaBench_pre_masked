
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_queue_inst {int name; scalar_t__ is_tx; } ;
struct ti_msgmgr_inst {struct ti_msgmgr_desc* desc; } ;
struct ti_msgmgr_desc {int dummy; } ;
struct mbox_chan {TYPE_1__* mbox; struct ti_queue_inst* con_priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 struct ti_msgmgr_inst* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ti_msgmgr_desc const*,struct ti_queue_inst*) ;
 scalar_t__ FUNC_3 (struct ti_msgmgr_desc const*,struct ti_queue_inst*) ;

__attribute__((used)) static bool FUNC_4(struct mbox_chan *VAR_0)
{
 struct ti_queue_inst *VAR_1 = VAR_0->con_priv;
 struct device *VAR_2 = VAR_0->mbox->dev;
 struct ti_msgmgr_inst *VAR_3 = FUNC_1(VAR_2);
 const struct ti_msgmgr_desc *VAR_4 = VAR_3->desc;
 int VAR_5;

 if (VAR_1->is_tx)
  return 0;

 if (FUNC_3(VAR_4, VAR_1)) {
  FUNC_0(VAR_2, "Error on channel %s\n", VAR_1->name);
  return 0;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_1);

 return VAR_5 ? 1 : 0;
}
