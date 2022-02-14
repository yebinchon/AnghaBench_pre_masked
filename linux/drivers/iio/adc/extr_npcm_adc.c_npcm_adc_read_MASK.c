
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct npcm_adc {int int_status; scalar_t__ regs; int dev; scalar_t__ rst_regmap; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct npcm_adc *VAR_8, int *VAR_9, u8 VAR_10)
{
 int VAR_11;
 u32 VAR_12;


 VAR_12 = FUNC_3(VAR_8->regs + VAR_3);
 VAR_12 &= ~VAR_5;
 VAR_8->int_status = 0;
 FUNC_4(VAR_12 | FUNC_0(VAR_10) |
    VAR_4, VAR_8->regs + VAR_3);

 VAR_11 = FUNC_8(VAR_8->wq, VAR_8->int_status,
            FUNC_5(10));
 if (VAR_11 == 0) {
  VAR_12 = FUNC_3(VAR_8->regs + VAR_3);
  if ((VAR_12 & VAR_4) && VAR_8->rst_regmap) {

   FUNC_7(VAR_8->rst_regmap, VAR_2,
         VAR_1);
   FUNC_6(100);
   FUNC_7(VAR_8->rst_regmap, VAR_2,
         0x0);
   FUNC_6(100);


   FUNC_4(VAR_7 | VAR_4,
      VAR_8->regs + VAR_3);
   FUNC_2(VAR_8->dev, "RESET ADC Complete\n");
  }
  return -VAR_0;
 }
 if (VAR_11 < 0)
  return VAR_11;

 *VAR_9 = FUNC_1(FUNC_3(VAR_8->regs + VAR_6));

 return 0;
}
