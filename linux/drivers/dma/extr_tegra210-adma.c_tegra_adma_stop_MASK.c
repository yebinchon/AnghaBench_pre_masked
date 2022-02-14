
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_adma_chan {int * desc; scalar_t__ chan_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,unsigned int,int,int,int) ;
 int FUNC_3 (struct tegra_adma_chan*) ;
 int FUNC_4 (struct tegra_adma_chan*,int ,int ) ;
 int FUNC_5 (struct tegra_adma_chan*) ;

__attribute__((used)) static void FUNC_6(struct tegra_adma_chan *VAR_4)
{
 unsigned int VAR_5;


 FUNC_4(VAR_4, VAR_0, 0);


 FUNC_5(VAR_4);

 if (FUNC_2(VAR_3, VAR_4->chan_addr + VAR_1,
   VAR_5, !(VAR_5 & VAR_2),
   20, 10000)) {
  FUNC_0(FUNC_3(VAR_4), "unable to stop DMA channel\n");
  return;
 }

 FUNC_1(VAR_4->desc);
 VAR_4->desc = ((void*)0);
}
