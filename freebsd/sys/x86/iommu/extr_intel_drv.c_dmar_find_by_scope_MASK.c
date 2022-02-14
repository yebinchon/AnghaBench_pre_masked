
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int dummy; } ;
typedef int ACPI_DMAR_PCI_PATH ;


 struct dmar_unit* FUNC_0 (int *) ;
 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ FUNC_1 (struct dmar_unit*,int,int,int const*,int,int *) ;

__attribute__((used)) static struct dmar_unit *
FUNC_2(int VAR_2, int VAR_3,
    const ACPI_DMAR_PCI_PATH *VAR_4, int VAR_5)
{
 struct dmar_unit *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_1[VAR_7] == ((void*)0))
   continue;
  VAR_6 = FUNC_0(VAR_1[VAR_7]);
  if (FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4,
      VAR_5, ((void*)0)))
   return (VAR_6);
 }
 return (((void*)0));
}
