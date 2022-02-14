
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5758_state {scalar_t__ gpio_reset; } ;


 int FUNC_0 (struct ad5758_state*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ad5758_state *VAR_0)
{
 if (VAR_0->gpio_reset) {
  FUNC_1(VAR_0->gpio_reset, 0);
  FUNC_2(100, 1000);
  FUNC_1(VAR_0->gpio_reset, 1);
  FUNC_2(100, 1000);

  return 0;
 } else {

  return FUNC_0(VAR_0);
 }
}
