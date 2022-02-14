
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int default_follow_renames; int recursive; int allow_textconv; } ;
struct TYPE_4__ {int stat_width; int stat_graph_width; TYPE_1__ flags; } ;
struct rev_info {int verbose_header; int date_mode; TYPE_2__ diffopt; int show_signature; int subject_prefix; int show_root_diff; int abbrev_commit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,struct rev_info*) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_7)
{
 if (VAR_6)
  FUNC_0(VAR_6, VAR_7);
 if (VAR_2)
  VAR_7->diffopt.flags.default_follow_renames = 1;
 VAR_7->verbose_header = 1;
 VAR_7->diffopt.flags.recursive = 1;
 VAR_7->diffopt.stat_width = -1;
 VAR_7->diffopt.stat_graph_width = -1;
 VAR_7->abbrev_commit = VAR_0;
 VAR_7->show_root_diff = VAR_3;
 VAR_7->subject_prefix = VAR_5;
 VAR_7->show_signature = VAR_4;
 VAR_7->diffopt.flags.allow_textconv = 1;

 if (VAR_1)
  FUNC_1(VAR_1, &VAR_7->date_mode);
}
