
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int dummy; } ;
struct altera_mbox {int dev; int irq; scalar_t__ intr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct altera_mbox* FUNC_1 (struct mbox_chan*) ;
 int FUNC_2 (int ,int ,int ,int ,struct mbox_chan*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mbox_chan *VAR_2)
{
 int VAR_3;
 struct altera_mbox *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->intr_mode) {
  VAR_3 = FUNC_2(VAR_4->irq, VAR_1, 0,
      VAR_0, VAR_2);
  if (FUNC_3(VAR_3)) {
   FUNC_0(VAR_4->dev,
    "failed to register mailbox interrupt:%d\n",
    VAR_3);
   return VAR_3;
  }
 }

 return 0;
}
