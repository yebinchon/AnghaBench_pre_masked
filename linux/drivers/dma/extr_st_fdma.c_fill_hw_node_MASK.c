
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dstride; scalar_t__ sstride; } ;
struct st_fdma_hw_node {TYPE_1__ generic; int saddr; int control; int daddr; } ;
struct TYPE_4__ {int dev_addr; } ;
struct st_fdma_chan {TYPE_2__ cfg; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct st_fdma_hw_node *VAR_5,
   struct st_fdma_chan *VAR_6,
   enum dma_transfer_direction VAR_7)
{
 if (VAR_7 == VAR_0) {
  VAR_5->control |= VAR_3;
  VAR_5->control |= VAR_2;
  VAR_5->daddr = VAR_6->cfg.dev_addr;
 } else {
  VAR_5->control |= VAR_4;
  VAR_5->control |= VAR_1;
  VAR_5->saddr = VAR_6->cfg.dev_addr;
 }

 VAR_5->generic.sstride = 0;
 VAR_5->generic.dstride = 0;
}
