
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win ;
struct resource {int flags; } ;
struct resource_win {struct resource res; } ;
struct acpi_resource {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct acpi_resource*,int ) ;
 scalar_t__ FUNC_1 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_2 (struct acpi_resource*,struct resource_win*) ;
 int FUNC_3 (struct acpi_resource*,struct resource*) ;
 int FUNC_4 (struct resource_win*,int ,int) ;

__attribute__((used)) static acpi_status FUNC_5(struct acpi_resource *VAR_5, void *VAR_6)
{
 struct resource *VAR_7 = VAR_6;
 struct resource_win VAR_8;





 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 VAR_7->flags = 0;
 if (FUNC_0(VAR_5, VAR_3))
  return VAR_1;

 if (!FUNC_3(VAR_5, VAR_7)) {
  if (FUNC_1(VAR_5, &VAR_8) ||
      FUNC_2(VAR_5, &VAR_8))
   *VAR_7 = VAR_8.res;
 }
 if ((VAR_7->flags & VAR_4) ||
     (VAR_7->flags & VAR_2))
  VAR_7->flags = 0;

 return VAR_0;
}
