
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {int dummy; } ;


 int FUNC_0 (void*,struct sh_mobile_lcdc_sys_bus_ops*,unsigned short const,unsigned short const) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
          struct sh_mobile_lcdc_sys_bus_ops *VAR_1,
          unsigned short const *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2)
  FUNC_0(VAR_0, VAR_1, VAR_2[VAR_4], VAR_2[VAR_4 + 1]);
}
