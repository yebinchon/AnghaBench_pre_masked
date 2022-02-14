
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vga {scalar_t__ mmio; } ;
struct i2c_msg {int len; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct zx_vga *VAR_3, struct i2c_msg *VAR_4)
{




 if ((VAR_4->len != 1) || ((VAR_4->addr != VAR_0)))
  return -VAR_1;


 FUNC_0(VAR_3->mmio + VAR_2, VAR_4->addr);

 return 0;
}
