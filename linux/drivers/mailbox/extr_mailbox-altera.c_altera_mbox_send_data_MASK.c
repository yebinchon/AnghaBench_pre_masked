
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {int dummy; } ;
struct altera_mbox {scalar_t__ mbox_base; scalar_t__ intr_mode; int dev; int is_sender; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (struct altera_mbox*) ;
 int FUNC_1 (struct altera_mbox*,int) ;
 int FUNC_2 (int ,char*) ;
 struct altera_mbox* FUNC_3 (struct mbox_chan*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mbox_chan *VAR_6, void *VAR_7)
{
 struct altera_mbox *VAR_8 = FUNC_3(VAR_6);
 u32 *VAR_9 = (u32 *)VAR_7;

 if (!VAR_8 || !VAR_7)
  return -VAR_1;
 if (!VAR_8->is_sender) {
  FUNC_2(VAR_8->dev,
    "failed to send. This is receiver mailbox.\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_8))
  return -VAR_0;


 if (VAR_8->intr_mode)
  FUNC_1(VAR_8, 1);


 FUNC_4(VAR_9[VAR_5], VAR_8->mbox_base + VAR_3);
 FUNC_4(VAR_9[VAR_4], VAR_8->mbox_base + VAR_2);

 return 0;
}
