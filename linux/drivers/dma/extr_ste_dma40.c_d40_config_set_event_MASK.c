
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ dir; int dev_type; } ;
struct d40_chan {TYPE_1__ dma_cfg; } ;
typedef enum d40_events { ____Placeholder_d40_events } d40_events ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct d40_chan*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct d40_chan *VAR_4,
     enum d40_events VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4->dma_cfg.dev_type);


 if ((VAR_4->dma_cfg.dir == VAR_3) ||
     (VAR_4->dma_cfg.dir == VAR_2))
  FUNC_1(VAR_4, VAR_5, VAR_6,
           VAR_1);

 if (VAR_4->dma_cfg.dir != VAR_3)
  FUNC_1(VAR_4, VAR_5, VAR_6,
           VAR_0);
}
