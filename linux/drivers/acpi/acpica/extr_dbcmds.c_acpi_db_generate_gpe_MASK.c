
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_gpe_event_info {int dummy; } ;


 int FUNC_0 (int) ;
 struct acpi_gpe_event_info* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,struct acpi_gpe_event_info*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int ) ;

void FUNC_5(char *VAR_0, char *VAR_1)
{
 u32 VAR_2 = 0;
 u32 VAR_3;
 struct acpi_gpe_event_info *VAR_4;

 VAR_3 = FUNC_4(VAR_0, ((void*)0), 0);





 if (VAR_1) {
  VAR_2 = FUNC_4(VAR_1, ((void*)0), 0);
  if (VAR_2 == 1) {
   VAR_2 = 0;
  }
 }

 VAR_4 =
     FUNC_1(FUNC_0(VAR_2),
           VAR_3);
 if (!VAR_4) {
  FUNC_3("Invalid GPE\n");
  return;
 }

 (void)FUNC_2(((void*)0), VAR_4, VAR_3);
}
