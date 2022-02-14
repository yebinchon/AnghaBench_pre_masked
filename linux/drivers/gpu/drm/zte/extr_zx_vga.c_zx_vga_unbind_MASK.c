
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vga {int i2c_wclk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct zx_vga* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct device *VAR_1,
     void *VAR_2)
{
 struct zx_vga *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->i2c_wclk);
}
