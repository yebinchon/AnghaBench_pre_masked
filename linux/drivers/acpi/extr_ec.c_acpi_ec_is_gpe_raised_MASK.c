
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int gpe; } ;
typedef int acpi_event_status ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int*) ;

__attribute__((used)) static inline bool FUNC_1(struct acpi_ec *VAR_1)
{
 acpi_event_status VAR_2 = 0;

 (void)FUNC_0(((void*)0), VAR_1->gpe, &VAR_2);
 return (VAR_2 & VAR_0) ? 1 : 0;
}
