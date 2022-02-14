
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc18xx_adc {int cr_reg; int dev; scalar_t__ base; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct lpc18xx_adc *VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 VAR_9 = VAR_6->cr_reg | FUNC_0(VAR_7) | VAR_2;
 FUNC_3(VAR_9, VAR_6->base + VAR_1);

 VAR_8 = FUNC_2(VAR_6->base + VAR_3, VAR_9,
     VAR_9 & VAR_0, 3, 9);
 if (VAR_8) {
  FUNC_1(VAR_6->dev, "adc read timed out\n");
  return VAR_8;
 }

 return (VAR_9 >> VAR_5) & VAR_4;
}
