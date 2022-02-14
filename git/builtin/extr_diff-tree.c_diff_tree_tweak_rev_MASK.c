
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct setup_revision_opt {int dummy; } ;
struct TYPE_2__ {scalar_t__ output_format; } ;
struct rev_info {TYPE_1__ diffopt; scalar_t__ dense_combined_merges; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rev_info *VAR_2, struct setup_revision_opt *VAR_3)
{
 if (!VAR_2->diffopt.output_format) {
  if (VAR_2->dense_combined_merges)
   VAR_2->diffopt.output_format = VAR_0;
  else
   VAR_2->diffopt.output_format = VAR_1;
 }
}
