
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct axi_dma_chan {TYPE_1__* chip; int descs_allocated; int vc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct axi_dma_chan*) ;
 int FUNC_2 (struct axi_dma_chan*,int ) ;
 scalar_t__ FUNC_3 (struct axi_dma_chan*) ;
 int FUNC_4 (struct axi_dma_chan*) ;
 int FUNC_5 (struct dma_chan*) ;
 struct axi_dma_chan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct dma_chan *VAR_1)
{
 struct axi_dma_chan *VAR_2 = FUNC_6(VAR_1);


 if (FUNC_3(VAR_2))
  FUNC_7(FUNC_5(VAR_1), "%s is non-idle!\n",
   FUNC_4(VAR_2));

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, VAR_0);

 FUNC_10(&VAR_2->vc);

 FUNC_8(FUNC_5(VAR_1),
   "%s: free resources, descriptor still allocated: %u\n",
   FUNC_4(VAR_2), FUNC_0(&VAR_2->descs_allocated));

 FUNC_9(VAR_2->chip->dev);
}
