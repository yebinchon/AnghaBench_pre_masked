
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {unsigned int gpio_sda; unsigned int gpio_sck; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct rtl8366_smi*) ;

__attribute__((used)) static void FUNC_2(struct rtl8366_smi *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3 = VAR_0->gpio_sda;
 unsigned int VAR_4 = VAR_0->gpio_sck;

 for (; VAR_2 > 0; VAR_2--) {
  FUNC_1(VAR_0);


  FUNC_0(VAR_3, !!(VAR_1 & ( 1 << (VAR_2 - 1))));
  FUNC_1(VAR_0);


  FUNC_0(VAR_4, 1);
  FUNC_1(VAR_0);
  FUNC_0(VAR_4, 0);
 }
}
