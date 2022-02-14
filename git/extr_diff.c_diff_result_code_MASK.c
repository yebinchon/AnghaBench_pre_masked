
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ check_failed; scalar_t__ has_changes; scalar_t__ exit_with_status; } ;
struct diff_options {int output_format; TYPE_1__ flags; int degraded_cc_to_c; int needed_rename_limit; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;

int FUNC_1(struct diff_options *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 FUNC_0("diff.renameLimit",
          VAR_1->needed_rename_limit,
          VAR_1->degraded_cc_to_c);
 if (!VAR_1->flags.exit_with_status &&
     !(VAR_1->output_format & VAR_0))
  return VAR_2;
 if (VAR_1->flags.exit_with_status &&
     VAR_1->flags.has_changes)
  VAR_3 |= 01;
 if ((VAR_1->output_format & VAR_0) &&
     VAR_1->flags.check_failed)
  VAR_3 |= 02;
 return VAR_3;
}
