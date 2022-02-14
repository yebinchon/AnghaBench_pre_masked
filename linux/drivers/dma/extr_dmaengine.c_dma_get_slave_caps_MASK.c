
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_slave_caps {int cmd_pause; int cmd_resume; int cmd_terminate; int descriptor_reuse; int residue_granularity; int max_burst; scalar_t__ directions; int dst_addr_widths; int src_addr_widths; } ;
struct TYPE_2__ {int bits; } ;
struct dma_device {int device_terminate_all; int device_resume; int device_pause; int descriptor_reuse; int residue_granularity; int max_burst; scalar_t__ directions; int dst_addr_widths; int src_addr_widths; TYPE_1__ cap_mask; } ;
struct dma_chan {struct dma_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(struct dma_chan *VAR_4, struct dma_slave_caps *VAR_5)
{
 struct dma_device *VAR_6;

 if (!VAR_4 || !VAR_5)
  return -VAR_2;

 VAR_6 = VAR_4->device;


 if (!(FUNC_0(VAR_1, VAR_6->cap_mask.bits) ||
       FUNC_0(VAR_0, VAR_6->cap_mask.bits)))
  return -VAR_3;






 if (!VAR_6->directions)
  return -VAR_3;

 VAR_5->src_addr_widths = VAR_6->src_addr_widths;
 VAR_5->dst_addr_widths = VAR_6->dst_addr_widths;
 VAR_5->directions = VAR_6->directions;
 VAR_5->max_burst = VAR_6->max_burst;
 VAR_5->residue_granularity = VAR_6->residue_granularity;
 VAR_5->descriptor_reuse = VAR_6->descriptor_reuse;
 VAR_5->cmd_pause = !!VAR_6->device_pause;
 VAR_5->cmd_resume = !!VAR_6->device_resume;
 VAR_5->cmd_terminate = !!VAR_6->device_terminate_all;

 return 0;
}
