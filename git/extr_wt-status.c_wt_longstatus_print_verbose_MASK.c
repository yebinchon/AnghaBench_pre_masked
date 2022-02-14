
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wt_status {scalar_t__ detect_rename; scalar_t__ rename_limit; scalar_t__ rename_score; scalar_t__ fp; int verbose; scalar_t__ committable; int reference; scalar_t__ is_initial; int repo; } ;
struct setup_revision_opt {int def; } ;
struct TYPE_3__ {int allow_textconv; } ;
struct TYPE_4__ {int ita_invisible_in_index; scalar_t__ detect_rename; scalar_t__ rename_limit; scalar_t__ rename_score; scalar_t__ file; char* a_prefix; char* b_prefix; scalar_t__ use_color; scalar_t__ close_file; int output_format; TYPE_1__ flags; } ;
struct rev_info {TYPE_2__ diffopt; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ,struct wt_status*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct setup_revision_opt*,int ,int) ;
 int FUNC_4 (int ,struct rev_info*,int *) ;
 int FUNC_5 (struct rev_info*,int ) ;
 int FUNC_6 (struct rev_info*,int) ;
 int FUNC_7 (int ,int *,struct rev_info*,struct setup_revision_opt*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct wt_status*,char const*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (struct wt_status*) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (struct wt_status*,int*) ;

__attribute__((used)) static void FUNC_13(struct wt_status *VAR_3)
{
 struct rev_info VAR_4;
 struct setup_revision_opt VAR_5;
 int VAR_6;
 const char *VAR_7 = FUNC_1(VAR_1, VAR_3);

 FUNC_4(VAR_3->repo, &VAR_4, ((void*)0));
 VAR_4.diffopt.flags.allow_textconv = 1;
 VAR_4.diffopt.ita_invisible_in_index = 1;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.def = VAR_3->is_initial ? FUNC_2() : VAR_3->reference;
 FUNC_7(0, ((void*)0), &VAR_4, &VAR_5);

 VAR_4.diffopt.output_format |= VAR_0;
 VAR_4.diffopt.detect_rename = VAR_3->detect_rename >= 0 ? VAR_3->detect_rename : VAR_4.diffopt.detect_rename;
 VAR_4.diffopt.rename_limit = VAR_3->rename_limit >= 0 ? VAR_3->rename_limit : VAR_4.diffopt.rename_limit;
 VAR_4.diffopt.rename_score = VAR_3->rename_score >= 0 ? VAR_3->rename_score : VAR_4.diffopt.rename_score;
 VAR_4.diffopt.file = VAR_3->fp;
 VAR_4.diffopt.close_file = 0;
 if (VAR_3->fp != VAR_2) {
  VAR_4.diffopt.use_color = 0;
  FUNC_11(VAR_3->fp);
 }
 if (VAR_3->verbose > 1 && VAR_3->committable) {

  if (VAR_3->fp != VAR_2)
   FUNC_10(VAR_3);
  FUNC_9(VAR_3, VAR_7, FUNC_0("Changes to be committed:"));
  VAR_4.diffopt.a_prefix = "c/";
  VAR_4.diffopt.b_prefix = "i/";
 }
 FUNC_6(&VAR_4, 1);
 if (VAR_3->verbose > 1 &&
     FUNC_12(VAR_3, &VAR_6)) {
  FUNC_9(VAR_3, VAR_7,
   "--------------------------------------------------");
  FUNC_9(VAR_3, VAR_7, FUNC_0("Changes not staged for commit:"));
  FUNC_8();
  VAR_4.diffopt.a_prefix = "i/";
  VAR_4.diffopt.b_prefix = "w/";
  FUNC_5(&VAR_4, 0);
 }
}
