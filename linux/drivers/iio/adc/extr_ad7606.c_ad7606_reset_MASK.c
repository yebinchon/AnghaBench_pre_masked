
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7606_state {scalar_t__ gpio_reset; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ad7606_state *VAR_1)
{
 if (VAR_1->gpio_reset) {
  FUNC_0(VAR_1->gpio_reset, 1);
  FUNC_1(100);
  FUNC_0(VAR_1->gpio_reset, 0);
  return 0;
 }

 return -VAR_0;
}
