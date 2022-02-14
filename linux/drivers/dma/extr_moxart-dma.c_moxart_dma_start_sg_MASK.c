
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxart_sg {int len; int addr; } ;
struct moxart_desc {scalar_t__ dma_dir; int dev_addr; struct moxart_sg* sg; } ;
struct moxart_chan {struct moxart_desc* desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct moxart_chan*,int ,int ) ;
 int FUNC_1 (struct moxart_chan*,int ) ;
 int FUNC_2 (struct moxart_chan*) ;

__attribute__((used)) static void FUNC_3(struct moxart_chan *VAR_2, unsigned int VAR_3)
{
 struct moxart_desc *VAR_4 = VAR_2->desc;
 struct moxart_sg *VAR_5 = VAR_2->desc->sg + VAR_3;

 if (VAR_2->desc->dma_dir == VAR_1)
  FUNC_0(VAR_2, VAR_5->addr, VAR_4->dev_addr);
 else if (VAR_2->desc->dma_dir == VAR_0)
  FUNC_0(VAR_2, VAR_4->dev_addr, VAR_5->addr);

 FUNC_1(VAR_2, VAR_5->len);

 FUNC_2(VAR_2);
}
