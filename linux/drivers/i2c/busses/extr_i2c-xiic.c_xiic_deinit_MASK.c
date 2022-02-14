
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xiic_i2c {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xiic_i2c*,int ) ;
 int FUNC_1 (struct xiic_i2c*,int ,int ) ;
 int FUNC_2 (struct xiic_i2c*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xiic_i2c *VAR_4)
{
 u8 VAR_5;

 FUNC_1(VAR_4, VAR_2, VAR_3);


 VAR_5 = FUNC_0(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_1, VAR_5 & ~VAR_0);
}
