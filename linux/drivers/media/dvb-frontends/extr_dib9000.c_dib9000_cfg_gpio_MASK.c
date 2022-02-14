
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dib9000_state {int gpio_dir; int gpio_val; } ;


 void* FUNC_0 (struct dib9000_state*,int) ;
 int FUNC_1 (struct dib9000_state*,int,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dib9000_state *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 VAR_0->gpio_dir = FUNC_0(VAR_0, 773);
 VAR_0->gpio_dir &= ~(1 << VAR_1);
 VAR_0->gpio_dir |= (VAR_2 & 0x1) << VAR_1;
 FUNC_1(VAR_0, 773, VAR_0->gpio_dir);

 VAR_0->gpio_val = FUNC_0(VAR_0, 774);
 VAR_0->gpio_val &= ~(1 << VAR_1);
 VAR_0->gpio_val |= (VAR_3 & 0x01) << VAR_1;
 FUNC_1(VAR_0, 774, VAR_0->gpio_val);

 FUNC_2("gpio dir: %04x: gpio val: %04x\n", VAR_0->gpio_dir, VAR_0->gpio_val);

 return 0;
}
