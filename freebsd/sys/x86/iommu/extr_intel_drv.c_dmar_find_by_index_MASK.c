
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_iter_args {int i; int * res; } ;
typedef int ACPI_DMAR_HARDWARE_UNIT ;


 int VAR_0 ;
 int FUNC_0 (int ,struct find_iter_args*) ;

__attribute__((used)) static ACPI_DMAR_HARDWARE_UNIT *
FUNC_1(int VAR_1)
{
 struct find_iter_args VAR_2;

 VAR_2.i = VAR_1;
 VAR_2.res = ((void*)0);
 FUNC_0(VAR_0, &VAR_2);
 return (VAR_2.res);
}
