
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx2967_i2c {scalar_t__ msg_rd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct zx2967_i2c*,int ) ;
 int FUNC_1 (struct zx2967_i2c*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct zx2967_i2c *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 VAR_7 |= VAR_1;
 FUNC_1(VAR_6, VAR_7, VAR_5);

 VAR_8 = FUNC_0(VAR_6, VAR_4);
 if (VAR_6->msg_rd)
  VAR_8 |= VAR_2;
 else
  VAR_8 &= ~VAR_2;
 VAR_8 &= ~VAR_0;
 VAR_8 |= VAR_3;
 FUNC_1(VAR_6, VAR_8, VAR_4);
}
