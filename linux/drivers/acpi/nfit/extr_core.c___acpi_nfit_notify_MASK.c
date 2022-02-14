
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef int acpi_handle ;




 void FUNC_0 (struct device*,int ) ;
 void FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,char*,int) ;

void FUNC_3(struct device *VAR_0, acpi_handle VAR_1, u32 VAR_2)
{
 FUNC_2(VAR_0, "event: 0x%x\n", VAR_2);

 switch (VAR_2) {
 case 128:
  return FUNC_1(VAR_0, VAR_1);
 case 129:
  return FUNC_0(VAR_0, VAR_1);
 default:
  return;
 }
}
