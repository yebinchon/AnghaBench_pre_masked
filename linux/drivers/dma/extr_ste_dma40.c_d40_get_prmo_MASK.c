
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int const u32 ;
struct TYPE_2__ {size_t mode_opt; } ;
struct d40_chan {TYPE_1__ dma_cfg; } ;
 scalar_t__ FUNC_0 (struct d40_chan*) ;

__attribute__((used)) static u32 FUNC_1(struct d40_chan *VAR_0)
{
 static const unsigned int VAR_1[] = {
  [130]
   = 136,
  [128]
   = 134,
  [129]
   = 135,
 };
 static const unsigned int VAR_2[] = {
  [131]
   = 137,
  [132]
   = 138,
  [133]
   = 139,
 };

 if (FUNC_0(VAR_0))
  return VAR_1[VAR_0->dma_cfg.mode_opt];
 else
  return VAR_2[VAR_0->dma_cfg.mode_opt];
}
