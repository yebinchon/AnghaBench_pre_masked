
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_filter_param {scalar_t__ chan_id; } ;
struct dma_chan {scalar_t__ chan_id; } ;



__attribute__((used)) static bool FUNC_0(struct dma_chan *VAR_0, void *VAR_1)
{
 struct mmp_tdma_filter_param *VAR_2 = VAR_1;

 if (VAR_0->chan_id != VAR_2->chan_id)
  return 0;

 return 1;
}
