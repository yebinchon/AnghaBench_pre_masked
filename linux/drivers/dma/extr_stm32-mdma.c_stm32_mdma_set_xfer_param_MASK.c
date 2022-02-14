
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_mdma_device {int dummy; } ;
struct stm32_mdma_chan_config {int transfer_config; int request; int priority_level; } ;
struct TYPE_2__ {int src_addr_width; int dst_addr_width; int src_maxburst; int dst_maxburst; int src_addr; int dst_addr; } ;
struct stm32_mdma_chan {int mem_burst; int mem_width; int id; TYPE_1__ dma_config; struct stm32_mdma_chan_config chan_config; } ;
typedef int phys_addr_t ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef int dma_addr_t ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int FUNC_8 (int) ;
 int VAR_11 ;
 int FUNC_9 (int) ;
 int VAR_12 ;
 int FUNC_10 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ) ;
 int VAR_15 ;
 int FUNC_12 (int) ;
 int VAR_16 ;
 int FUNC_13 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (struct stm32_mdma_chan*) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int,int,int) ;
 struct stm32_mdma_device* FUNC_20 (struct stm32_mdma_chan*) ;
 int FUNC_21 (int ,int,int) ;
 int FUNC_22 (struct stm32_mdma_chan*,int) ;
 int FUNC_23 (struct stm32_mdma_device*,int ) ;
 int FUNC_24 (struct stm32_mdma_device*,int*,int ,int ) ;
 int FUNC_25 (struct stm32_mdma_device*,int ,int ) ;

__attribute__((used)) static int FUNC_26(struct stm32_mdma_chan *VAR_21,
         enum dma_transfer_direction VAR_22,
         u32 *VAR_23, u32 *VAR_24,
         u32 *VAR_25, dma_addr_t VAR_26,
         u32 VAR_27)
{
 struct stm32_mdma_device *VAR_28 = FUNC_20(VAR_21);
 struct stm32_mdma_chan_config *VAR_29 = &VAR_21->chan_config;
 enum dma_slave_buswidth VAR_30, VAR_31;
 phys_addr_t VAR_32, VAR_33;
 int VAR_34, VAR_35;
 u32 VAR_36, VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41, VAR_42, VAR_43;

 VAR_30 = VAR_21->dma_config.src_addr_width;
 VAR_31 = VAR_21->dma_config.dst_addr_width;
 VAR_36 = VAR_21->dma_config.src_maxburst;
 VAR_37 = VAR_21->dma_config.dst_maxburst;

 VAR_40 = FUNC_23(VAR_28, FUNC_0(VAR_21->id));
 VAR_41 = FUNC_23(VAR_28, FUNC_6(VAR_21->id));
 VAR_42 = FUNC_23(VAR_28, FUNC_4(VAR_21->id));


 VAR_41 &= ~VAR_18;


 VAR_41 &= ~VAR_9;
 VAR_41 |= VAR_29->transfer_config & VAR_9;





 VAR_43 = FUNC_10(VAR_41);
 VAR_41 &= ~VAR_13;
 VAR_41 |= FUNC_14((VAR_43 - 1));


 VAR_41 &= ~VAR_14;


 if (VAR_36 * VAR_30 > VAR_20 ||
     VAR_37 * VAR_31 > VAR_20) {
  FUNC_16(FUNC_15(VAR_21),
   "burst size * bus width higher than %d bytes\n",
   VAR_20);
  return -VAR_0;
 }

 if ((!FUNC_18(VAR_36) && VAR_36 > 0) ||
     (!FUNC_18(VAR_37) && VAR_37 > 0)) {
  FUNC_16(FUNC_15(VAR_21), "burst size must be a power of 2\n");
  return -VAR_0;
 }







 VAR_40 &= ~(VAR_4 | VAR_5 | VAR_2 |
   VAR_1 | VAR_3);
 VAR_40 |= FUNC_1(VAR_29->priority_level);


 VAR_42 &= ~VAR_8;
 VAR_42 |= FUNC_5(VAR_29->request);

 switch (VAR_22) {
 case 128:
  VAR_33 = VAR_21->dma_config.dst_addr;


  VAR_35 = FUNC_22(VAR_21, VAR_31);
  if (VAR_35 < 0)
   return VAR_35;
  VAR_41 &= ~VAR_12;
  VAR_41 |= FUNC_9(VAR_35);


  VAR_39 = FUNC_19(VAR_27, VAR_43,
          VAR_37,
          VAR_31);
  VAR_21->mem_burst = VAR_39;
  VAR_41 &= ~VAR_10;
  VAR_41 |= FUNC_7((FUNC_17(VAR_39)));


  VAR_30 = FUNC_21(VAR_26, VAR_27, VAR_43);
  VAR_21->mem_width = VAR_30;
  VAR_34 = FUNC_22(VAR_21, VAR_30);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_41 &= ~VAR_17 |
   VAR_16;
  VAR_41 |= FUNC_13(VAR_34) |
   FUNC_12(VAR_34);


  VAR_36 = VAR_19 / VAR_30;
  VAR_38 = FUNC_19(VAR_27, VAR_43,
          VAR_36,
          VAR_30);
  VAR_21->mem_burst = VAR_38;
  VAR_41 &= ~VAR_15;
  VAR_41 |= FUNC_11((FUNC_17(VAR_38)));


  FUNC_24(VAR_28, &VAR_42, VAR_6,
       VAR_33);

  if (VAR_35 != VAR_34)
   VAR_41 |= VAR_14;


  FUNC_25(VAR_28, FUNC_2(VAR_21->id), VAR_33);
  break;

 case 129:
  VAR_32 = VAR_21->dma_config.src_addr;


  VAR_34 = FUNC_22(VAR_21, VAR_30);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_41 &= ~VAR_17;
  VAR_41 |= FUNC_13(VAR_34);


  VAR_38 = FUNC_19(VAR_27, VAR_43,
          VAR_36,
          VAR_30);
  VAR_41 &= ~VAR_15;
  VAR_41 |= FUNC_11((FUNC_17(VAR_38)));


  VAR_31 = FUNC_21(VAR_26, VAR_27, VAR_43);
  VAR_21->mem_width = VAR_31;
  VAR_35 = FUNC_22(VAR_21, VAR_31);
  if (VAR_35 < 0)
   return VAR_35;
  VAR_41 &= ~(VAR_12 |
   VAR_11);
  VAR_41 |= FUNC_9(VAR_35) |
   FUNC_8(VAR_35);


  VAR_37 = VAR_19 / VAR_31;
  VAR_39 = FUNC_19(VAR_27, VAR_43,
          VAR_37,
          VAR_31);
  VAR_41 &= ~VAR_10;
  VAR_41 |= FUNC_7((FUNC_17(VAR_39)));


  FUNC_24(VAR_28, &VAR_42, VAR_7,
       VAR_32);

  if (VAR_35 != VAR_34)
   VAR_41 |= VAR_14;


  FUNC_25(VAR_28, FUNC_3(VAR_21->id), VAR_32);
  break;

 default:
  FUNC_16(FUNC_15(VAR_21), "Dma direction is not supported\n");
  return -VAR_0;
 }

 *VAR_23 = VAR_40;
 *VAR_24 = VAR_41;
 *VAR_25 = VAR_42;

 return 0;
}
