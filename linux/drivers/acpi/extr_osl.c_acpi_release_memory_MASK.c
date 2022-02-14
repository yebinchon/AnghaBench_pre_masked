
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int flags; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int *,struct resource*,int *) ;

acpi_status FUNC_1(acpi_handle VAR_4, struct resource *VAR_5,
    u32 VAR_6)
{
 if (!(VAR_5->flags & VAR_2))
  return VAR_1;

 return FUNC_0(VAR_0, VAR_4, VAR_6,
       VAR_3, ((void*)0), VAR_5, ((void*)0));
}
