
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lm8323_pwm {int id; int chip; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct lm8323_pwm *VAR_1, int VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_1->chip, 4, VAR_0, (VAR_2 << 2) | VAR_1->id,
       (VAR_3 & 0xff00) >> 8, VAR_3 & 0x00ff);
}
