
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {int (* write_index ) (void*,unsigned long) ;int (* write_data ) (void*,unsigned long) ;} ;


 int FUNC_0 (void*,unsigned long) ;
 int FUNC_1 (void*,unsigned long) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
        struct sh_mobile_lcdc_sys_bus_ops *VAR_1,
        int VAR_2, unsigned long VAR_3)
{
 if (VAR_2)
  VAR_1->write_data(VAR_0, VAR_3);
 else
  VAR_1->write_index(VAR_0, VAR_3);
}
