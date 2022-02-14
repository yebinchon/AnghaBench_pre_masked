
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct hidma_dev {TYPE_2__ ddev; int lldev; } ;
struct TYPE_3__ {int device; } ;
struct hidma_chan {int paused; TYPE_1__ chan; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct hidma_chan* FUNC_5 (struct dma_chan*) ;
 struct hidma_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_0)
{
 struct hidma_chan *VAR_1;
 struct hidma_dev *VAR_2;
 int VAR_3 = 0;

 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = FUNC_6(VAR_1->chan.device);
 if (VAR_1->paused) {
  FUNC_2(VAR_2->ddev.dev);
  VAR_3 = FUNC_1(VAR_2->lldev);
  if (!VAR_3)
   VAR_1->paused = 0;
  else
   FUNC_0(VAR_2->ddev.dev,
    "failed to resume the channel");
  FUNC_3(VAR_2->ddev.dev);
  FUNC_4(VAR_2->ddev.dev);
 }
 return VAR_3;
}
