
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {scalar_t__ owner; scalar_t__ issued; int last_tail; int head; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mic_dma_chan*) ;
 int FUNC_1 (struct mic_dma_chan*) ;
 int FUNC_2 (struct mic_dma_chan*) ;
 int FUNC_3 (struct mic_dma_chan*) ;
 int FUNC_4 (struct mic_dma_chan*) ;
 int FUNC_5 (struct mic_dma_chan*) ;
 int FUNC_6 (struct mic_dma_chan*) ;
 int FUNC_7 (struct mic_dma_chan*,int ) ;
 int FUNC_8 (struct mic_dma_chan*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct mic_dma_chan *VAR_3)
{
 if (VAR_0 == VAR_3->owner)
  FUNC_2(VAR_3);
 FUNC_5(VAR_3);
 FUNC_0(VAR_3);
 FUNC_8(VAR_3, VAR_1, 0);
 FUNC_1(VAR_3);
 VAR_3->last_tail = FUNC_7(VAR_3, VAR_2);
 VAR_3->head = VAR_3->last_tail;
 VAR_3->issued = 0;
 FUNC_3(VAR_3);
 FUNC_6(VAR_3);
 return FUNC_4(VAR_3);
}
