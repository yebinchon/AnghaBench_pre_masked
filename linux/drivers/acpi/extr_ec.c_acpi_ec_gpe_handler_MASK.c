
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_ec {int lock; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_3(acpi_handle VAR_1,
 u32 VAR_2, void *VAR_3)
{
 unsigned long VAR_4;
 struct acpi_ec *VAR_5 = VAR_3;

 FUNC_1(&VAR_5->lock, VAR_4);
 FUNC_0(VAR_5);
 FUNC_2(&VAR_5->lock, VAR_4);
 return VAR_0;
}
