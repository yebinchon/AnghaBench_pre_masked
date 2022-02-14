
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ep93xx_dma_data {int port; } ;
struct TYPE_2__ {struct ep93xx_dma_data* private; } ;
struct ep93xx_dma_chan {scalar_t__ buffer; scalar_t__ regs; TYPE_1__ chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ep93xx_dma_chan*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ep93xx_dma_chan *VAR_4)
{
 struct ep93xx_dma_data *VAR_5 = VAR_4->chan.private;
 u32 VAR_6;

 FUNC_1(VAR_5->port & 0xf, VAR_4->regs + VAR_3);

 VAR_6 = VAR_0 | VAR_2
  | VAR_1;
 FUNC_0(VAR_4, VAR_6);

 VAR_4->buffer = 0;

 return 0;
}
