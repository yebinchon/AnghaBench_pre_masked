
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct d40_phy_res {size_t num; } ;
struct TYPE_3__ {int dev_type; scalar_t__ mode; scalar_t__ dir; int phy_channel; scalar_t__ use_fixed_channel; } ;
struct d40_chan {int log_num; struct d40_phy_res* phy_chan; TYPE_2__* base; TYPE_1__ dma_cfg; } ;
struct TYPE_4__ {int num_phy_chans; struct d40_chan** lookup_phy_chans; struct d40_chan** lookup_log_chans; struct d40_phy_res* phy_res; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct d40_chan*) ;
 scalar_t__ FUNC_3 (struct d40_phy_res*,int,int,int,int*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct d40_chan *VAR_6, bool *VAR_7)
{
 int VAR_8 = VAR_6->dma_cfg.dev_type;
 int VAR_9;
 int VAR_10;
 struct d40_phy_res *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 bool VAR_16;
 bool VAR_17 = VAR_6->dma_cfg.mode == VAR_5;

 VAR_11 = VAR_6->base->phy_res;
 VAR_15 = VAR_6->base->num_phy_chans;

 if (VAR_6->dma_cfg.dir == VAR_1) {
  VAR_14 = 2 * VAR_8;
  VAR_16 = 1;
 } else if (VAR_6->dma_cfg.dir == VAR_2 ||
     VAR_6->dma_cfg.dir == VAR_3) {

  VAR_14 = 2 * VAR_8 + 1;
  VAR_16 = 0;
 } else
  return -VAR_4;

 VAR_9 = FUNC_1(VAR_8);
 VAR_10 = FUNC_0(VAR_8);

 if (!VAR_17) {
  if (VAR_6->dma_cfg.dir == VAR_3) {

   if (VAR_6->dma_cfg.use_fixed_channel) {
    VAR_12 = VAR_6->dma_cfg.phy_channel;
    if (FUNC_3(&VAR_11[VAR_12], VAR_16,
             0, VAR_17,
             VAR_7))
     goto found_phy;
   } else {
    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
     if (FUNC_3(&VAR_11[VAR_12], VAR_16,
             0, VAR_17,
             VAR_7))
      goto found_phy;
    }
   }
  } else
   for (VAR_13 = 0; VAR_13 < VAR_6->base->num_phy_chans; VAR_13 += 8) {
    int VAR_18 = VAR_13 + VAR_9 * 2;
    for (VAR_12 = VAR_18; VAR_12 < VAR_18 + 2; VAR_12++) {
     if (FUNC_3(&VAR_11[VAR_12],
              VAR_16,
              0,
              VAR_17,
              VAR_7))
      goto found_phy;
    }
   }
  return -VAR_4;
found_phy:
  VAR_6->phy_chan = &VAR_11[VAR_12];
  VAR_6->log_num = VAR_0;
  goto out;
 }
 if (VAR_8 == -1)
  return -VAR_4;


 for (VAR_13 = 0; VAR_13 < VAR_6->base->num_phy_chans; VAR_13 += 8) {
  int VAR_19 = VAR_13 + VAR_9 * 2;

  if (VAR_6->dma_cfg.use_fixed_channel) {
   VAR_12 = VAR_6->dma_cfg.phy_channel;

   if ((VAR_12 != VAR_19) && (VAR_12 != VAR_19 + 1)) {
    FUNC_4(FUNC_2(VAR_6),
     "invalid fixed phy channel %d\n", VAR_12);
    return -VAR_4;
   }

   if (FUNC_3(&VAR_11[VAR_12], VAR_16, VAR_10,
            VAR_17, VAR_7))
    goto found_log;

   FUNC_4(FUNC_2(VAR_6),
    "could not allocate fixed phy channel %d\n", VAR_12);
   return -VAR_4;
  }






  if (VAR_16) {
   for (VAR_12 = VAR_19; VAR_12 < VAR_19 + 2; VAR_12++) {
    if (FUNC_3(&VAR_11[VAR_12], VAR_16,
             VAR_10, VAR_17,
             VAR_7))
     goto found_log;
   }
  } else {
   for (VAR_12 = VAR_19 + 1; VAR_12 >= VAR_19; VAR_12--) {
    if (FUNC_3(&VAR_11[VAR_12], VAR_16,
             VAR_10, VAR_17,
             VAR_7))
     goto found_log;
   }
  }
 }
 return -VAR_4;

found_log:
 VAR_6->phy_chan = &VAR_11[VAR_12];
 VAR_6->log_num = VAR_14;
out:

 if (VAR_17)
  VAR_6->base->lookup_log_chans[VAR_6->log_num] = VAR_6;
 else
  VAR_6->base->lookup_phy_chans[VAR_6->phy_chan->num] = VAR_6;

 return 0;

}
