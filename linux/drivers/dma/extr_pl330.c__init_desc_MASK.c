
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_submit; } ;
struct TYPE_3__ {void* dcctl; void* scctl; int swap; } ;
struct dma_pl330_desc {int node; TYPE_2__ txd; TYPE_1__ rqcfg; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct dma_pl330_desc *VAR_3)
{
 VAR_3->rqcfg.swap = VAR_1;
 VAR_3->rqcfg.scctl = VAR_0;
 VAR_3->rqcfg.dcctl = VAR_0;
 VAR_3->txd.tx_submit = VAR_2;

 FUNC_0(&VAR_3->node);
}
