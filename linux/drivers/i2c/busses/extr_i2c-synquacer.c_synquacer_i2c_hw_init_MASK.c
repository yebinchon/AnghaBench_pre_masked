
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct synquacer_i2c {int speed_khz; scalar_t__ base; int pclkrate; } ;


 unsigned char FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 unsigned char FUNC_3 (int ) ;
 unsigned char FUNC_4 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_5 (int ) ;
 unsigned char FUNC_6 (int ) ;
 unsigned char FUNC_7 (int ) ;
 unsigned char FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;


 int FUNC_9 (int) ;
 int FUNC_10 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct synquacer_i2c *VAR_9)
{
 unsigned char VAR_10, VAR_11;
 u32 VAR_12 = VAR_9->pclkrate;


 FUNC_10(0, VAR_9->base + VAR_3);


 FUNC_10(FUNC_0(VAR_9->pclkrate),
        VAR_9->base + VAR_8);

 switch (VAR_9->speed_khz) {
 case 129:
  if (VAR_9->pclkrate <= VAR_2) {
   VAR_10 = FUNC_1(VAR_12);
   VAR_11 = FUNC_5(VAR_12);
  } else {
   VAR_10 = FUNC_2(VAR_12);
   VAR_11 = FUNC_6(VAR_12);
  }


  FUNC_10(VAR_10 | VAR_1 |
         VAR_0,
         VAR_9->base + VAR_6);
  FUNC_10(VAR_11, VAR_9->base + VAR_7);
  break;
 case 128:
  if (VAR_9->pclkrate <= VAR_2) {
   VAR_10 = FUNC_3(VAR_12);
   VAR_11 = FUNC_7(VAR_12);
  } else {
   VAR_10 = FUNC_4(VAR_12);
   VAR_11 = FUNC_8(VAR_12);
  }


  FUNC_10(VAR_10 | VAR_0,
        VAR_9->base + VAR_6);
  FUNC_10(VAR_11, VAR_9->base + VAR_7);
  break;
 default:
  FUNC_9(1);
 }


 FUNC_10(0, VAR_9->base + VAR_5);
 FUNC_10(0, VAR_9->base + VAR_4);
}
