
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct emit_callback {char const** label_path; int ws_rule; void* ctxlen; int flags; int interhunkctxlen; int anchors_nr; int anchors; struct strbuf* header; struct diff_options* opt; int color_diff; } ;
typedef struct emit_callback xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef struct emit_callback xdemitconf_t ;
struct userdiff_funcname {int cflags; int pattern; } ;
struct userdiff_driver {int dummy; } ;
struct strbuf {scalar_t__ len; int buf; } ;
struct TYPE_14__ {scalar_t__ funccontext; scalar_t__ suppress_diff_headers; scalar_t__ binary; int text; scalar_t__ allow_textconv; scalar_t__ reverse_diff; } ;
struct diff_options {char* b_prefix; char* a_prefix; scalar_t__ submodule_format; int found_changes; scalar_t__ word_diff; TYPE_1__ flags; int interhunkcontext; void* context; int anchors_nr; int anchors; int xdl_opts; TYPE_5__* repo; int use_color; scalar_t__ irreversible_delete; } ;
struct diff_filespec {int mode; scalar_t__ path; int oid; int data; int dirty_submodule; } ;
struct TYPE_15__ {scalar_t__ size; char* ptr; } ;
typedef TYPE_2__ mmfile_t ;
typedef int ecbdata ;
struct TYPE_16__ {int index; } ;


 scalar_t__ FUNC_0 (struct diff_filespec*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,struct emit_callback*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (TYPE_5__*,struct diff_filespec*) ;
 int FUNC_6 (struct diff_filespec*) ;
 struct userdiff_funcname* FUNC_7 (struct diff_options*,struct diff_filespec*) ;
 char* FUNC_8 (struct diff_options*,int ) ;
 char* FUNC_9 (struct diff_options*) ;
 int FUNC_10 (struct diff_options*,char*,char*) ;
 int FUNC_11 (struct diff_options*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_12 (struct diff_options*,int ,int ,scalar_t__,int ) ;
 int FUNC_13 (char const*,char const*,struct diff_filespec*,struct diff_filespec*,struct userdiff_driver*,struct userdiff_driver*,struct diff_options*) ;
 scalar_t__ FUNC_14 (TYPE_5__*,TYPE_2__*,struct diff_filespec*) ;
 void* FUNC_15 (TYPE_5__*,struct userdiff_driver*,struct diff_filespec*,char**) ;
 int VAR_11 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct emit_callback*) ;
 struct userdiff_driver* FUNC_18 (TYPE_5__*,struct diff_filespec*) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (struct emit_callback*,struct diff_options*,struct diff_filespec*,struct diff_filespec*) ;
 int FUNC_21 (char*,char*,scalar_t__) ;
 int FUNC_22 (struct emit_callback*,int ,int) ;
 scalar_t__ FUNC_23 (int *,int *) ;
 char* FUNC_24 (char const*,char const*) ;
 int FUNC_25 (struct diff_options*,scalar_t__,int *,int *,int ) ;
 int FUNC_26 (struct diff_options*,scalar_t__,int *,int *,int ) ;
 scalar_t__ FUNC_27 (char const*,char*,char const**) ;
 int FUNC_28 (struct strbuf*,char*,char const*,char const*,...) ;
 int FUNC_29 (struct strbuf*,char const*) ;
 int FUNC_30 (struct strbuf*) ;
 int FUNC_31 (struct strbuf*) ;
 void* FUNC_32 (char const*,int *,int) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ,char const*) ;
 scalar_t__ FUNC_35 (TYPE_2__*,TYPE_2__*,int *,int ,struct emit_callback*,struct emit_callback*,struct emit_callback*) ;
 int FUNC_36 (struct emit_callback*) ;
 int FUNC_37 (struct emit_callback*,int ,int ) ;

