
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_mailbox {int buf; int dma; } ;
struct TYPE_2__ {int pool; } ;
struct mthca_dev {TYPE_1__ cmd; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct mthca_mailbox* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct mthca_mailbox*) ;
 struct mthca_mailbox* FUNC_3 (int,int ) ;

struct mthca_mailbox *FUNC_4(struct mthca_dev *VAR_1,
       gfp_t VAR_2)
{
 struct mthca_mailbox *VAR_3;

 VAR_3 = FUNC_3(sizeof *VAR_3, VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->buf = FUNC_1(VAR_1->cmd.pool, VAR_2, &VAR_3->dma);
 if (!VAR_3->buf) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
