
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_sys_bus_ops {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,struct sh_mobile_lcdc_sys_bus_ops*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*,struct sh_mobile_lcdc_sys_bus_ops*,int ) ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (void*,struct sh_mobile_lcdc_sys_bus_ops*,int,int) ;
 int FUNC_7 (void*,struct sh_mobile_lcdc_sys_bus_ops*,int,int) ;

int FUNC_8(void *VAR_6, struct sh_mobile_lcdc_sys_bus_ops *VAR_7)
{
 unsigned long VAR_8 = 320;
 unsigned long VAR_9 = 240;
 int VAR_10;

 FUNC_5();
 FUNC_2(VAR_6, VAR_7, VAR_5, FUNC_0(VAR_5));

 if (FUNC_4(VAR_6, VAR_7, 0) != 0x1505)
  return -VAR_0;

 FUNC_3("Migo-R QVGA LCD Module detected.\n");

 FUNC_2(VAR_6, VAR_7, VAR_5, FUNC_0(VAR_5));
 FUNC_7(VAR_6, VAR_7, 0x00A4, 0x0001);
 FUNC_1(10);

 FUNC_2(VAR_6, VAR_7, VAR_1, FUNC_0(VAR_1));
 FUNC_1(100);

 FUNC_2(VAR_6, VAR_7, VAR_2, FUNC_0(VAR_2));
 FUNC_7(VAR_6, VAR_7, 0x0050, 0xef - (VAR_9 - 1));
 FUNC_7(VAR_6, VAR_7, 0x0051, 0x00ef);
 FUNC_7(VAR_6, VAR_7, 0x0052, 0x0000);
 FUNC_7(VAR_6, VAR_7, 0x0053, VAR_8 - 1);

 FUNC_2(VAR_6, VAR_7, VAR_3, FUNC_0(VAR_3));
 FUNC_1(10);

 FUNC_2(VAR_6, VAR_7, VAR_4, FUNC_0(VAR_4));
 FUNC_1(40);



 FUNC_7(VAR_6, VAR_7, 0x0020, 0x0000);
 FUNC_7(VAR_6, VAR_7, 0x0021, 0x0000);

 for (VAR_10 = 0; VAR_10 < (VAR_8 * 256); VAR_10++)
  FUNC_7(VAR_6, VAR_7, 0x0022, 0x0000);

 FUNC_7(VAR_6, VAR_7, 0x0020, 0x0000);
 FUNC_7(VAR_6, VAR_7, 0x0021, 0x0000);
 FUNC_7(VAR_6, VAR_7, 0x0007, 0x0173);
 FUNC_1(40);


 FUNC_6(VAR_6, VAR_7, 0x00, 0x22);
 FUNC_1(100);
 return 0;
}
