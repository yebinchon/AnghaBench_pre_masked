
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdma_engine {int channel_0_lock; int context_phys; int dev; struct sdma_buffer_descriptor* bd0; struct sdma_context_data* context; } ;
struct TYPE_3__ {int pc; } ;
struct sdma_context_data {int* gReg; TYPE_1__ channel_state; } ;
struct sdma_channel {int channel; int context_loaded; scalar_t__ direction; int pc_from_device; int device_to_device; int pc_to_pc; int pc_to_device; int watermark_level; int shp_addr; int per_addr; int* event_mask; struct sdma_engine* sdma; } ;
struct TYPE_4__ {int status; int count; int command; } ;
struct sdma_buffer_descriptor {int ext_buffer_addr; int buffer_addr; TYPE_2__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sdma_context_data*,int ,int) ;
 int FUNC_2 (struct sdma_engine*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct sdma_channel *VAR_7)
{
 struct sdma_engine *VAR_8 = VAR_7->sdma;
 int VAR_9 = VAR_7->channel;
 int VAR_10;
 struct sdma_context_data *VAR_11 = VAR_8->context;
 struct sdma_buffer_descriptor *VAR_12 = VAR_8->bd0;
 int VAR_13;
 unsigned long VAR_14;

 if (VAR_7->context_loaded)
  return 0;

 if (VAR_7->direction == VAR_5)
  VAR_10 = VAR_7->pc_from_device;
 else if (VAR_7->direction == VAR_4)
  VAR_10 = VAR_7->device_to_device;
 else if (VAR_7->direction == VAR_6)
  VAR_10 = VAR_7->pc_to_pc;
 else
  VAR_10 = VAR_7->pc_to_device;

 if (VAR_10 < 0)
  return VAR_10;

 FUNC_0(VAR_8->dev, "load_address = %d\n", VAR_10);
 FUNC_0(VAR_8->dev, "wml = 0x%08x\n", (u32)VAR_7->watermark_level);
 FUNC_0(VAR_8->dev, "shp_addr = 0x%08x\n", VAR_7->shp_addr);
 FUNC_0(VAR_8->dev, "per_addr = 0x%08x\n", VAR_7->per_addr);
 FUNC_0(VAR_8->dev, "event_mask0 = 0x%08x\n", (u32)VAR_7->event_mask[0]);
 FUNC_0(VAR_8->dev, "event_mask1 = 0x%08x\n", (u32)VAR_7->event_mask[1]);

 FUNC_3(&VAR_8->channel_0_lock, VAR_14);

 FUNC_1(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->channel_state.pc = VAR_10;




 VAR_11->gReg[0] = VAR_7->event_mask[1];
 VAR_11->gReg[1] = VAR_7->event_mask[0];
 VAR_11->gReg[2] = VAR_7->per_addr;
 VAR_11->gReg[6] = VAR_7->shp_addr;
 VAR_11->gReg[7] = VAR_7->watermark_level;

 VAR_12->mode.command = VAR_3;
 VAR_12->mode.status = VAR_0 | VAR_2 | VAR_1;
 VAR_12->mode.count = sizeof(*VAR_11) / 4;
 VAR_12->buffer_addr = VAR_8->context_phys;
 VAR_12->ext_buffer_addr = 2048 + (sizeof(*VAR_11) / 4) * VAR_9;
 VAR_13 = FUNC_2(VAR_8);

 FUNC_4(&VAR_8->channel_0_lock, VAR_14);

 VAR_7->context_loaded = 1;

 return VAR_13;
}
