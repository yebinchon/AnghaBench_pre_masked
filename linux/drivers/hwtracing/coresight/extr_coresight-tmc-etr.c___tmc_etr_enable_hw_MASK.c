
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmc_drvdata {int trigger_cntr; scalar_t__ base; struct etr_buf* etr_buf; } ;
struct etr_buf {int size; scalar_t__ mode; int hwaddr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tmc_drvdata*) ;
 scalar_t__ FUNC_4 (struct tmc_drvdata*,int ) ;
 int FUNC_5 (struct tmc_drvdata*) ;
 int FUNC_6 (struct tmc_drvdata*,int ) ;
 int FUNC_7 (struct tmc_drvdata*,int ) ;
 int FUNC_8 (struct tmc_drvdata*,int ) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct tmc_drvdata *VAR_23)
{
 u32 VAR_24, VAR_25;
 struct etr_buf *VAR_26 = VAR_23->etr_buf;

 FUNC_1(VAR_23->base);


 FUNC_5(VAR_23);

 FUNC_9(VAR_26->size / 4, VAR_23->base + VAR_19);
 FUNC_9(VAR_18, VAR_23->base + VAR_17);

 VAR_24 = FUNC_2(VAR_23->base + VAR_1);
 VAR_24 &= ~VAR_5;
 VAR_24 |= (VAR_6 | VAR_8);
 VAR_24 |= VAR_4;

 if (FUNC_4(VAR_23, VAR_9)) {
  VAR_24 &= ~VAR_2;
  VAR_24 |= VAR_3;
 }

 if (VAR_26->mode == VAR_0)
  VAR_24 |= VAR_7;

 FUNC_9(VAR_24, VAR_23->base + VAR_1);
 FUNC_6(VAR_23, VAR_26->hwaddr);





 if (FUNC_4(VAR_23, VAR_10)) {
  FUNC_7(VAR_23, VAR_26->hwaddr);
  FUNC_8(VAR_23, VAR_26->hwaddr);
  VAR_25 = FUNC_2(VAR_23->base + VAR_20) & ~VAR_21;
  FUNC_9(VAR_25, VAR_23->base + VAR_20);
 }

 FUNC_9(VAR_12 | VAR_13 |
         VAR_14 | VAR_15 |
         VAR_16,
         VAR_23->base + VAR_11);
 FUNC_9(VAR_23->trigger_cntr, VAR_23->base + VAR_22);
 FUNC_3(VAR_23);

 FUNC_0(VAR_23->base);
}
