
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int ch_num; struct edma_cc* ecc; } ;
struct edma_cc {int default_queue; int num_tc; } ;
typedef enum dma_event_q { ____Placeholder_dma_event_q } dma_event_q ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct edma_cc*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct edma_chan *VAR_2,
           enum dma_event_q VAR_3)
{
 struct edma_cc *VAR_4 = VAR_2->ecc;
 int VAR_5 = FUNC_0(VAR_2->ch_num);
 int VAR_6 = (VAR_5 & 0x7) * 4;


 if (VAR_3 == VAR_1)
  VAR_3 = VAR_4->default_queue;
 if (VAR_3 >= VAR_4->num_tc)
  return;

 VAR_3 &= 7;
 FUNC_1(VAR_4, VAR_0, (VAR_5 >> 3), ~(0x7 << VAR_6),
     VAR_3 << VAR_6);
}
