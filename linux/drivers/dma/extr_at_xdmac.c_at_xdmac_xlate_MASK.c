
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int args_count; int * args; } ;
struct of_dma {struct at_xdmac* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;
struct at_xdmac_chan {int perid; int perif; int memif; } ;
struct TYPE_2__ {struct device* dev; } ;
struct at_xdmac {TYPE_1__ dma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int ,int ,int ) ;
 int FUNC_4 (struct device*,char*) ;
 struct dma_chan* FUNC_5 (TYPE_1__*) ;
 struct at_xdmac_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_7(struct of_phandle_args *VAR_0,
           struct of_dma *VAR_1)
{
 struct at_xdmac *VAR_2 = VAR_1->of_dma_data;
 struct at_xdmac_chan *VAR_3;
 struct dma_chan *VAR_4;
 struct device *VAR_5 = VAR_2->dma.dev;

 if (VAR_0->args_count != 1) {
  FUNC_4(VAR_5, "dma phandler args: bad number of args\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_5(&VAR_2->dma);
 if (!VAR_4) {
  FUNC_4(VAR_5, "can't get a dma channel\n");
  return ((void*)0);
 }

 VAR_3 = FUNC_6(VAR_4);
 VAR_3->memif = FUNC_0(VAR_0->args[0]);
 VAR_3->perif = FUNC_2(VAR_0->args[0]);
 VAR_3->perid = FUNC_1(VAR_0->args[0]);
 FUNC_3(VAR_5, "chan dt cfg: memif=%u perif=%u perid=%u\n",
   VAR_3->memif, VAR_3->perif, VAR_3->perid);

 return VAR_4;
}
