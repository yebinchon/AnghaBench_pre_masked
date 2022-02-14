
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct setup_revision_opt {int dummy; } ;
struct TYPE_2__ {scalar_t__ output_format; } ;
struct rev_info {int combine_merges; int dense_combined_merges; TYPE_1__ diffopt; int first_parent_only; scalar_t__ ignore_merges; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rev_info *VAR_1,
           struct setup_revision_opt *VAR_2)
{
 if (VAR_1->ignore_merges) {

  VAR_1->ignore_merges = 0;
  if (!VAR_1->first_parent_only && !VAR_1->combine_merges) {

   VAR_1->combine_merges = 1;
   VAR_1->dense_combined_merges = 1;
  }
 }
 if (!VAR_1->diffopt.output_format)
  VAR_1->diffopt.output_format = VAR_0;
}
