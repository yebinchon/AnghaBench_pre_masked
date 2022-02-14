
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _vcs_dpi_ip_params_st {int dummy; } ;
struct _vcs_dpi_soc_bounding_box_st {int dummy; } ;
struct display_mode_lib {int project; int funcs; struct _vcs_dpi_ip_params_st ip; struct _vcs_dpi_soc_bounding_box_st soc; } ;
typedef enum dml_project { ____Placeholder_dml_project } dml_project ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct display_mode_lib *VAR_3,
  const struct _vcs_dpi_soc_bounding_box_st *VAR_4,
  const struct _vcs_dpi_ip_params_st *VAR_5,
  enum dml_project VAR_6)
{
 VAR_3->soc = *VAR_4;
 VAR_3->ip = *VAR_5;
 VAR_3->project = VAR_6;
 switch (VAR_6) {
 default:
  break;
 }
}
