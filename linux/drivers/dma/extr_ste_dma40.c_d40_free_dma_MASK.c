
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct d40_phy_res {scalar_t__ allocated_src; scalar_t__ allocated_dst; size_t num; } ;
struct TYPE_3__ {scalar_t__ dir; int dev_type; } ;
struct d40_chan {size_t log_num; int busy; int configured; TYPE_2__* base; struct d40_phy_res* phy_chan; TYPE_1__ dma_cfg; } ;
struct TYPE_4__ {int dev; int ** lookup_phy_chans; int ** lookup_log_chans; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct d40_chan*,char*) ;
 scalar_t__ FUNC_2 (struct d40_chan*) ;
 int FUNC_3 (struct d40_phy_res*,int,int ) ;
 int FUNC_4 (struct d40_chan*,int ) ;
 int FUNC_5 (struct d40_chan*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct d40_chan *VAR_6)
{

 int VAR_7 = 0;
 u32 VAR_8 = FUNC_0(VAR_6->dma_cfg.dev_type);
 struct d40_phy_res *VAR_9 = VAR_6->phy_chan;
 bool VAR_10;


 FUNC_5(VAR_6);

 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_6, "phy == null\n");
  return -VAR_5;
 }

 if (VAR_9->allocated_src == VAR_0 &&
     VAR_9->allocated_dst == VAR_0) {
  FUNC_1(VAR_6, "channel already free\n");
  return -VAR_5;
 }

 if (VAR_6->dma_cfg.dir == VAR_3 ||
     VAR_6->dma_cfg.dir == VAR_4)
  VAR_10 = 0;
 else if (VAR_6->dma_cfg.dir == VAR_2)
  VAR_10 = 1;
 else {
  FUNC_1(VAR_6, "Unknown direction\n");
  return -VAR_5;
 }

 FUNC_6(VAR_6->base->dev);
 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_6, "stop failed\n");
  goto mark_last_busy;
 }

 FUNC_3(VAR_9, VAR_10, FUNC_2(VAR_6) ? VAR_8 : 0);

 if (FUNC_2(VAR_6))
  VAR_6->base->lookup_log_chans[VAR_6->log_num] = ((void*)0);
 else
  VAR_6->base->lookup_phy_chans[VAR_9->num] = ((void*)0);

 if (VAR_6->busy) {
  FUNC_7(VAR_6->base->dev);
  FUNC_8(VAR_6->base->dev);
 }

 VAR_6->busy = 0;
 VAR_6->phy_chan = ((void*)0);
 VAR_6->configured = 0;
 mark_last_busy:
 FUNC_7(VAR_6->base->dev);
 FUNC_8(VAR_6->base->dev);
 return VAR_7;
}
