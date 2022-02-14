
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct npcm7xx_pwm_fan_data {int pwm_clk_freq; int pwm_base; int pwm_clk; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static u32 FUNC_7(struct npcm7xx_pwm_fan_data *VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12, VAR_13;

 VAR_9->pwm_clk_freq = FUNC_5(VAR_9->pwm_clk);


 VAR_13 = VAR_9->pwm_clk_freq / VAR_8;
 VAR_12 = FUNC_0(VAR_13, VAR_7);


 if (VAR_12 < VAR_0)
  VAR_12 = VAR_0;




 VAR_12--;


 VAR_12 |= (VAR_12 << VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_4 ; VAR_10++) {
  FUNC_6(VAR_12, FUNC_4(VAR_9->pwm_base, VAR_10));
  FUNC_6(VAR_5,
     FUNC_3(VAR_9->pwm_base, VAR_10));
  FUNC_6(VAR_2,
     FUNC_2(VAR_9->pwm_base, VAR_10));

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   FUNC_6(VAR_1,
      FUNC_1(VAR_9->pwm_base, VAR_10, VAR_11));
  }
 }

 return VAR_13 / ((VAR_12 & 0xf) + 1);
}
