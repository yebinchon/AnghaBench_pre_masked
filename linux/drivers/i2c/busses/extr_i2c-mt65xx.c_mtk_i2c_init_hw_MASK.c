
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mtk_i2c {int timing_reg; int high_speed_reg; int ltiming_reg; scalar_t__ pdmabase; TYPE_1__* dev_comp; scalar_t__ have_pmic; scalar_t__ use_push_pull; } ;
struct TYPE_2__ {scalar_t__ dma_sync; scalar_t__ ltiming_adjust; scalar_t__ timing_adjust; scalar_t__ dcm; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct mtk_i2c*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_i2c *VAR_25)
{
 u16 VAR_26;

 FUNC_0(VAR_25, VAR_13, VAR_23);


 if (VAR_25->use_push_pull)
  FUNC_0(VAR_25, VAR_12, VAR_19);
 else
  FUNC_0(VAR_25, VAR_11, VAR_19);

 if (VAR_25->dev_comp->dcm)
  FUNC_0(VAR_25, VAR_6, VAR_16);

 if (VAR_25->dev_comp->timing_adjust)
  FUNC_0(VAR_25, VAR_7 - 1, VAR_14);

 FUNC_0(VAR_25, VAR_25->timing_reg, VAR_24);
 FUNC_0(VAR_25, VAR_25->high_speed_reg, VAR_18);
 if (VAR_25->dev_comp->ltiming_adjust)
  FUNC_0(VAR_25, VAR_25->ltiming_reg, VAR_20);


 if (VAR_25->have_pmic)
  FUNC_0(VAR_25, VAR_5, VAR_21);

 VAR_26 = VAR_0 |
        VAR_2 | VAR_4;
 if (VAR_25->dev_comp->dma_sync)
  VAR_26 |= VAR_3 | VAR_1;

 FUNC_0(VAR_25, VAR_26, VAR_15);
 FUNC_0(VAR_25, VAR_8, VAR_17);

 FUNC_2(VAR_10, VAR_25->pdmabase + VAR_22);
 FUNC_1(50);
 FUNC_2(VAR_9, VAR_25->pdmabase + VAR_22);
}
