
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {scalar_t__ dir; scalar_t__ type; int burst_sz; int buswidth; scalar_t__ reg_base; int dev; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dma_chan*) ;
 struct mmp_tdma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_27)
{
 struct mmp_tdma_chan *VAR_28 = FUNC_2(VAR_27);
 unsigned int VAR_29 = 0;

 FUNC_1(VAR_27);

 if (VAR_28->dir == VAR_1)
  VAR_29 = VAR_18 | VAR_22;
 else if (VAR_28->dir == VAR_0)
  VAR_29 = VAR_21 | VAR_19;

 if (VAR_28->type == VAR_3) {
  VAR_29 |= VAR_20;

  switch (VAR_28->burst_sz) {
  case 4:
   VAR_29 |= VAR_9;
   break;
  case 8:
   VAR_29 |= VAR_11;
   break;
  case 16:
   VAR_29 |= VAR_7;
   break;
  case 32:
   VAR_29 |= VAR_8;
   break;
  case 64:
   VAR_29 |= VAR_10;
   break;
  case 128:
   VAR_29 |= VAR_6;
   break;
  default:
   FUNC_0(VAR_28->dev, "mmp_tdma: unknown burst size.\n");
   return -VAR_2;
  }

  switch (VAR_28->buswidth) {
  case 130:
   VAR_29 |= VAR_26;
   break;
  case 129:
   VAR_29 |= VAR_24;
   break;
  case 128:
   VAR_29 |= VAR_25;
   break;
  default:
   FUNC_0(VAR_28->dev, "mmp_tdma: unknown bus size.\n");
   return -VAR_2;
  }
 } else if (VAR_28->type == VAR_4) {
  VAR_29 |= VAR_23;

  switch (VAR_28->burst_sz) {
  case 1:
   VAR_29 |= VAR_13;
   break;
  case 2:
   VAR_29 |= VAR_14;
   break;
  case 4:
   VAR_29 |= VAR_16;
   break;
  case 8:
   VAR_29 |= VAR_17;
   break;
  case 16:
   VAR_29 |= VAR_12;
   break;
  case 32:
   VAR_29 |= VAR_15;
   break;
  default:
   FUNC_0(VAR_28->dev, "mmp_tdma: unknown burst size.\n");
   return -VAR_2;
  }
 }

 FUNC_3(VAR_29, VAR_28->reg_base + VAR_5);
 return 0;
}
