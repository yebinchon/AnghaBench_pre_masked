
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct acpi_sbs {int charger_present; int hc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct acpi_sbs *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_0(VAR_3->hc, VAR_2, VAR_0,
     0x13, (u8 *) & VAR_5);

 if (VAR_4)
  return VAR_4;
 if (!((VAR_5 >> 4) & 0x1) || VAR_5 == 0xffff)
  return -VAR_1;

 VAR_3->charger_present = (VAR_5 >> 15) & 0x1;
 return 0;
}
