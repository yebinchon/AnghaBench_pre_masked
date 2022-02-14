
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_i2c {scalar_t__ regs; } ;
struct i2c_msg {int flags; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct meson_i2c*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct meson_i2c *VAR_5, struct i2c_msg *VAR_6)
{
 int VAR_7;

 VAR_7 = (VAR_6->flags & VAR_0) ? VAR_2 :
  VAR_3;

 FUNC_1(VAR_6->addr << 1, VAR_5->regs + VAR_1);
 FUNC_0(VAR_5, VAR_4);
 FUNC_0(VAR_5, VAR_7);
}
