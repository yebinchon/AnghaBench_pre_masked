
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_nfit_desc {scalar_t__ scrub_mode; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct acpi_nfit_desc*,int ) ;
 struct acpi_nfit_desc* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_3, acpi_handle VAR_4)
{
 struct acpi_nfit_desc *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->scrub_mode == VAR_2)
  FUNC_0(VAR_5, VAR_0);
 else
  FUNC_0(VAR_5, VAR_1);
}
