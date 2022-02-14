
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
 int FUNC_0 (struct zx2967_i2c*,int ) ;
 int FUNC_1 (struct zx2967_i2c*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct zx2967_i2c *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 if (VAR_4->msg_rd) {
  VAR_5 = VAR_2;
  VAR_6 = VAR_0;
 } else {
  VAR_5 = VAR_3;
  VAR_6 = VAR_1;
 }

 VAR_6 |= FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_6, VAR_5);
}
