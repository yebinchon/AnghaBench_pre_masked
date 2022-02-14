
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int argv; } ;
struct am_state {int threeway; int quiet; int signoff; int utf8; scalar_t__ allow_rerere_autoupdate; int keep; int message_id; int scissors; int last; int cur; scalar_t__ rebasing; TYPE_1__ git_apply_opts; int dir; } ;
typedef enum patch_format { ____Placeholder_patch_format } patch_format ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;



 int VAR_1 ;
 scalar_t__ VAR_2 ;



 struct strbuf VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct am_state*) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,struct object_id*) ;
 scalar_t__ FUNC_10 (int ,int) ;
 char* FUNC_11 (struct object_id*) ;
 scalar_t__ FUNC_12 (struct am_state*,int,char const**,int) ;
 int FUNC_13 (struct strbuf*,int ) ;
 int VAR_6 ;
 int FUNC_14 (struct strbuf*) ;
 int FUNC_15 (char*,char*,struct object_id*,int *,int ,int ) ;
 int FUNC_16 (struct am_state*,char*,int) ;
 int FUNC_17 (struct am_state*,char*,int ) ;
 int FUNC_18 (struct am_state*,char*,char const*) ;

__attribute__((used)) static void FUNC_19(struct am_state *VAR_7, enum patch_format VAR_8,
   const char **VAR_9, int VAR_10)
{
 struct object_id VAR_11;
 const char *VAR_12;
 struct strbuf VAR_13 = VAR_3;

 if (!VAR_8)
  VAR_8 = FUNC_4(VAR_9);

 if (!VAR_8) {
  FUNC_8(VAR_6, FUNC_1("Patch format detection failed."));
  FUNC_7(128);
 }

 if (FUNC_10(VAR_7->dir, 0777) < 0 && VAR_5 != VAR_0)
  FUNC_6(FUNC_1("failed to create directory '%s'"), VAR_7->dir);
 FUNC_3(((void*)0), "REBASE_HEAD", ((void*)0), VAR_1);

 if (FUNC_12(VAR_7, VAR_8, VAR_9, VAR_10) < 0) {
  FUNC_2(VAR_7);
  FUNC_5(FUNC_1("Failed to split patches."));
 }

 if (VAR_7->rebasing)
  VAR_7->threeway = 1;

 FUNC_16(VAR_7, "threeway", VAR_7->threeway);
 FUNC_16(VAR_7, "quiet", VAR_7->quiet);
 FUNC_16(VAR_7, "sign", VAR_7->signoff);
 FUNC_16(VAR_7, "utf8", VAR_7->utf8);

 if (VAR_7->allow_rerere_autoupdate)
  FUNC_16(VAR_7, "rerere-autoupdate",
    VAR_7->allow_rerere_autoupdate == VAR_2);

 switch (VAR_7->keep) {
 case 133:
  VAR_12 = "f";
  break;
 case 131:
  VAR_12 = "t";
  break;
 case 132:
  VAR_12 = "b";
  break;
 default:
  FUNC_0("invalid value for state->keep");
 }

 FUNC_18(VAR_7, "keep", VAR_12);
 FUNC_16(VAR_7, "messageid", VAR_7->message_id);

 switch (VAR_7->scissors) {
 case 128:
  VAR_12 = "";
  break;
 case 130:
  VAR_12 = "f";
  break;
 case 129:
  VAR_12 = "t";
  break;
 default:
  FUNC_0("invalid value for state->scissors");
 }
 FUNC_18(VAR_7, "scissors", VAR_12);

 FUNC_13(&VAR_13, VAR_7->git_apply_opts.argv);
 FUNC_18(VAR_7, "apply-opt", VAR_13.buf);

 if (VAR_7->rebasing)
  FUNC_18(VAR_7, "rebasing", "");
 else
  FUNC_18(VAR_7, "applying", "");

 if (!FUNC_9("HEAD", &VAR_11)) {
  FUNC_18(VAR_7, "abort-safety", FUNC_11(&VAR_11));
  if (!VAR_7->rebasing)
   FUNC_15("am", "ORIG_HEAD", &VAR_11, ((void*)0), 0,
       VAR_4);
 } else {
  FUNC_18(VAR_7, "abort-safety", "");
  if (!VAR_7->rebasing)
   FUNC_3(((void*)0), "ORIG_HEAD", ((void*)0), 0);
 }






 FUNC_17(VAR_7, "next", VAR_7->cur);
 FUNC_17(VAR_7, "last", VAR_7->last);

 FUNC_14(&VAR_13);
}
