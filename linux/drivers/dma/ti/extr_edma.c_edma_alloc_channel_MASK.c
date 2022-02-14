
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int ch_num; struct edma_cc* ecc; } ;
struct edma_cc {int dummy; } ;
typedef enum dma_event_q { ____Placeholder_dma_event_q } dma_event_q ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct edma_chan*,int) ;
 int FUNC_4 (struct edma_cc*,int ,int ,int ,int ) ;
 int FUNC_5 (struct edma_chan*,int) ;
 int FUNC_6 (struct edma_chan*) ;

__attribute__((used)) static int FUNC_7(struct edma_chan *VAR_1,
         enum dma_event_q VAR_2)
{
 struct edma_cc *VAR_3 = VAR_1->ecc;
 int VAR_4 = FUNC_1(VAR_1->ch_num);


 FUNC_4(VAR_3, VAR_0, 0, FUNC_2(VAR_4),
         FUNC_0(VAR_4));


 FUNC_6(VAR_1);

 FUNC_5(VAR_1, 1);

 FUNC_3(VAR_1, VAR_2);

 return 0;
}
