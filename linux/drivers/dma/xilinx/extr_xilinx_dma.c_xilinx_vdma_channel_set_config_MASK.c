
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xilinx_vdma_config {int master; int park_frm; int coalesc; int delay; int ext_fsync; scalar_t__ park; int vflip_en; int frm_cnt_en; scalar_t__ gen_lock; int frm_dly; scalar_t__ reset; } ;
struct TYPE_2__ {int master; int park_frm; int coalesc; int delay; int vflip_en; int frm_cnt_en; scalar_t__ gen_lock; scalar_t__ park; int frm_dly; } ;
struct xilinx_dma_chan {TYPE_1__ config; scalar_t__ genlock; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct xilinx_dma_chan*,int ) ;
 int FUNC_1 (struct xilinx_dma_chan*,int ,int) ;
 struct xilinx_dma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct xilinx_dma_chan*) ;

int FUNC_4(struct dma_chan *VAR_12,
     struct xilinx_vdma_config *VAR_13)
{
 struct xilinx_dma_chan *VAR_14 = FUNC_2(VAR_12);
 u32 VAR_15;

 if (VAR_13->reset)
  return FUNC_3(VAR_14);

 VAR_15 = FUNC_0(VAR_14, VAR_11);

 VAR_14->config.frm_dly = VAR_13->frm_dly;
 VAR_14->config.park = VAR_13->park;


 VAR_14->config.gen_lock = VAR_13->gen_lock;
 VAR_14->config.master = VAR_13->master;

 VAR_15 &= ~VAR_8;
 if (VAR_13->gen_lock && VAR_14->genlock) {
  VAR_15 |= VAR_8;
  VAR_15 &= ~VAR_9;
  VAR_15 |= VAR_13->master << VAR_10;
 }

 VAR_14->config.frm_cnt_en = VAR_13->frm_cnt_en;
 VAR_14->config.vflip_en = VAR_13->vflip_en;

 if (VAR_13->park)
  VAR_14->config.park_frm = VAR_13->park_frm;
 else
  VAR_14->config.park_frm = -1;

 VAR_14->config.coalesc = VAR_13->coalesc;
 VAR_14->config.delay = VAR_13->delay;

 if (VAR_13->coalesc <= VAR_4) {
  VAR_15 &= ~VAR_3;
  VAR_15 |= VAR_13->coalesc << VAR_5;
  VAR_14->config.coalesc = VAR_13->coalesc;
 }

 if (VAR_13->delay <= VAR_1) {
  VAR_15 &= ~VAR_0;
  VAR_15 |= VAR_13->delay << VAR_2;
  VAR_14->config.delay = VAR_13->delay;
 }


 VAR_15 &= ~VAR_6;
 VAR_15 |= VAR_13->ext_fsync << VAR_7;

 FUNC_1(VAR_14, VAR_11, VAR_15);

 return 0;
}
