
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_2__ {int rename_empty; } ;
struct diff_options {char* output_indicators; char line_termination; int break_opt; int rename_limit; char* a_prefix; char* b_prefix; int color_moved_ws_handling; int color_moved; int orderfile; int xdl_opts; int detect_rename; int use_color; int add_remove; int change; int * objfind; TYPE_1__ flags; int ws_error_highlight; int interhunkcontext; int context; int dirstat_permille; int abbrev; struct repository* repo; int file; } ;


 int VAR_0 ;
 int FUNC_0 (struct diff_options*,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct diff_options*,int *,int) ;
 int FUNC_2 (struct diff_options*) ;
 int VAR_20 ;
 int VAR_21 ;

void FUNC_3(struct repository *VAR_22, struct diff_options *VAR_23)
{
 FUNC_1(VAR_23, &VAR_5, sizeof(*VAR_23));

 VAR_23->file = VAR_20;
 VAR_23->repo = VAR_22;

 VAR_23->output_indicators[VAR_3] = '+';
 VAR_23->output_indicators[VAR_4] = '-';
 VAR_23->output_indicators[VAR_2] = ' ';
 VAR_23->abbrev = VAR_0;
 VAR_23->line_termination = '\n';
 VAR_23->break_opt = -1;
 VAR_23->rename_limit = -1;
 VAR_23->dirstat_permille = VAR_13;
 VAR_23->context = VAR_11;
 VAR_23->interhunkcontext = VAR_15;
 VAR_23->ws_error_highlight = VAR_21;
 VAR_23->flags.rename_empty = 1;
 VAR_23->objfind = ((void*)0);


 VAR_23->change = VAR_8;
 VAR_23->add_remove = VAR_6;
 VAR_23->use_color = VAR_19;
 VAR_23->detect_rename = VAR_12;
 VAR_23->xdl_opts |= VAR_7;
 if (VAR_14)
  FUNC_0(VAR_23, VAR_1);

 VAR_23->orderfile = VAR_18;

 if (VAR_17) {
  VAR_23->a_prefix = VAR_23->b_prefix = "";
 } else if (!VAR_16) {
  VAR_23->a_prefix = "a/";
  VAR_23->b_prefix = "b/";
 }

 VAR_23->color_moved = VAR_9;
 VAR_23->color_moved_ws_handling = VAR_10;

 FUNC_2(VAR_23);
}
