
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct shortlog {int wrap_lines; int in1; int in2; int file; int wrap; } ;
struct TYPE_4__ {int file; int use_color; } ;
struct rev_info {int creation_factor; int rdiff2; scalar_t__ rdiff1; int rdiff_title; TYPE_2__ diffopt; int idiff_title; scalar_t__ idiff_oid1; scalar_t__ numbered_files; int commit_format; } ;
struct TYPE_3__ {int type; } ;
struct pretty_print_context {int print_email_subject; struct rev_info* rev; TYPE_1__ date_mode; int fmt; int after_subject; int member_0; } ;
struct diff_options {int use_color; int file; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct diff_options*) ;
 int FUNC_4 (struct diff_options*) ;
 char* FUNC_5 (struct rev_info*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ,char*,int ) ;
 char* FUNC_8 (struct commit*,int *) ;
 char* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (struct rev_info*,struct commit*,int *,int*,int ) ;
 scalar_t__ FUNC_12 (int *,char*,struct rev_info*,int) ;
 int FUNC_13 (struct pretty_print_context*,int *,struct strbuf*,char const*,char const*) ;
 int FUNC_14 (struct pretty_print_context*,char const*,struct strbuf*,char const*,int) ;
 int FUNC_15 (struct shortlog*,struct commit*) ;
 int FUNC_16 (struct shortlog*) ;
 int FUNC_17 (struct shortlog*) ;
 int FUNC_18 (struct rev_info*,struct commit*,struct commit*) ;
 int FUNC_19 (struct rev_info*,int ) ;
 int FUNC_20 (scalar_t__,int ,int ,int,struct diff_options*) ;
 int FUNC_21 (struct strbuf*) ;
 int FUNC_22 (struct commit*,char const*) ;

__attribute__((used)) static void FUNC_23(struct rev_info *VAR_4, int VAR_5,
         struct commit *VAR_6,
         int VAR_7, struct commit **VAR_8,
         const char *VAR_9,
         int VAR_10)
{
 const char *VAR_11;
 struct shortlog VAR_12;
 struct strbuf VAR_13 = VAR_3;
 int VAR_14;
 const char *VAR_15 = "UTF-8";
 int VAR_16 = 0;
 struct pretty_print_context VAR_17 = {0};
 struct commit *VAR_18 = VAR_8[0];

 if (!FUNC_1(VAR_4->commit_format))
  FUNC_2(FUNC_0("cover letter needs email format"));

 VAR_11 = FUNC_9(0);

 if (!VAR_5 &&
     FUNC_12(((void*)0), VAR_4->numbered_files ? ((void*)0) : "cover-letter", VAR_4, VAR_10))
  FUNC_2(FUNC_0("failed to create cover-letter file"));

 FUNC_11(VAR_4, VAR_18, &VAR_17.after_subject, &VAR_16, 0);

 for (VAR_14 = 0; !VAR_16 && VAR_14 < VAR_7; VAR_14++) {
  const char *VAR_19 = FUNC_8(VAR_8[VAR_14], ((void*)0));
  if (FUNC_10(VAR_19))
   VAR_16 = 1;
  FUNC_22(VAR_8[VAR_14], VAR_19);
 }

 if (!VAR_9)
  VAR_9 = FUNC_5(VAR_4);

 VAR_17.fmt = VAR_0;
 VAR_17.date_mode.type = VAR_1;
 VAR_17.rev = VAR_4;
 VAR_17.print_email_subject = 1;
 FUNC_13(&VAR_17, ((void*)0), &VAR_13, VAR_11, VAR_15);
 FUNC_14(&VAR_17, VAR_9, &VAR_13, VAR_15, VAR_16);
 FUNC_6(VAR_4->diffopt.file, "%s\n", VAR_13.buf);

 FUNC_21(&VAR_13);

 FUNC_16(&VAR_12);
 VAR_12.wrap_lines = 1;
 VAR_12.wrap = VAR_2;
 VAR_12.in1 = 2;
 VAR_12.in2 = 4;
 VAR_12.file = VAR_4->diffopt.file;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  FUNC_15(&VAR_12, VAR_8[VAR_14]);

 FUNC_17(&VAR_12);


 if (VAR_6)
  FUNC_18(VAR_4, VAR_6, VAR_18);

 if (VAR_4->idiff_oid1) {
  FUNC_7(VAR_4->diffopt.file, "%s", VAR_4->idiff_title);
  FUNC_19(VAR_4, 0);
 }

 if (VAR_4->rdiff1) {




  struct diff_options VAR_20;
  FUNC_3(&VAR_20);
  VAR_20.file = VAR_4->diffopt.file;
  VAR_20.use_color = VAR_4->diffopt.use_color;
  FUNC_4(&VAR_20);
  FUNC_7(VAR_4->diffopt.file, "%s", VAR_4->rdiff_title);
  FUNC_20(VAR_4->rdiff1, VAR_4->rdiff2,
    VAR_4->creation_factor, 1, &VAR_20);
 }
}
