
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_slave_config {int src_addr_width; scalar_t__ direction; } ;
struct moxart_chan {int line_reqno; scalar_t__ base; struct dma_slave_config cfg; } ;
struct dma_chan {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;



 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 struct moxart_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_19,
          struct dma_slave_config *VAR_20)
{
 struct moxart_chan *VAR_21 = FUNC_1(VAR_19);
 u32 VAR_22;

 VAR_21->cfg = *VAR_20;

 VAR_22 = FUNC_0(VAR_21->base + VAR_18);
 VAR_22 |= VAR_0;
 VAR_22 &= ~(VAR_7 | VAR_13);
 VAR_22 &= ~(VAR_8 | VAR_14);

 switch (VAR_21->cfg.src_addr_width) {
 case 130:
  VAR_22 |= VAR_2;
  if (VAR_21->cfg.direction != VAR_16)
   VAR_22 |= VAR_4;
  else
   VAR_22 |= VAR_10;
  break;
 case 129:
  VAR_22 |= VAR_3;
  if (VAR_21->cfg.direction != VAR_16)
   VAR_22 |= VAR_5;
  else
   VAR_22 |= VAR_11;
  break;
 case 128:
  VAR_22 &= ~VAR_1;
  if (VAR_21->cfg.direction != VAR_16)
   VAR_22 |= VAR_6;
  else
   VAR_22 |= VAR_12;
  break;
 default:
  return -VAR_17;
 }

 if (VAR_21->cfg.direction == VAR_16) {
  VAR_22 &= ~VAR_9;
  VAR_22 |= VAR_15;
  VAR_22 |= (VAR_21->line_reqno << 16 &
    VAR_8);
 } else {
  VAR_22 |= VAR_9;
  VAR_22 &= ~VAR_15;
  VAR_22 |= (VAR_21->line_reqno << 24 &
    VAR_14);
 }

 FUNC_2(VAR_22, VAR_21->base + VAR_18);

 return 0;
}
