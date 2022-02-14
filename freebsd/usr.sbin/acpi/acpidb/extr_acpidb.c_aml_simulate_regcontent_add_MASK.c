
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ACPIRegionContent {int regtype; int value; int addr; } ;
typedef int UINT8 ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ACPIRegionContent*,int ) ;
 int VAR_1 ;
 struct ACPIRegionContent* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, ACPI_PHYSICAL_ADDRESS VAR_3, UINT8 VAR_4)
{
 struct ACPIRegionContent *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct ACPIRegionContent));
 if (VAR_5 == ((void*)0)) {
  return (-1);
 }
 VAR_5->regtype = VAR_2;
 VAR_5->addr = VAR_3;
 VAR_5->value = VAR_4;

 FUNC_0(&VAR_0, VAR_5, VAR_1);
 return (0);
}
