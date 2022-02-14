
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int reference_count; int gpe; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct acpi_ec*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct acpi_ec*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static inline void FUNC_6(struct acpi_ec *VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_2(((void*)0), VAR_1->gpe);
 else {
  FUNC_0(VAR_1->reference_count < 1);
  FUNC_3(((void*)0), VAR_1->gpe, VAR_0);
 }
 if (FUNC_1(VAR_1)) {





  FUNC_5("Polling quirk");
  FUNC_4(VAR_1);
 }
}
