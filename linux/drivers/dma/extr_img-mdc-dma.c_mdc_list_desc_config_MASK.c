
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdc_hw_list_desc {int gen_conf; int readport_conf; size_t xfer_size; int ctrl_status; int * next_desc; scalar_t__ cmds_done; scalar_t__ node_addr; void* write_addr; void* read_addr; } ;
struct mdc_dma {unsigned int bus_width; unsigned int max_burst_mult; } ;
struct TYPE_2__ {int dst_addr_width; int dst_maxburst; int src_addr_width; int src_maxburst; } ;
struct mdc_chan {int thread; TYPE_1__ config; struct mdc_dma* mdma; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct mdc_hw_list_desc*,int) ;
 int FUNC_2 (struct mdc_hw_list_desc*,int) ;
 unsigned int FUNC_3 (unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct mdc_chan *VAR_16,
     struct mdc_hw_list_desc *VAR_17,
     enum dma_transfer_direction VAR_18,
     dma_addr_t VAR_19, dma_addr_t VAR_20, size_t VAR_21)
{
 struct mdc_dma *VAR_22 = VAR_16->mdma;
 unsigned int VAR_23, VAR_24;

 VAR_17->gen_conf = VAR_4 | VAR_8 |
  VAR_7 | VAR_10 |
  VAR_9;
 VAR_17->readport_conf =
  (VAR_16->thread << VAR_14) |
  (VAR_16->thread << VAR_13) |
  (VAR_16->thread << VAR_15);
 VAR_17->read_addr = VAR_19;
 VAR_17->write_addr = VAR_20;
 VAR_17->xfer_size = VAR_21 - 1;
 VAR_17->node_addr = 0;
 VAR_17->cmds_done = 0;
 VAR_17->ctrl_status = VAR_3 |
  VAR_2;
 VAR_17->next_desc = ((void*)0);

 if (FUNC_0(VAR_20, VAR_22->bus_width) &&
     FUNC_0(VAR_19, VAR_22->bus_width))
  VAR_23 = VAR_22->bus_width * VAR_22->max_burst_mult;
 else
  VAR_23 = VAR_22->bus_width * (VAR_22->max_burst_mult - 1);

 if (VAR_18 == VAR_1) {
  VAR_17->gen_conf |= VAR_5;
  VAR_17->readport_conf |= VAR_12;
  FUNC_1(VAR_17, VAR_22->bus_width);
  FUNC_2(VAR_17, VAR_16->config.dst_addr_width);
  VAR_24 = FUNC_3(VAR_23, VAR_16->config.dst_maxburst *
     VAR_16->config.dst_addr_width);
 } else if (VAR_18 == VAR_0) {
  VAR_17->gen_conf |= VAR_6;
  VAR_17->readport_conf |= VAR_12;
  FUNC_1(VAR_17, VAR_16->config.src_addr_width);
  FUNC_2(VAR_17, VAR_22->bus_width);
  VAR_24 = FUNC_3(VAR_23, VAR_16->config.src_maxburst *
     VAR_16->config.src_addr_width);
 } else {
  VAR_17->gen_conf |= VAR_5 |
   VAR_6;
  FUNC_1(VAR_17, VAR_22->bus_width);
  FUNC_2(VAR_17, VAR_22->bus_width);
  VAR_24 = VAR_23;
 }
 VAR_17->readport_conf |= (VAR_24 - 1) <<
  VAR_11;
}
