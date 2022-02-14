
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct owl_dma_txd {int lli_list; } ;
struct TYPE_2__ {int ctrla; int next_lli; } ;
struct owl_dma_lli {TYPE_1__ hw; int phys; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static struct owl_dma_lli *FUNC_2(struct owl_dma_txd *VAR_1,
        struct owl_dma_lli *VAR_2,
        struct owl_dma_lli *VAR_3,
        bool VAR_4)
{
 if (!VAR_4)
  FUNC_0(&VAR_3->node, &VAR_1->lli_list);

 if (VAR_2) {
  VAR_2->hw.next_lli = VAR_3->phys;
  VAR_2->hw.ctrla |= FUNC_1(VAR_0, 0);
 }

 return VAR_3;
}
