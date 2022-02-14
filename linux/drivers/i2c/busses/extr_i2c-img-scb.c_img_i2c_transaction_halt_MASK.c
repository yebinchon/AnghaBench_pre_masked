
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_i2c {int t_halt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct img_i2c*,int ) ;
 int FUNC_1 (struct img_i2c*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct img_i2c *VAR_2, bool VAR_3)
{
 u32 VAR_4;

 if (VAR_2->t_halt == VAR_3)
  return;
 VAR_2->t_halt = VAR_3;
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;
 FUNC_1(VAR_2, VAR_0, VAR_4);
}
