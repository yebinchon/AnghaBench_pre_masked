
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct acpi_ec *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->flags))
  FUNC_1("event unblocked");




 FUNC_0(VAR_1);
}
