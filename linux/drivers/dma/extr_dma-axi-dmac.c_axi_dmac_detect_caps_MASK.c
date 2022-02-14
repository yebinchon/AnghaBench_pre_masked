
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axi_dmac_chan {int hw_cyclic; int hw_2d; int max_length; scalar_t__ dest_type; scalar_t__ src_type; int hw_partial_xfer; int length_align_mask; int address_align_mask; } ;
struct TYPE_2__ {int dev; } ;
struct axi_dmac {TYPE_1__ dma_dev; struct axi_dmac_chan chan; } ;


 unsigned int FUNC_0 (int,int,char) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct axi_dmac*,int ) ;
 int FUNC_2 (struct axi_dmac*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct axi_dmac *VAR_10)
{
 struct axi_dmac_chan *VAR_11 = &VAR_10->chan;
 unsigned int VAR_12;

 VAR_12 = FUNC_1(VAR_10, VAR_0);

 FUNC_2(VAR_10, VAR_4, VAR_2);
 if (FUNC_1(VAR_10, VAR_4) == VAR_2)
  VAR_11->hw_cyclic = 1;

 FUNC_2(VAR_10, VAR_7, 1);
 if (FUNC_1(VAR_10, VAR_7) == 1)
  VAR_11->hw_2d = 1;

 FUNC_2(VAR_10, VAR_6, 0xffffffff);
 VAR_11->max_length = FUNC_1(VAR_10, VAR_6);
 if (VAR_11->max_length != VAR_9)
  VAR_11->max_length++;

 FUNC_2(VAR_10, VAR_3, 0xffffffff);
 if (FUNC_1(VAR_10, VAR_3) == 0 &&
     VAR_11->dest_type == VAR_1) {
  FUNC_3(VAR_10->dma_dev.dev,
   "Destination memory-mapped interface not supported.");
  return -VAR_8;
 }

 FUNC_2(VAR_10, VAR_5, 0xffffffff);
 if (FUNC_1(VAR_10, VAR_5) == 0 &&
     VAR_11->src_type == VAR_1) {
  FUNC_3(VAR_10->dma_dev.dev,
   "Source memory-mapped interface not supported.");
  return -VAR_8;
 }

 if (VAR_12 >= FUNC_0(4, 2, 'a'))
  VAR_11->hw_partial_xfer = 1;

 if (VAR_12 >= FUNC_0(4, 1, 'a')) {
  FUNC_2(VAR_10, VAR_6, 0x00);
  VAR_11->length_align_mask =
   FUNC_1(VAR_10, VAR_6);
 } else {
  VAR_11->length_align_mask = VAR_11->address_align_mask;
 }

 return 0;
}
