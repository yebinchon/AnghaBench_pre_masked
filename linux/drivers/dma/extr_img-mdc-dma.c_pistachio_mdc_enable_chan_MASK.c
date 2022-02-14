
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdc_dma {int periph_regs; } ;
struct mdc_chan {int periph; int chan_nr; struct mdc_dma* mdma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct mdc_chan *VAR_1)
{
 struct mdc_dma *VAR_2 = VAR_1->mdma;

 FUNC_2(VAR_2->periph_regs,
      FUNC_0(VAR_1->chan_nr),
      VAR_0 <<
      FUNC_1(VAR_1->chan_nr),
      VAR_1->periph <<
      FUNC_1(VAR_1->chan_nr));
}
