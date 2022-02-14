
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int outf; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int ctxlen; int interhunkctxlen; } ;
struct TYPE_9__ {int diff_cb; } ;
struct TYPE_13__ {TYPE_4__ callback; TYPE_3__ params; TYPE_2__ config; TYPE_1__ output; } ;
typedef TYPE_5__ git_xdiff_output ;
struct TYPE_14__ {int flags; int context_lines; int interhunk_lines; } ;
typedef TYPE_6__ git_diff_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_0(git_xdiff_output *VAR_14, const git_diff_options *VAR_15)
{
 uint32_t VAR_16 = VAR_15 ? VAR_15->flags : 0;

 VAR_14->output.diff_cb = VAR_12;

 VAR_14->config.ctxlen = VAR_15 ? VAR_15->context_lines : 3;
 VAR_14->config.interhunkctxlen = VAR_15 ? VAR_15->interhunk_lines : 0;

 if (VAR_16 & VAR_0)
  VAR_14->params.flags |= VAR_11;
 if (VAR_16 & VAR_1)
  VAR_14->params.flags |= VAR_7;
 if (VAR_16 & VAR_2)
  VAR_14->params.flags |= VAR_6;
 if (VAR_16 & VAR_3)
  VAR_14->params.flags |= VAR_8;

 if (VAR_16 & VAR_5)
  VAR_14->params.flags |= VAR_10;
 if (VAR_16 & VAR_4)
  VAR_14->params.flags |= VAR_9;

 VAR_14->callback.outf = VAR_13;
}
