
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_descs {unsigned int ndescs; int * desc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gpio_descs*) ;

void FUNC_2(struct gpio_descs *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->ndescs; VAR_1++)
  FUNC_0(VAR_0->desc[VAR_1]);

 FUNC_1(VAR_0);
}
