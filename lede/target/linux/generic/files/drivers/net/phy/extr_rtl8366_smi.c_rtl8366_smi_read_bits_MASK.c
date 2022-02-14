
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_smi {unsigned int gpio_sda; unsigned int gpio_sck; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (struct rtl8366_smi*) ;

__attribute__((used)) static void FUNC_5(struct rtl8366_smi *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 unsigned int VAR_3 = VAR_0->gpio_sda;
 unsigned int VAR_4 = VAR_0->gpio_sck;

 FUNC_0(VAR_3);

 for (*VAR_2 = 0; VAR_1 > 0; VAR_1--) {
  u32 VAR_5;

  FUNC_4(VAR_0);


  FUNC_3(VAR_4, 1);
  FUNC_4(VAR_0);
  VAR_5 = !!FUNC_2(VAR_3);
  FUNC_3(VAR_4, 0);

  *VAR_2 |= (VAR_5 << (VAR_1 - 1));
 }

 FUNC_1(VAR_3, 0);
}
