
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;
struct TYPE_14__ {int rq_c; int rq_l; } ;
struct TYPE_13__ {int rq_c; int rq_l; } ;
struct TYPE_12__ {int rq_c; int rq_l; } ;
struct TYPE_15__ {int yuv420; int yuv420_10bpc; TYPE_3__ misc; TYPE_2__ dlg; TYPE_1__ sizing; } ;
typedef TYPE_4__ display_rq_params_st ;
struct TYPE_16__ {scalar_t__ source_format; } ;
typedef TYPE_5__ display_pipe_source_params_st ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct display_mode_lib*,int *,int *,int *,TYPE_5__ const,int) ;
 int FUNC_1 (struct display_mode_lib*,TYPE_4__*,TYPE_5__ const) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct display_mode_lib*,TYPE_4__) ;

__attribute__((used)) static void FUNC_4(struct display_mode_lib *VAR_2,
  display_rq_params_st *VAR_3,
  const display_pipe_source_params_st VAR_4)
{

 VAR_3->yuv420 = VAR_4.source_format == VAR_1
   || VAR_4.source_format == VAR_0;
 VAR_3->yuv420_10bpc = VAR_4.source_format == VAR_0;

 FUNC_0(VAR_2,
   &(VAR_3->sizing.rq_l),
   &(VAR_3->dlg.rq_l),
   &(VAR_3->misc.rq_l),
   VAR_4,
   0);

 if (FUNC_2((enum source_format_class)(VAR_4.source_format))) {

  FUNC_0(VAR_2,
    &(VAR_3->sizing.rq_c),
    &(VAR_3->dlg.rq_c),
    &(VAR_3->misc.rq_c),
    VAR_4,
    1);
 }


 FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_2, *VAR_3);
}
