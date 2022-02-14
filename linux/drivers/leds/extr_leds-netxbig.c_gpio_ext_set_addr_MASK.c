
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxbig_gpio_ext {int num_addr; int * addr; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct netxbig_gpio_ext *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_addr; VAR_2++)
  FUNC_0(VAR_0->addr[VAR_2], (VAR_1 >> VAR_2) & 1);
}
