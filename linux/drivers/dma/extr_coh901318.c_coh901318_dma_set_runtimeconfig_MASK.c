
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dma_slave_config {int src_addr_width; int src_maxburst; int dst_addr_width; int dst_maxburst; int dst_addr; int src_addr; } ;
struct dma_chan {int dummy; } ;
struct coh901318_chan {int ctrl; int addr; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef int dma_addr_t ;
struct TYPE_3__ {int burst_8bit; int burst_16bit; int burst_32bit; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct coh901318_chan*) ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*) ;
 struct coh901318_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_10,
        struct dma_slave_config *VAR_11,
        enum dma_transfer_direction VAR_12)
{
 struct coh901318_chan *VAR_13 = FUNC_4(VAR_10);
 dma_addr_t VAR_14;
 enum dma_slave_buswidth VAR_15;
 u32 VAR_16;
 u32 VAR_17 = 0;
 int VAR_18 = 0;


 if (VAR_12 == VAR_6) {
  VAR_14 = VAR_11->src_addr;
  VAR_15 = VAR_11->src_addr_width;
  VAR_16 = VAR_11->src_maxburst;
 } else if (VAR_12 == VAR_7) {
  VAR_14 = VAR_11->dst_addr;
  VAR_15 = VAR_11->dst_addr_width;
  VAR_16 = VAR_11->dst_maxburst;
 } else {
  FUNC_3(FUNC_1(VAR_13), "illegal channel mode\n");
  return -VAR_8;
 }

 FUNC_2(FUNC_1(VAR_13), "configure channel for %d byte transfers\n",
  VAR_15);
 switch (VAR_15) {
 case 130:
  VAR_17 |=
   VAR_5 |
   VAR_2;

  while (VAR_18 < FUNC_0(VAR_9)) {
   if (VAR_9[VAR_18].burst_8bit <= VAR_16)
    break;
   VAR_18++;
  }

  break;
 case 129:
  VAR_17 |=
   VAR_3 |
   VAR_0;

  while (VAR_18 < FUNC_0(VAR_9)) {
   if (VAR_9[VAR_18].burst_16bit <= VAR_16)
    break;
   VAR_18++;
  }

  break;
 case 128:

  VAR_17 |=
   VAR_4 |
   VAR_1;

  while (VAR_18 < FUNC_0(VAR_9)) {
   if (VAR_9[VAR_18].burst_32bit <= VAR_16)
    break;
   VAR_18++;
  }

  break;
 default:
  FUNC_3(FUNC_1(VAR_13),
   "bad runtimeconfig: alien address width\n");
  return -VAR_8;
 }

 VAR_17 |= VAR_9[VAR_18].reg;
 FUNC_2(FUNC_1(VAR_13),
  "selected burst size %d bytes for address width %d bytes, maxburst %d\n",
  VAR_9[VAR_18].burst_8bit, VAR_15, VAR_16);

 VAR_13->addr = VAR_14;
 VAR_13->ctrl = VAR_17;

 return 0;
}
