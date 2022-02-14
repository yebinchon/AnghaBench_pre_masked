
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int dev_type; } ;
struct TYPE_9__ {int lcsp3; int lcsp1; } ;
struct TYPE_8__ {size_t chan_id; TYPE_1__* device; } ;
struct d40_chan {int dst_def_cfg; int src_def_cfg; TYPE_4__ dma_cfg; TYPE_3__ log_def; TYPE_2__ chan; } ;
typedef int dma_cap_mask_t ;
struct TYPE_7__ {int cap_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct d40_chan*,char*) ;
 int FUNC_2 (TYPE_4__*,int *,int *) ;
 int * VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct d40_chan *VAR_8)
{
 dma_cap_mask_t VAR_9 = VAR_8->chan.device->cap_mask;

 if (FUNC_3(VAR_2, VAR_9) && !FUNC_3(VAR_3, VAR_9)) {
  VAR_8->dma_cfg = VAR_6;
  VAR_8->dma_cfg.dev_type = VAR_5[VAR_8->chan.chan_id];

  FUNC_2(&VAR_8->dma_cfg,
       &VAR_8->log_def.lcsp1, &VAR_8->log_def.lcsp3);

 } else if (FUNC_3(VAR_2, VAR_9) &&
     FUNC_3(VAR_3, VAR_9)) {
  VAR_8->dma_cfg = VAR_7;


  VAR_8->dst_def_cfg |= FUNC_0(VAR_1);


  VAR_8->src_def_cfg |= FUNC_0(VAR_0);
  VAR_8->dst_def_cfg |= FUNC_0(VAR_0);

 } else {
  FUNC_1(VAR_8, "No memcpy\n");
  return -VAR_4;
 }

 return 0;
}
