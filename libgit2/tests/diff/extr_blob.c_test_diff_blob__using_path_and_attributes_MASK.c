
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_oid ;
typedef int git_config ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;
struct TYPE_13__ {int lines; int hunks; int files_binary; int * file_status; int files; } ;
struct TYPE_12__ {int flags; scalar_t__ context_lines; } ;


 TYPE_1__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int,int,int ,int,int ,TYPE_7__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 TYPE_7__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *,char*,char*) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *,char*,char const*,int,int *,TYPE_2__*) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (int **,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_18 (int *,char*,char const*,size_t,int *) ;
 int FUNC_19 (char const*) ;

void FUNC_20(void)
{
 git_config *VAR_6;
 git_blob *VAR_7, *VAR_8;
 git_oid VAR_9;
 const char *VAR_10 = "Hello from the root\n";
 const char *VAR_11 =
  "0123456789\n\x01\x02\x03\x04\x05\x06\x07\x08\x09\x00\n0123456789\n";
 size_t VAR_12 = 33;
 const char *VAR_13;
 git_patch *VAR_14;
 git_buf VAR_15 = VAR_0;



 FUNC_5(FUNC_17(&VAR_6, VAR_4));
 FUNC_5(FUNC_11(VAR_6, "diff.iam_binary.binary", 1));
 FUNC_5(FUNC_11(VAR_6, "diff.iam_text.binary", 0));
 FUNC_5(FUNC_12(
  VAR_6, "diff.iam_alphactx.xfuncname", "^[A-Za-z].*$"));
 FUNC_5(FUNC_11(VAR_6, "diff.iam_textalpha.binary", 0));
 FUNC_5(FUNC_12(
  VAR_6, "diff.iam_textalpha.xfuncname", "^[A-Za-z].*$"));
 FUNC_5(FUNC_12(
  VAR_6, "diff.iam_numctx.funcname", "^[0-9][0-9]*"));
 FUNC_5(FUNC_11(VAR_6, "diff.iam_textnum.binary", 0));
 FUNC_5(FUNC_12(
  VAR_6, "diff.iam_textnum.funcname", "^[0-9][0-9]*"));
 FUNC_10(VAR_6);

 FUNC_4(
  "attr/.gitattributes",
  "\n\n# test_diff_blob__using_path_and_attributes extra\n\n"
  "*.binary  diff=iam_binary\n"
  "*.textary diff=iam_text\n"
  "*.alphary diff=iam_alphactx\n"
  "*.textalphary diff=iam_textalpha\n"
  "*.textnumary diff=iam_textnum\n"
  "*.numary  diff=iam_numctx\n\n");

 VAR_5.context_lines = 0;
 VAR_5.flags |= VAR_2;

 FUNC_5(FUNC_13(&VAR_9, "45141a79", 8));
 FUNC_5(FUNC_7(&VAR_8, VAR_4, &VAR_9, 8));


 FUNC_5(FUNC_13(&VAR_9, "b435cd56", 8));
 FUNC_5(FUNC_7(&VAR_7, VAR_4, &VAR_9, 8));




 FUNC_18(VAR_8, ((void*)0), VAR_10, 0, ((void*)0));
 FUNC_0(&VAR_3);
 FUNC_2(0, VAR_3.files_binary);



 FUNC_18(VAR_7, ((void*)0), VAR_11, VAR_12, ((void*)0));
 FUNC_0(&VAR_3);
 FUNC_2(1, VAR_3.files_binary);



 VAR_13 = "Hello from the root\nMore lines\nAnd more\nGo here\n";

 FUNC_18(VAR_8, ((void*)0), VAR_13, 0, ((void*)0));
 FUNC_1(1, 3, 0, 3, 0, &VAR_3);

 FUNC_18(VAR_8, "foo/bar.binary", VAR_13, 0, ((void*)0));
 FUNC_2(1, VAR_3.files);
 FUNC_2(1, VAR_3.file_status[VAR_1]);
 FUNC_2(1, VAR_3.files_binary);
 FUNC_2(0, VAR_3.hunks);
 FUNC_2(0, VAR_3.lines);

 FUNC_18(VAR_8, "foo/bar.textary", VAR_13, 0, ((void*)0));
 FUNC_1(1, 3, 0, 3, 0, &VAR_3);

 FUNC_18(VAR_8, "foo/bar.alphary", VAR_13, 0, ((void*)0));
 FUNC_1(1, 3, 0, 3, 0, &VAR_3);

 FUNC_5(FUNC_15(
  &VAR_14, VAR_8, "zzz.normal", VAR_13, FUNC_19(VAR_13), ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.normal b/zzz.normal\n"
  "index 45141a7..75b0dbb 100644\n"
  "--- a/zzz.normal\n"
  "+++ b/zzz.normal\n"
  "@@ -1,0 +2,3 @@ Hello from the root\n"
  "+More lines\n"
  "+And more\n"
  "+Go here\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);

 FUNC_5(FUNC_15(
  &VAR_14, VAR_8, "zzz.binary", VAR_13, FUNC_19(VAR_13), ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.binary b/zzz.binary\n"
  "index 45141a7..75b0dbb 100644\n"
  "Binary files a/zzz.binary and b/zzz.binary differ\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);

 FUNC_5(FUNC_15(
  &VAR_14, VAR_8, "zzz.alphary", VAR_13, FUNC_19(VAR_13), ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.alphary b/zzz.alphary\n"
  "index 45141a7..75b0dbb 100644\n"
  "--- a/zzz.alphary\n"
  "+++ b/zzz.alphary\n"
  "@@ -1,0 +2,3 @@ Hello from the root\n"
  "+More lines\n"
  "+And more\n"
  "+Go here\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);

 FUNC_5(FUNC_15(
  &VAR_14, VAR_8, "zzz.numary", VAR_13, FUNC_19(VAR_13), ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.numary b/zzz.numary\n"
  "index 45141a7..75b0dbb 100644\n"
  "--- a/zzz.numary\n"
  "+++ b/zzz.numary\n"
  "@@ -1,0 +2,3 @@\n"
  "+More lines\n"
  "+And more\n"
  "+Go here\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);





 VAR_13 = "0123456789\n\x01\x02\x03\x04\x05\x06\x07\x08\x09\x00\nreplace a line\n";

 FUNC_5(FUNC_15(
  &VAR_14, VAR_7, "zzz.normal", VAR_13, 37, ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.normal b/zzz.normal\n"
  "index b435cd5..1604519 100644\n"
  "Binary files a/zzz.normal and b/zzz.normal differ\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);

 FUNC_5(FUNC_15(
  &VAR_14, VAR_7, "zzz.textary", VAR_13, 37, ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.textary b/zzz.textary\n"
  "index b435cd5..1604519 100644\n"
  "--- a/zzz.textary\n"
  "+++ b/zzz.textary\n"
  "@@ -3 +3 @@\n"
  "-0123456789\n"
  "+replace a line\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);

 FUNC_5(FUNC_15(
  &VAR_14, VAR_7, "zzz.textalphary", VAR_13, 37, ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.textalphary b/zzz.textalphary\n"
  "index b435cd5..1604519 100644\n"
  "--- a/zzz.textalphary\n"
  "+++ b/zzz.textalphary\n"
  "@@ -3 +3 @@\n"
  "-0123456789\n"
  "+replace a line\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);

 FUNC_5(FUNC_15(
  &VAR_14, VAR_7, "zzz.textnumary", VAR_13, 37, ((void*)0), &VAR_5));
 FUNC_5(FUNC_16(&VAR_15, VAR_14));
 FUNC_3(
  "diff --git a/zzz.textnumary b/zzz.textnumary\n"
  "index b435cd5..1604519 100644\n"
  "--- a/zzz.textnumary\n"
  "+++ b/zzz.textnumary\n"
  "@@ -3 +3 @@ 0123456789\n"
  "-0123456789\n"
  "+replace a line\n", VAR_15.ptr);
 FUNC_8(&VAR_15);
 FUNC_14(VAR_14);

 FUNC_9(&VAR_15);
 FUNC_6(VAR_8);
 FUNC_6(VAR_7);
}
