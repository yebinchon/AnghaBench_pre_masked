
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_cmd_ars_status {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {struct nd_cmd_ars_status* ars_status; int max_ars; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nd_cmd_ars_status* FUNC_0 (struct device*,int ,int ) ;
 int FUNC_1 (struct nd_cmd_ars_status*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct acpi_nfit_desc *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct nd_cmd_ars_status *VAR_4;

 if (VAR_2->ars_status) {
  FUNC_1(VAR_2->ars_status, 0, VAR_2->max_ars);
  return 0;
 }

 VAR_4 = FUNC_0(VAR_3, VAR_2->max_ars, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_2->ars_status = VAR_4;
 return 0;
}
