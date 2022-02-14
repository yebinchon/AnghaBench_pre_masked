
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct acpi_nfit_desc {int platform_cap; struct device* dev; } ;
struct acpi_nfit_capabilities {int highest_capability; int capabilities; } ;


 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct acpi_nfit_desc *VAR_0,
  struct acpi_nfit_capabilities *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 u32 VAR_3;

 VAR_3 = (1 << (VAR_1->highest_capability + 1)) - 1;
 VAR_0->platform_cap = VAR_1->capabilities & VAR_3;
 FUNC_0(VAR_2, "cap: %#x\n", VAR_0->platform_cap);
 return 1;
}
