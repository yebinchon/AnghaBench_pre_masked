
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_dma_vchan {int drq; } ;
struct owl_dma_lli_hw {int fcnt; int flen; void* ctrlb; int ctrla; scalar_t__ dst_stride; scalar_t__ src_stride; void* daddr; void* saddr; scalar_t__ next_lli; } ;
struct owl_dma_lli {struct owl_dma_lli_hw hw; } ;
struct dma_slave_config {int src_addr_width; int dst_addr_width; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct owl_dma_vchan *VAR_15,
      struct owl_dma_lli *VAR_16,
      dma_addr_t VAR_17, dma_addr_t VAR_18,
      u32 VAR_19, enum dma_transfer_direction VAR_20,
      struct dma_slave_config *VAR_21,
      bool VAR_22)
{
 struct owl_dma_lli_hw *VAR_23 = &VAR_16->hw;
 u32 VAR_24;

 VAR_24 = FUNC_0(0);

 switch (VAR_20) {
 case 128:
  VAR_24 |= FUNC_1(0) | VAR_13 |
   VAR_8 | VAR_12 |
   VAR_7;

  break;
 case 129:
  VAR_24 |= FUNC_1(VAR_15->drq)
   | VAR_13 | VAR_9
   | VAR_12 | VAR_6;





  if (VAR_21->dst_addr_width == VAR_0)
   VAR_24 |= VAR_10;

  break;
 case 130:
   VAR_24 |= FUNC_1(VAR_15->drq)
   | VAR_14 | VAR_8
   | VAR_11 | VAR_7;





  if (VAR_21->src_addr_width == VAR_0)
   VAR_24 |= VAR_10;

  break;
 default:
  return -VAR_1;
 }

 VAR_23->next_lli = 0;
 VAR_23->saddr = VAR_17;
 VAR_23->daddr = VAR_18;

 VAR_23->fcnt = 1;
 VAR_23->flen = VAR_19;
 VAR_23->src_stride = 0;
 VAR_23->dst_stride = 0;
 VAR_23->ctrla = FUNC_2(VAR_24,
     VAR_5 |
     VAR_4);

 if (VAR_22)
  VAR_23->ctrlb = FUNC_3(VAR_2);
 else
  VAR_23->ctrlb = FUNC_3(VAR_3);

 return 0;
}
