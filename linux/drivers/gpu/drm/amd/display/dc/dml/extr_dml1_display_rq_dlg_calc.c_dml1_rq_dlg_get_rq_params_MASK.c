
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_6__ {int rq_c; int rq_l; } ;
struct TYPE_5__ {int rq_c; int rq_l; } ;
struct TYPE_4__ {int rq_c; int rq_l; } ;
struct _vcs_dpi_display_rq_params_st {int yuv420; int yuv420_10bpc; TYPE_3__ misc; TYPE_2__ dlg; TYPE_1__ sizing; } ;
struct _vcs_dpi_display_pipe_source_params_st {scalar_t__ source_format; } ;
typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct display_mode_lib*,int *,int *,int *,struct _vcs_dpi_display_pipe_source_params_st const,int) ;
 int FUNC_1 (struct display_mode_lib*,struct _vcs_dpi_display_rq_params_st*,struct _vcs_dpi_display_pipe_source_params_st const) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct display_mode_lib*,struct _vcs_dpi_display_rq_params_st) ;

void FUNC_4(
  struct display_mode_lib *VAR_2,
  struct _vcs_dpi_display_rq_params_st *VAR_3,
  const struct _vcs_dpi_display_pipe_source_params_st VAR_4)
{

 VAR_3->yuv420 = VAR_4.source_format == VAR_1
   || VAR_4.source_format == VAR_0;
 VAR_3->yuv420_10bpc = VAR_4.source_format == VAR_0;

 FUNC_0(
   VAR_2,
   &(VAR_3->sizing.rq_l),
   &(VAR_3->dlg.rq_l),
   &(VAR_3->misc.rq_l),
   VAR_4,
   0);

 if (FUNC_2((enum source_format_class) VAR_4.source_format)) {

  FUNC_0(
    VAR_2,
    &(VAR_3->sizing.rq_c),
    &(VAR_3->dlg.rq_c),
    &(VAR_3->misc.rq_c),
    VAR_4,
    1);
 }


 FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_2, *VAR_3);
}
