
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s3c24xx_dma_engine {TYPE_1__* pdev; } ;
struct TYPE_6__ {int lock; } ;
struct s3c24xx_dma_chan {TYPE_3__ vc; TYPE_2__* at; scalar_t__ phy; int state; int id; struct s3c24xx_dma_engine* host; } ;
struct dma_chan {int dummy; } ;
struct TYPE_5__ {int vd; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct s3c24xx_dma_engine*,struct s3c24xx_dma_chan*) ;
 int FUNC_2 (struct s3c24xx_dma_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct s3c24xx_dma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_2)
{
 struct s3c24xx_dma_chan *VAR_3 = FUNC_5(VAR_2);
 struct s3c24xx_dma_engine *VAR_4 = VAR_3->host;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_3->vc.lock, VAR_5);

 if (!VAR_3->phy && !VAR_3->at) {
  FUNC_0(&VAR_4->pdev->dev, "trying to terminate already stopped channel %d\n",
   VAR_3->id);
  VAR_6 = -VAR_0;
  goto unlock;
 }

 VAR_3->state = VAR_1;


 if (VAR_3->phy)
  FUNC_2(VAR_3);


 if (VAR_3->at) {
  FUNC_6(&VAR_3->at->vd);
  VAR_3->at = ((void*)0);
 }


 FUNC_1(VAR_4, VAR_3);
unlock:
 FUNC_4(&VAR_3->vc.lock, VAR_5);

 return VAR_6;
}
