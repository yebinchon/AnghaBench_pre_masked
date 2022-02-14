
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int recursive; scalar_t__ follow_renames; scalar_t__ allow_external; } ;
struct diff_options {scalar_t__ output_format; int break_opt; int pickaxe_opts; int pathspec; int line_termination; scalar_t__ orderfile; scalar_t__ filter; scalar_t__ detect_rename; TYPE_1__ flags; scalar_t__ skip_stat_unmatch; } ;
struct rev_info {int combined_all_paths; int commit_format; scalar_t__ verbose_header; int no_commit_id; int loginfo; struct diff_options diffopt; } ;
struct oid_array {int nr; int * oid; } ;
struct object_id {int dummy; } ;
struct obj_order {TYPE_2__* parent; struct obj_order* next; struct obj_order* obj; } ;
struct combine_diff_path {TYPE_2__* parent; struct combine_diff_path* next; struct combine_diff_path* obj; } ;
struct TYPE_4__ {int path; int status; } ;


 int FUNC_0 (struct obj_order*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct diff_options*) ;
 char* FUNC_5 (struct diff_options*) ;
 int FUNC_6 (int *,struct object_id const*,char*,struct diff_options*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct diff_options*) ;
 scalar_t__ FUNC_9 (int ) ;
 struct obj_order* FUNC_10 (struct object_id const*,struct oid_array const*,struct diff_options*,int ) ;
 struct obj_order* FUNC_11 (struct object_id const*,struct oid_array const*,struct diff_options*) ;
 int FUNC_12 (struct obj_order*) ;
 int FUNC_13 (struct diff_options*,struct obj_order*,int,int) ;
 int FUNC_14 (scalar_t__,int ,struct obj_order*,int) ;
 int VAR_8 ;
 int FUNC_15 (char*,char*,int ) ;
 int FUNC_16 (struct rev_info*) ;
 int FUNC_17 (struct obj_order*,int,int,int ,struct rev_info*) ;
 int FUNC_18 (struct obj_order*,int,struct rev_info*) ;
 int FUNC_19 (int *) ;

void FUNC_20(const struct object_id *VAR_9,
   const struct oid_array *VAR_10,
   int VAR_11,
   struct rev_info *VAR_12)
{
 struct diff_options *VAR_13 = &VAR_12->diffopt;
 struct diff_options VAR_14;
 struct combine_diff_path *VAR_15, *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 = VAR_10->nr;
 int VAR_22;


 if (!VAR_21)
  return;

 VAR_20 = !!VAR_12->loginfo && !VAR_12->no_commit_id;
 VAR_19 = 0;
 if (VAR_20) {
  FUNC_16(VAR_12);

  if (VAR_12->verbose_header && VAR_13->output_format &&
      VAR_13->output_format != VAR_3 &&
      !FUNC_2(VAR_12->commit_format))
   FUNC_15("%s%c", FUNC_5(VAR_13),
          VAR_13->line_termination);
 }

 VAR_14 = *VAR_13;
 FUNC_3(&VAR_14.pathspec, &VAR_13->pathspec);
 VAR_14.flags.recursive = 1;
 VAR_14.flags.allow_external = 0;
 VAR_22 = VAR_13->skip_stat_unmatch ||
   VAR_13->flags.follow_renames ||
   VAR_13->break_opt != -1 ||
   VAR_13->detect_rename ||
   (VAR_13->pickaxe_opts & VAR_6) ||
   VAR_13->filter;


 if (VAR_22) {





  VAR_16 = FUNC_10(VAR_9, VAR_10, &VAR_14,
        VAR_12->combined_all_paths);
 }
 else {
  int VAR_23;
  VAR_16 = FUNC_11(VAR_9, VAR_10, &VAR_14);





  VAR_23 = VAR_13->output_format & VAR_7;
  if (VAR_23) {
   VAR_14.output_format = VAR_23;

   FUNC_6(&VAR_10->oid[0], VAR_9, "", &VAR_14);
   FUNC_8(&VAR_14);
   if (VAR_13->orderfile)
    FUNC_7(VAR_13->orderfile);
   FUNC_4(&VAR_14);
  }
 }


 for (VAR_18 = 0, VAR_15 = VAR_16; VAR_15; VAR_15 = VAR_15->next)
  VAR_18++;


 if (VAR_13->orderfile && VAR_18) {
  struct obj_order *VAR_24;

  FUNC_0(VAR_24, VAR_18);
  for (VAR_17 = 0, VAR_15 = VAR_16; VAR_15; VAR_15 = VAR_15->next, VAR_17++)
   VAR_24[VAR_17].obj = VAR_15;
  FUNC_14(VAR_13->orderfile, VAR_8, VAR_24, VAR_18);
  for (VAR_17 = 0; VAR_17 < VAR_18 - 1; VAR_17++) {
   VAR_15 = VAR_24[VAR_17].obj;
   VAR_15->next = VAR_24[VAR_17+1].obj;
  }

  VAR_15 = VAR_24[VAR_18-1].obj;
  VAR_15->next = ((void*)0);
  VAR_16 = VAR_24[0].obj;
  FUNC_12(VAR_24);
 }


 if (VAR_18) {
  if (VAR_13->output_format & (VAR_5 |
       VAR_1 |
       VAR_2)) {
   for (VAR_15 = VAR_16; VAR_15; VAR_15 = VAR_15->next)
    FUNC_18(VAR_15, VAR_21, VAR_12);
   VAR_19 = 1;
  }
  else if (VAR_13->output_format & VAR_7)
   VAR_19 = 1;
  else if (VAR_13->output_format & VAR_0)
   FUNC_13(VAR_13, VAR_16, VAR_21, VAR_18);

  if (VAR_13->output_format & VAR_4) {
   if (VAR_19)
    FUNC_15("%s%c", FUNC_5(VAR_13),
           VAR_13->line_termination);
   for (VAR_15 = VAR_16; VAR_15; VAR_15 = VAR_15->next)
    FUNC_17(VAR_15, VAR_21, VAR_11,
      0, VAR_12);
  }
 }


 while (VAR_16) {
  struct combine_diff_path *VAR_25 = VAR_16;
  VAR_16 = VAR_16->next;
  for (VAR_17 = 0; VAR_17 < VAR_21; VAR_17++)
   if (VAR_12->combined_all_paths &&
       FUNC_9(VAR_25->parent[VAR_17].status))
    FUNC_19(&VAR_25->parent[VAR_17].path);
  FUNC_12(VAR_25);
 }

 FUNC_1(&VAR_14.pathspec);
}
