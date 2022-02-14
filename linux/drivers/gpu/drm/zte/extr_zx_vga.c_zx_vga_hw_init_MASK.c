
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vga {scalar_t__ mmio; int i2c_wclk; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct zx_vga *VAR_8)
{
 unsigned long VAR_9 = FUNC_1(VAR_8->i2c_wclk);
 int VAR_10;





 VAR_10 = FUNC_0(VAR_9 / 1000, 400 * 4) - 1;
 FUNC_2(VAR_8->mmio + VAR_3, VAR_10);


 FUNC_2(VAR_8->mmio + VAR_1, 0x80);
 FUNC_2(VAR_8->mmio + VAR_2, VAR_6);





 FUNC_2(VAR_8->mmio + VAR_7, VAR_0);
 FUNC_3(VAR_8->mmio + VAR_4, VAR_5, VAR_5);
}
