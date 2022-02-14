
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6ul_tsc {int input; int xnur_gpio; scalar_t__ tsc_regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct imx6ul_tsc*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 struct imx6ul_tsc *VAR_12 = VAR_11;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15, VAR_16;
 u32 VAR_17;

 VAR_13 = FUNC_4(VAR_12->tsc_regs + VAR_7);


 FUNC_6(VAR_5 | VAR_3,
  VAR_12->tsc_regs + VAR_7);


 VAR_17 = FUNC_4(VAR_12->tsc_regs + VAR_6);
 VAR_17 |= VAR_9;
 FUNC_6(VAR_17, VAR_12->tsc_regs + VAR_6);

 if (VAR_13 & VAR_5) {
  VAR_14 = FUNC_4(VAR_12->tsc_regs + VAR_8);
  VAR_15 = (VAR_14 >> 16) & 0x0fff;
  VAR_16 = VAR_14 & 0x0fff;





  if (!FUNC_5(VAR_12) ||
      FUNC_0(VAR_12->xnur_gpio)) {
   FUNC_2(VAR_12->input, VAR_2, 1);
   FUNC_1(VAR_12->input, VAR_0, VAR_15);
   FUNC_1(VAR_12->input, VAR_1, VAR_16);
  } else {
   FUNC_2(VAR_12->input, VAR_2, 0);
  }

  FUNC_3(VAR_12->input);
 }

 return VAR_4;
}
