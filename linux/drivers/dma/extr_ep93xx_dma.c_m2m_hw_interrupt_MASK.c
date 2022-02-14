
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ cookie; } ;
struct ep93xx_dma_desc {TYPE_1__ txd; } ;
struct TYPE_4__ {int private; } ;
struct ep93xx_dma_chan {scalar_t__ regs; TYPE_2__ chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (struct ep93xx_dma_chan*) ;
 struct ep93xx_dma_desc* FUNC_1 (struct ep93xx_dma_chan*) ;
 int FUNC_2 (struct ep93xx_dma_chan*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ep93xx_dma_chan *VAR_17)
{
 u32 VAR_18 = FUNC_3(VAR_17->regs + VAR_10);
 u32 VAR_19 = VAR_18 & VAR_14;
 u32 VAR_20 = VAR_18 & VAR_11;
 bool VAR_21 = VAR_18 & VAR_16;
 bool VAR_22;
 u32 VAR_23;
 struct ep93xx_dma_desc *VAR_24;


 if (!(FUNC_3(VAR_17->regs + VAR_8) & VAR_9))
  return VAR_2;

 if (VAR_21) {

  FUNC_4(0, VAR_17->regs + VAR_8);
 }





 VAR_24 = FUNC_1(VAR_17);
 VAR_22 = !VAR_24 || VAR_24->txd.cookie;






 if (!VAR_22 &&
     (VAR_20 == VAR_12 ||
      VAR_20 == VAR_13)) {






  if (FUNC_0(VAR_17)) {
   FUNC_2(VAR_17);
   if (VAR_21 && !VAR_17->chan.private) {

    VAR_23 = FUNC_3(VAR_17->regs + VAR_3);
    VAR_23 |= VAR_7;
    FUNC_4(VAR_23, VAR_17->regs + VAR_3);
   }
   return VAR_1;
  } else {
   VAR_22 = 1;
  }
 }





 if (VAR_22 &&
     VAR_20 == VAR_12 &&
     VAR_19 == VAR_15) {

  VAR_23 = FUNC_3(VAR_17->regs + VAR_3);
  VAR_23 &= ~(VAR_4 | VAR_6
       | VAR_5);
  FUNC_4(VAR_23, VAR_17->regs + VAR_3);
  return VAR_0;
 }




 return VAR_1;
}
