
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec_query {scalar_t__ handler; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct acpi_ec_query*) ;

__attribute__((used)) static void FUNC_2(struct acpi_ec_query *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->handler)
   FUNC_0(VAR_0->handler);
  FUNC_1(VAR_0);
 }
}
