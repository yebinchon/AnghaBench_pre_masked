
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int interhunkctxlen; int ctxlen; int anchors_nr; int anchors; int flags; } ;
typedef TYPE_2__ xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef TYPE_2__ xdemitconf_t ;
struct diffstat_t {int dummy; } ;
struct diffstat_file {int is_interesting; int is_unmerged; int is_binary; void* added; void* deleted; int is_renamed; int comments; } ;
struct TYPE_7__ {scalar_t__ stat_with_summary; } ;
struct diff_options {int interhunkcontext; int context; int anchors_nr; int anchors; int xdl_opts; int repo; TYPE_1__ flags; } ;
struct diff_filespec {int path; int size; int data; int oid; } ;
struct diff_filepair {scalar_t__ status; scalar_t__ score; } ;
typedef int mmfile_t ;


 int FUNC_0 (struct diff_filepair*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ,struct diff_filespec*) ;
 void* FUNC_4 (int ,struct diff_filespec*) ;
 int FUNC_5 (struct diff_filespec*) ;
 int FUNC_6 (int ,struct diff_filespec*,int ) ;
 struct diffstat_file* FUNC_7 (struct diffstat_t*,char const*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ,int *,struct diff_filespec*) ;
 int FUNC_9 (struct diff_filepair*,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *,int ,int ,struct diffstat_t*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_13(const char *VAR_4, const char *VAR_5,
        struct diff_filespec *VAR_6,
        struct diff_filespec *VAR_7,
        struct diffstat_t *VAR_8,
        struct diff_options *VAR_9,
        struct diff_filepair *VAR_10)
{
 mmfile_t VAR_11, VAR_12;
 struct diffstat_file *VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 if (!FUNC_0(VAR_10)) {
  if (VAR_10->status == VAR_0 && VAR_10->score)
   VAR_15 = 1;
 }

 VAR_13 = FUNC_7(VAR_8, VAR_4, VAR_5);
 VAR_13->is_interesting = VAR_10->status != VAR_1;
 if (VAR_9->flags.stat_with_summary)
  VAR_13->comments = FUNC_9(VAR_10, VAR_13->is_renamed);

 if (!VAR_6 || !VAR_7) {
  VAR_13->is_unmerged = 1;
  return;
 }

 VAR_14 = FUNC_11(&VAR_6->oid, &VAR_7->oid);

 if (FUNC_3(VAR_9->repo, VAR_6) ||
     FUNC_3(VAR_9->repo, VAR_7)) {
  VAR_13->is_binary = 1;
  if (VAR_14) {
   VAR_13->added = 0;
   VAR_13->deleted = 0;
  } else {
   VAR_13->added = FUNC_4(VAR_9->repo, VAR_7);
   VAR_13->deleted = FUNC_4(VAR_9->repo, VAR_6);
  }
 }

 else if (VAR_15) {
  FUNC_6(VAR_9->repo, VAR_6, 0);
  FUNC_6(VAR_9->repo, VAR_7, 0);
  VAR_13->deleted = FUNC_1(VAR_6->data, VAR_6->size);
  VAR_13->added = FUNC_1(VAR_7->data, VAR_7->size);
 }

 else if (!VAR_14) {

  xpparam_t VAR_16;
  xdemitconf_t VAR_17;

  if (FUNC_8(VAR_9->repo, &VAR_11, VAR_6) < 0 ||
      FUNC_8(VAR_9->repo, &VAR_12, VAR_7) < 0)
   FUNC_2("unable to read files to diff");

  FUNC_10(&VAR_16, 0, sizeof(VAR_16));
  FUNC_10(&VAR_17, 0, sizeof(VAR_17));
  VAR_16.flags = VAR_9->xdl_opts;
  VAR_16.anchors = VAR_9->anchors;
  VAR_16.anchors_nr = VAR_9->anchors_nr;
  VAR_17.ctxlen = VAR_9->context;
  VAR_17.interhunkctxlen = VAR_9->interhunkcontext;
  if (FUNC_12(&VAR_11, &VAR_12, VAR_3,
      VAR_2, VAR_8, &VAR_16, &VAR_17))
   FUNC_2("unable to generate diffstat for %s", VAR_6->path);
 }

 FUNC_5(VAR_6);
 FUNC_5(VAR_7);
}
