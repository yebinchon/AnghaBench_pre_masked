
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* next; } ;
struct s3c24xx_txd {TYPE_5__ dsg_list; TYPE_4__* at; int vd; scalar_t__ cyclic; } ;
struct s3c24xx_dma_phy {int id; TYPE_2__* host; struct s3c24xx_dma_chan* serving; } ;
struct TYPE_8__ {int lock; } ;
struct s3c24xx_dma_chan {TYPE_3__ vc; struct s3c24xx_txd* at; } ;
typedef int irqreturn_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_7__ {TYPE_1__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (struct s3c24xx_dma_chan*) ;
 int FUNC_4 (struct s3c24xx_dma_chan*,struct s3c24xx_txd*) ;
 int FUNC_5 (struct s3c24xx_dma_chan*) ;
 int FUNC_6 (struct s3c24xx_dma_phy*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_1, void *VAR_2)
{
 struct s3c24xx_dma_phy *VAR_3 = VAR_2;
 struct s3c24xx_dma_chan *VAR_4 = VAR_3->serving;
 struct s3c24xx_txd *VAR_5;

 FUNC_0(&VAR_3->host->pdev->dev, "interrupt on channel %d\n", VAR_3->id);
 if (FUNC_9(!VAR_4)) {
  FUNC_1(&VAR_3->host->pdev->dev, "interrupt on unused channel %d\n",
   VAR_3->id);

  FUNC_6(VAR_3);

  return VAR_0;
 }

 FUNC_7(&VAR_4->vc.lock);
 VAR_5 = VAR_4->at;
 if (VAR_5) {

  if (!FUNC_2(VAR_5->at, &VAR_5->dsg_list)) {
   VAR_5->at = VAR_5->at->next;
   if (VAR_5->cyclic)
    FUNC_11(&VAR_5->vd);
   FUNC_4(VAR_4, VAR_5);
  } else if (!VAR_5->cyclic) {
   VAR_4->at = ((void*)0);
   FUNC_10(&VAR_5->vd);





   if (FUNC_12(&VAR_4->vc))
    FUNC_5(VAR_4);
   else
    FUNC_3(VAR_4);
  } else {
   FUNC_11(&VAR_5->vd);


   VAR_5->at = VAR_5->dsg_list.next;
   FUNC_4(VAR_4, VAR_5);
  }
 }
 FUNC_8(&VAR_4->vc.lock);

 return VAR_0;
}
