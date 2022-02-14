
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct axi_dma_chan {TYPE_1__* chip; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct axi_dma_chan*) ;
 int FUNC_1 (struct axi_dma_chan*) ;
 int FUNC_2 (struct axi_dma_chan*) ;
 int FUNC_3 (struct dma_chan*) ;
 struct axi_dma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_1)
{
 struct axi_dma_chan *VAR_2 = FUNC_4(VAR_1);


 if (FUNC_0(VAR_2)) {
  FUNC_5(FUNC_2(VAR_2), "%s is non-idle!\n",
   FUNC_1(VAR_2));
  return -VAR_0;
 }

 FUNC_6(FUNC_3(VAR_1), "%s: allocating\n", FUNC_1(VAR_2));

 FUNC_7(VAR_2->chip->dev);

 return 0;
}
