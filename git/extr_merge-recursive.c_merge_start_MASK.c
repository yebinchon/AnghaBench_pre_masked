
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int dummy; } ;
struct strbuf {int buf; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct merge_options {int repo; int detect_renames; scalar_t__ detect_directory_renames; int rename_limit; scalar_t__ rename_score; int show_rename_progress; scalar_t__ xdl_opts; scalar_t__ recursive_variant; int verbosity; int buffer_output; TYPE_2__* priv; TYPE_1__ obuf; scalar_t__ branch2; scalar_t__ branch1; } ;
struct TYPE_4__ {int df_conflict_file_set; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct merge_options*,int ,int ) ;
 scalar_t__ FUNC_3 (int,struct tree*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (int *,int) ;
 TYPE_2__* FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct merge_options *VAR_7, struct tree *VAR_8)
{
 struct strbuf VAR_9 = VAR_6;


 FUNC_1(VAR_7->repo);

 FUNC_1(VAR_7->branch1 && VAR_7->branch2);

 FUNC_1(VAR_7->detect_renames >= -1 &&
        VAR_7->detect_renames <= VAR_0);
 FUNC_1(VAR_7->detect_directory_renames >= VAR_2 &&
        VAR_7->detect_directory_renames <= VAR_3);
 FUNC_1(VAR_7->rename_limit >= -1);
 FUNC_1(VAR_7->rename_score >= 0 && VAR_7->rename_score <= VAR_1);
 FUNC_1(VAR_7->show_rename_progress >= 0 && VAR_7->show_rename_progress <= 1);

 FUNC_1(VAR_7->xdl_opts >= 0);
 FUNC_1(VAR_7->recursive_variant >= VAR_4 &&
        VAR_7->recursive_variant <= VAR_5);

 FUNC_1(VAR_7->verbosity >= 0 && VAR_7->verbosity <= 5);
 FUNC_1(VAR_7->buffer_output <= 2);
 FUNC_1(VAR_7->obuf.len == 0);

 FUNC_1(VAR_7->priv == ((void*)0));


 if (FUNC_3(VAR_7->repo, VAR_8, &VAR_9)) {
  FUNC_2(VAR_7, FUNC_0("Your local changes to the following files would be overwritten by merge:\n  %s"),
      VAR_9.buf);
  FUNC_4(&VAR_9);
  return -1;
 }

 VAR_7->priv = FUNC_6(1, sizeof(*VAR_7->priv));
 FUNC_5(&VAR_7->priv->df_conflict_file_set, 1);
 return 0;
}
