
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx_ring {scalar_t__ descs_dma; void* descs_cpu; int order; int * buf; } ;
struct ag71xx {struct ag71xx_ring rx_ring; struct ag71xx_ring tx_ring; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 void* FUNC_3 (int *,int,scalar_t__*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct ag71xx *VAR_4)
{
 struct ag71xx_ring *VAR_5 = &VAR_4->tx_ring;
 struct ag71xx_ring *VAR_6 = &VAR_4->rx_ring;
 int VAR_7 = FUNC_0(VAR_5->order) + FUNC_0(VAR_6->order);
 int VAR_8 = FUNC_0(VAR_5->order);

 VAR_5->buf = FUNC_5(VAR_7 * sizeof(*VAR_5->buf), VAR_3);
 if (!VAR_5->buf)
  return -VAR_1;

 VAR_5->descs_cpu = FUNC_3(((void*)0), VAR_7 * VAR_0,
        &VAR_5->descs_dma, VAR_2);
 if (!VAR_5->descs_cpu) {
  FUNC_4(VAR_5->buf);
  VAR_5->buf = ((void*)0);
  return -VAR_1;
 }

 VAR_6->buf = &VAR_5->buf[FUNC_0(VAR_5->order)];
 VAR_6->descs_cpu = ((void *)VAR_5->descs_cpu) + VAR_8 * VAR_0;
 VAR_6->descs_dma = VAR_5->descs_dma + VAR_8 * VAR_0;

 FUNC_2(VAR_4);
 return FUNC_1(VAR_4);
}
