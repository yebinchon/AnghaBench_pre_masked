
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct d40_gen_dmac {int realtime_en; int realtime_clear; int high_prio_en; int high_prio_clear; } ;
struct TYPE_3__ {int realtime; int high_priority; } ;
struct d40_chan {TYPE_2__* base; TYPE_1__ dma_cfg; } ;
struct TYPE_4__ {int virtbase; struct d40_gen_dmac gen_dmac; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct d40_chan*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct d40_chan *VAR_0, int VAR_1, bool VAR_2)
{
 bool VAR_3 = VAR_0->dma_cfg.realtime;
 bool VAR_4 = VAR_0->dma_cfg.high_priority;
 u32 VAR_5;
 u32 VAR_6 = FUNC_1(VAR_1);
 u32 VAR_7 = FUNC_2(VAR_1);
 u32 VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9;
 struct d40_gen_dmac *VAR_10 = &VAR_0->base->gen_dmac;

 VAR_5 = VAR_3 ? VAR_10->realtime_en : VAR_10->realtime_clear;
 if (!VAR_2 && FUNC_3(VAR_0))
  VAR_4 = 0;

 VAR_9 = VAR_4 ? VAR_10->high_prio_en : VAR_10->high_prio_clear;


 if (!VAR_2)
  VAR_8 <<= 16;

 FUNC_4(VAR_8, VAR_0->base->virtbase + VAR_9 + VAR_7 * 4);
 FUNC_4(VAR_8, VAR_0->base->virtbase + VAR_5 + VAR_7 * 4);
}
