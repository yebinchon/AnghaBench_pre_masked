
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_chan {int txdone_method; TYPE_1__* mbox; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mbox_chan*,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct mbox_chan *VAR_1, int VAR_2)
{
 if (FUNC_2(!(VAR_1->txdone_method & VAR_0))) {
  FUNC_0(VAR_1->mbox->dev,
         "Controller can't run the TX ticker\n");
  return;
 }

 FUNC_1(VAR_1, VAR_2);
}
