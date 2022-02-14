
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ep93xx_dma_data {int port; int direction; } ;
struct TYPE_2__ {struct ep93xx_dma_data* private; } ;
struct ep93xx_dma_chan {scalar_t__ regs; TYPE_1__ chan; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ep93xx_dma_chan *VAR_13)
{
 const struct ep93xx_dma_data *VAR_14 = VAR_13->chan.private;
 u32 VAR_15 = 0;

 if (!VAR_14) {

  FUNC_0(VAR_15, VAR_13->regs + VAR_2);
  return 0;
 }

 switch (VAR_14->port) {
 case 128:





  VAR_15 = (5 << VAR_5);
  VAR_15 |= VAR_4;

  if (VAR_14->direction == VAR_0) {
   VAR_15 |= VAR_3;
   VAR_15 |= VAR_12;
   VAR_15 |= VAR_9;
  } else {
   VAR_15 |= VAR_10;
   VAR_15 |= VAR_11;
   VAR_15 |= VAR_8;
  }
  break;

 case 129:




  if (VAR_14->direction == VAR_0) {

   VAR_15 = (3 << VAR_5);
   VAR_15 |= VAR_3;
   VAR_15 |= VAR_12;
  } else {
   VAR_15 = (2 << VAR_5);
   VAR_15 |= VAR_10;
   VAR_15 |= VAR_11;
  }

  VAR_15 |= VAR_4;
  VAR_15 |= VAR_7;
  VAR_15 |= VAR_6;
  break;

 default:
  return -VAR_1;
 }

 FUNC_0(VAR_15, VAR_13->regs + VAR_2);
 return 0;
}
