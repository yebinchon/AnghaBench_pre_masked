
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int chan_id; } ;
struct pch_dma_chan {TYPE_1__ chan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pch_dma_chan*) ;
 scalar_t__ FUNC_1 (struct pch_dma_chan*) ;

__attribute__((used)) static bool FUNC_2(struct pch_dma_chan *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->chan.chan_id < 8)
  VAR_2 = FUNC_0(VAR_1);
 else
  VAR_2 = FUNC_1(VAR_1);


 if (VAR_2 == VAR_0)
  return 1;
 else
  return 0;
}
