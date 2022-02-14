
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int gpe; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct acpi_ec*) ;

__attribute__((used)) static inline void FUNC_2(struct acpi_ec *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return;
 FUNC_0(((void*)0), VAR_0->gpe);
}
