
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_spa {int ars_state; int max_ars; int clear_err_unit; int spa; } ;
struct nd_cmd_ars_cap {int status; int clear_err_unit; int max_ars_out; } ;
struct acpi_nfit_desc {int max_ars; } ;
typedef int ars_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_nfit_desc*,struct nd_cmd_ars_cap*,struct nfit_spa*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nd_cmd_ars_cap*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct acpi_nfit_desc *VAR_5,
  struct nfit_spa *VAR_6)
{
 int VAR_7 = FUNC_4(VAR_6->spa);
 struct nd_cmd_ars_cap VAR_8;
 int VAR_9;

 FUNC_5(VAR_0, &VAR_6->ars_state);
 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_9 = FUNC_0(VAR_5, &VAR_8, VAR_6);
 if (VAR_9 < 0)
  return;

 if (VAR_7 == VAR_4 && ((VAR_8.status >> 16)
    & VAR_2) == 0)
  return;
 if (VAR_7 == VAR_3 && ((VAR_8.status >> 16)
    & VAR_1) == 0)
  return;

 VAR_6->max_ars = VAR_8.max_ars_out;
 VAR_6->clear_err_unit = VAR_8.clear_err_unit;
 VAR_5->max_ars = FUNC_2(VAR_6->max_ars, VAR_5->max_ars);
 FUNC_1(VAR_0, &VAR_6->ars_state);
}
