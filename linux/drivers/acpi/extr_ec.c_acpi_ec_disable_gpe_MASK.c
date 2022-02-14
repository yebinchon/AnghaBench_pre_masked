
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int reference_count; int gpe; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct acpi_ec *VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_1(((void*)0), VAR_1->gpe);
 else {
  FUNC_0(VAR_1->reference_count < 1);
  FUNC_2(((void*)0), VAR_1->gpe, VAR_0);
 }
}
