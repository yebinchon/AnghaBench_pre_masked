
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* big_endian; } ;
struct TYPE_3__ {void* big_endian; } ;
struct stedma40_chan_cfg {int use_fixed_channel; int high_priority; int phy_channel; TYPE_2__ src_info; int dir; TYPE_1__ dst_info; int mode; int dev_type; } ;
struct of_phandle_args {int * args; } ;
struct of_dma {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 struct dma_chan* FUNC_7 (int ,int ,struct stedma40_chan_cfg*) ;
 int FUNC_8 (struct stedma40_chan_cfg*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static struct dma_chan *FUNC_9(struct of_phandle_args *VAR_6,
      struct of_dma *VAR_7)
{
 struct stedma40_chan_cfg VAR_8;
 dma_cap_mask_t VAR_9;
 u32 VAR_10;

 FUNC_8(&VAR_8, 0, sizeof(struct stedma40_chan_cfg));

 FUNC_6(VAR_9);
 FUNC_5(VAR_2, VAR_9);

 VAR_8.dev_type = VAR_6->args[0];
 VAR_10 = VAR_6->args[2];

 switch (FUNC_4(VAR_10)) {
 case 0: VAR_8.mode = VAR_3; break;
 case 1: VAR_8.mode = VAR_4; break;
 }

 switch (FUNC_1(VAR_10)) {
 case 0:
  VAR_8.dir = VAR_1;
  VAR_8.dst_info.big_endian = FUNC_0(VAR_10);
  break;
 case 1:
  VAR_8.dir = VAR_0;
  VAR_8.src_info.big_endian = FUNC_0(VAR_10);
  break;
 }

 if (FUNC_2(VAR_10)) {
  VAR_8.phy_channel = VAR_6->args[1];
  VAR_8.use_fixed_channel = 1;
 }

 if (FUNC_3(VAR_10))
  VAR_8.high_priority = 1;

 return FUNC_7(VAR_9, VAR_5, &VAR_8);
}
