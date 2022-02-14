
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coh_dma_channel {int dummy; } ;
struct coh901318_chan {size_t id; } ;


 struct coh_dma_channel const* VAR_0 ;

__attribute__((used)) static inline const struct coh_dma_channel *
FUNC_0(struct coh901318_chan *VAR_1)
{
 return &VAR_0[VAR_1->id];
}
