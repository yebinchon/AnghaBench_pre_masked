
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int *,int ,void**) ;
 int VAR_4 ;

int FUNC_2(acpi_handle VAR_5)
{
 acpi_status VAR_6, VAR_7 = VAR_1;

 VAR_6 = FUNC_1(VAR_0, VAR_5,
         VAR_3, VAR_4, ((void*)0),
         VAR_5, (void **)&VAR_7);

 return FUNC_0(VAR_6) && FUNC_0(VAR_7) ? 0 : -VAR_2;
}
