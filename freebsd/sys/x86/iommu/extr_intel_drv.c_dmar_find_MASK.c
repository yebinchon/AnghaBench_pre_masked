
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int unit; } ;
typedef int * device_t ;
typedef int ACPI_DMAR_PCI_PATH ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct dmar_unit* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int,int ,int ,int ,int ,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*,int *,int) ;
 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ FUNC_7 (struct dmar_unit*,int,int,int *,int,char const**) ;
 int FUNC_8 (int,int,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;

struct dmar_unit *
FUNC_14(device_t VAR_2, bool VAR_3)
{
 device_t VAR_4;
 struct dmar_unit *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;




 if (FUNC_1(FUNC_2(VAR_2)) !=
     FUNC_0("pci"))
  return (((void*)0));

 VAR_4 = ((void*)0);
 VAR_8 = FUNC_10(VAR_2);
 VAR_10 = FUNC_5(VAR_2);
 ACPI_DMAR_PCI_PATH VAR_11[VAR_10];
 FUNC_6(VAR_2, &VAR_9, VAR_11, VAR_10);
 VAR_6 = "";

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_1[VAR_7] == ((void*)0))
   continue;
  VAR_5 = FUNC_3(VAR_1[VAR_7]);
  if (FUNC_7(VAR_5, VAR_8, VAR_9,
      VAR_11, VAR_10, &VAR_6))
   break;
 }
 if (VAR_7 == VAR_0)
  return (((void*)0));

 if (VAR_3) {
  FUNC_4(VAR_2, "pci%d:%d:%d:%d matched dmar%d by %s",
      VAR_8, FUNC_9(VAR_2), FUNC_12(VAR_2),
      FUNC_11(VAR_2), VAR_5->unit, VAR_6);
  FUNC_13(" scope path ");
  FUNC_8(VAR_9, VAR_10, VAR_11);
  FUNC_13("\n");
 }
 return (VAR_5);
}
