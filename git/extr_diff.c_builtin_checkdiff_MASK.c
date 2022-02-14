
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct checkdiff_t {char const* filename; int ws_rule; int ctxlen; int status; scalar_t__ flags; int conflict_marker_size; struct diff_options* o; scalar_t__ lineno; } ;
typedef struct checkdiff_t xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef struct checkdiff_t xdemitconf_t ;
struct emit_callback {int ws_rule; int blank_at_eof_in_postimage; } ;
struct TYPE_4__ {int check_failed; } ;
struct diff_options {TYPE_1__ flags; int file; TYPE_2__* repo; } ;
struct diff_filespec {int path; } ;
typedef int mmfile_t ;
typedef int data ;
struct TYPE_5__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct emit_callback*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct diff_filespec*) ;
 int FUNC_3 (struct diff_filespec*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,struct diff_filespec*) ;
 int FUNC_5 (int ,char*,char const*,int,char*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct checkdiff_t*,int ,int) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int ,char const*) ;
 scalar_t__ FUNC_10 (int *,int *,int ,int ,struct checkdiff_t*,struct checkdiff_t*,struct checkdiff_t*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_3, const char *VAR_4,
         const char *VAR_5,
         struct diff_filespec *VAR_6,
         struct diff_filespec *VAR_7,
         struct diff_options *VAR_8)
{
 mmfile_t VAR_9, VAR_10;
 struct checkdiff_t VAR_11;

 if (!VAR_7)
  return;

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.filename = VAR_4 ? VAR_4 : VAR_3;
 VAR_11.lineno = 0;
 VAR_11.o = VAR_8;
 VAR_11.ws_rule = FUNC_9(VAR_8->repo->index, VAR_5);
 VAR_11.conflict_marker_size = FUNC_6(VAR_8->repo->index, VAR_5);

 if (FUNC_4(VAR_8->repo, &VAR_9, VAR_6) < 0 ||
     FUNC_4(VAR_8->repo, &VAR_10, VAR_7) < 0)
  FUNC_1("unable to read files to diff");







 if (FUNC_2(VAR_8->repo, VAR_7))
  goto free_and_return;
 else {

  xpparam_t VAR_12;
  xdemitconf_t VAR_13;

  FUNC_7(&VAR_12, 0, sizeof(VAR_12));
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.ctxlen = 1;
  VAR_12.flags = 0;
  if (FUNC_10(&VAR_9, &VAR_10, VAR_2,
      VAR_1, &VAR_11,
      &VAR_12, &VAR_13))
   FUNC_1("unable to generate checkdiff for %s", VAR_6->path);

  if (VAR_11.ws_rule & VAR_0) {
   struct emit_callback VAR_14;
   int VAR_15;

   VAR_14.ws_rule = VAR_11.ws_rule;
   FUNC_0(&VAR_9, &VAR_10, &VAR_14);
   VAR_15 = VAR_14.blank_at_eof_in_postimage;

   if (VAR_15) {
    static char *VAR_16;
    if (!VAR_16)
     VAR_16 = FUNC_8(VAR_0);
    FUNC_5(VAR_8->file, "%s:%d: %s.\n",
     VAR_11.filename, VAR_15, VAR_16);
    VAR_11.status = 1;
   }
  }
 }
 free_and_return:
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 if (VAR_11.status)
  VAR_8->flags.check_failed = 1;
}