__attribute__((used)) static void FUNC_38(const char *VAR_12,
    const char *VAR_13,
    struct diff_filespec *VAR_14,
    struct diff_filespec *VAR_15,
    const char *VAR_16,
    int VAR_17,
    struct diff_options *VAR_18,
    int VAR_19)
{
 mmfile_t VAR_20, VAR_21;
 const char *VAR_22[2];
 char *VAR_23, *VAR_24;
 const char *VAR_25 = FUNC_8(VAR_18, VAR_0);
 const char *VAR_26 = FUNC_8(VAR_18, VAR_1);
 const char *VAR_27, *VAR_28;
 struct userdiff_driver *VAR_29 = ((void*)0);
 struct userdiff_driver *VAR_30 = ((void*)0);
 struct strbuf VAR_31 = VAR_6;
 const char *VAR_32 = FUNC_9(VAR_18);

 FUNC_10(VAR_18, "a/", "b/");
 if (VAR_18->flags.reverse_diff) {
  VAR_27 = VAR_18->b_prefix;
  VAR_28 = VAR_18->a_prefix;
 } else {
  VAR_27 = VAR_18->a_prefix;
  VAR_28 = VAR_18->b_prefix;
 }

 if (VAR_18->submodule_format == VAR_3 &&
     (!VAR_14->mode || FUNC_1(VAR_14->mode)) &&
     (!VAR_15->mode || FUNC_1(VAR_15->mode))) {
  FUNC_26(VAR_18, VAR_14->path ? VAR_14->path : VAR_15->path,
    &VAR_14->oid, &VAR_15->oid,
    VAR_15->dirty_submodule);
  return;
 } else if (VAR_18->submodule_format == VAR_2 &&
     (!VAR_14->mode || FUNC_1(VAR_14->mode)) &&
     (!VAR_15->mode || FUNC_1(VAR_15->mode))) {
  FUNC_25(VAR_18, VAR_14->path ? VAR_14->path : VAR_15->path,
    &VAR_14->oid, &VAR_15->oid,
    VAR_15->dirty_submodule);
  return;
 }

 if (VAR_18->flags.allow_textconv) {
  VAR_29 = FUNC_18(VAR_18->repo, VAR_14);
  VAR_30 = FUNC_18(VAR_18->repo, VAR_15);
 }


 VAR_12 = FUNC_0(VAR_14) ? VAR_12 : VAR_13;
 VAR_13 = FUNC_0(VAR_15) ? VAR_13 : VAR_12;

 VAR_23 = FUNC_24(VAR_27, VAR_12 + (*VAR_12 == '/'));
 VAR_24 = FUNC_24(VAR_28, VAR_13 + (*VAR_13 == '/'));
 VAR_22[0] = FUNC_0(VAR_14) ? VAR_23 : "/dev/null";
 VAR_22[1] = FUNC_0(VAR_15) ? VAR_24 : "/dev/null";
 FUNC_28(&VAR_31, "%s%sdiff --git %s %s%s\n", VAR_32, VAR_25, VAR_23, VAR_24, VAR_26);
 if (VAR_22[0][0] == '/') {

  FUNC_28(&VAR_31, "%s%snew file mode %06o%s\n", VAR_32, VAR_25, VAR_15->mode, VAR_26);
  if (VAR_16)
   FUNC_29(&VAR_31, VAR_16);
  VAR_17 = 1;
 }
 else if (VAR_22[1][0] == '/') {
  FUNC_28(&VAR_31, "%s%sdeleted file mode %06o%s\n", VAR_32, VAR_25, VAR_14->mode, VAR_26);
  if (VAR_16)
   FUNC_29(&VAR_31, VAR_16);
  VAR_17 = 1;
 }
 else {
  if (VAR_14->mode != VAR_15->mode) {
   FUNC_28(&VAR_31, "%s%sold mode %06o%s\n", VAR_32, VAR_25, VAR_14->mode, VAR_26);
   FUNC_28(&VAR_31, "%s%snew mode %06o%s\n", VAR_32, VAR_25, VAR_15->mode, VAR_26);
   VAR_17 = 1;
  }
  if (VAR_16)
   FUNC_29(&VAR_31, VAR_16);





  if ((VAR_14->mode ^ VAR_15->mode) & VAR_7)
   goto free_ab_and_return;
  if (VAR_19 &&
      (VAR_29 || !FUNC_5(VAR_18->repo, VAR_14)) &&
      (VAR_30 || !FUNC_5(VAR_18->repo, VAR_15))) {
   FUNC_12(VAR_18, VAR_5,
      VAR_31.buf, VAR_31.len, 0);
   FUNC_31(&VAR_31);
   FUNC_13(VAR_12, VAR_13, VAR_14, VAR_15,
       VAR_29, VAR_30, VAR_18);
   VAR_18->found_changes = 1;
   goto free_ab_and_return;
  }
 }

 if (VAR_18->irreversible_delete && VAR_22[1][0] == '/') {
  FUNC_12(VAR_18, VAR_5, VAR_31.buf,
     VAR_31.len, 0);
  FUNC_31(&VAR_31);
  goto free_ab_and_return;
 } else if (!VAR_18->flags.text &&
     ( (!VAR_29 && FUNC_5(VAR_18->repo, VAR_14)) ||
       (!VAR_30 && FUNC_5(VAR_18->repo, VAR_15)) )) {
  struct strbuf VAR_33 = VAR_6;
  if (!VAR_14->data && !VAR_15->data &&
      FUNC_2(VAR_14->mode) && FUNC_2(VAR_15->mode) &&
      !VAR_18->flags.binary) {
   if (FUNC_23(&VAR_14->oid, &VAR_15->oid)) {
    if (VAR_17)
     FUNC_12(VAR_18, VAR_5,
        VAR_31.buf, VAR_31.len,
        0);
    goto free_ab_and_return;
   }
   FUNC_12(VAR_18, VAR_5,
      VAR_31.buf, VAR_31.len, 0);
   FUNC_28(&VAR_33, "%sBinary files %s and %s differ\n",
        FUNC_9(VAR_18), VAR_22[0], VAR_22[1]);
   FUNC_12(VAR_18, VAR_4,
      VAR_33.buf, VAR_33.len, 0);
   FUNC_30(&VAR_33);
   goto free_ab_and_return;
  }
  if (FUNC_14(VAR_18->repo, &VAR_20, VAR_14) < 0 ||
      FUNC_14(VAR_18->repo, &VAR_21, VAR_15) < 0)
   FUNC_4("unable to read files to diff");

  if (VAR_20 == VAR_21 &&
      !FUNC_21(VAR_20, VAR_21, VAR_20)) {
   if (VAR_17)
    FUNC_12(VAR_18, VAR_5,
       VAR_31.buf, VAR_31.len, 0);
   goto free_ab_and_return;
  }
  FUNC_12(VAR_18, VAR_5, VAR_31.buf, VAR_31.len, 0);
  FUNC_31(&VAR_31);
  if (VAR_18->flags.binary)
   FUNC_11(VAR_18, &VAR_20, &VAR_21);
  else {
   FUNC_28(&VAR_33, "%sBinary files %s and %s differ\n",
        FUNC_9(VAR_18), VAR_22[0], VAR_22[1]);
   FUNC_12(VAR_18, VAR_4,
      VAR_33.buf, VAR_33.len, 0);
   FUNC_30(&VAR_33);
  }
  VAR_18->found_changes = 1;
 } else {

  const char *VAR_34;
  const char *VAR_35;
  xpparam_t VAR_36;
  xdemitconf_t VAR_37;
  struct emit_callback VAR_38;
  const struct userdiff_funcname *VAR_39;

  if (VAR_17) {
   FUNC_12(VAR_18, VAR_5,
      VAR_31.buf, VAR_31.len, 0);
   FUNC_31(&VAR_31);
  }

  VAR_20 = FUNC_15(VAR_18->repo, VAR_29, VAR_14, &VAR_20);
  VAR_21 = FUNC_15(VAR_18->repo, VAR_30, VAR_15, &VAR_21);

  VAR_39 = FUNC_7(VAR_18, VAR_14);
  if (!VAR_39)
   VAR_39 = FUNC_7(VAR_18, VAR_15);

  FUNC_22(&VAR_36, 0, sizeof(VAR_36));
  FUNC_22(&VAR_37, 0, sizeof(VAR_37));
  FUNC_22(&VAR_38, 0, sizeof(VAR_38));
  if (VAR_18->flags.suppress_diff_headers)
   VAR_22[0] = ((void*)0);
  VAR_38.label_path = VAR_22;
  VAR_38.color_diff = FUNC_33(VAR_18->use_color);
  VAR_38.ws_rule = FUNC_34(VAR_18->repo->index, VAR_13);
  if (VAR_38.ws_rule & VAR_8)
   FUNC_3(&VAR_20, &VAR_21, &VAR_38);
  VAR_38.opt = VAR_18;
  if (VAR_31.len && !VAR_18->flags.suppress_diff_headers)
   VAR_38.header = &VAR_31;
  VAR_36.flags = VAR_18->xdl_opts;
  VAR_36.anchors = VAR_18->anchors;
  VAR_36.anchors_nr = VAR_18->anchors_nr;
  VAR_37.ctxlen = VAR_18->context;
  VAR_37.interhunkctxlen = VAR_18->interhunkcontext;
  VAR_37.flags = VAR_10;
  if (VAR_18->flags.funccontext)
   VAR_37.flags |= VAR_9;
  if (VAR_39)
   FUNC_37(&VAR_37, VAR_39->pattern, VAR_39->cflags);

  VAR_34 = FUNC_19("GIT_DIFF_OPTS");
  if (!VAR_34)
   ;
  else if (FUNC_27(VAR_34, "--unified=", &VAR_35))
   VAR_37.ctxlen = FUNC_32(VAR_35, ((void*)0), 10);
  else if (FUNC_27(VAR_34, "-u", &VAR_35))
   VAR_37.ctxlen = FUNC_32(VAR_35, ((void*)0), 10);

  if (VAR_18->word_diff)
   FUNC_20(&VAR_38, VAR_18, VAR_14, VAR_15);
  if (FUNC_35(&VAR_20, &VAR_21, ((void*)0), VAR_11,
      &VAR_38, &VAR_36, &VAR_37))
   FUNC_4("unable to generate diff for %s", VAR_14->path);
  if (VAR_18->word_diff)
   FUNC_17(&VAR_38);
  if (VAR_29)
   FUNC_16(VAR_20);
  if (VAR_30)
   FUNC_16(VAR_21);
  FUNC_36(&VAR_37);
 }

 free_ab_and_return:
 FUNC_30(&VAR_31);
 FUNC_6(VAR_14);
 FUNC_6(VAR_15);
 FUNC_16(VAR_23);
 FUNC_16(VAR_24);
 return;
}
