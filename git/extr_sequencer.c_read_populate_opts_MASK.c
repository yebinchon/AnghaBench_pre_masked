
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct replay_opts {int verbose; int quiet; int signoff; int reschedule_failed_exec; int current_fixup_count; int have_squash_onto; int squash_onto; struct strbuf current_fixups; scalar_t__ allow_ff; int allow_rerere_auto; int gpg_sign; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (int ,int ,struct replay_opts*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct replay_opts*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (struct strbuf*,int ,int) ;
 int FUNC_9 (struct replay_opts*,struct strbuf*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (struct strbuf*) ;
 int FUNC_20 (struct strbuf*) ;
 char* FUNC_21 (char const*,char) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static int FUNC_24(struct replay_opts *VAR_4)
{
 if (FUNC_7(VAR_4)) {
  struct strbuf VAR_5 = VAR_2;

  if (FUNC_8(&VAR_5, FUNC_12(), 1)) {
   if (!FUNC_18(VAR_5.buf, "-S"))
    FUNC_20(&VAR_5);
   else {
    FUNC_3(VAR_4->gpg_sign);
    VAR_4->gpg_sign = FUNC_23(VAR_5.buf + 2);
   }
   FUNC_20(&VAR_5);
  }

  if (FUNC_8(&VAR_5, FUNC_10(), 1)) {
   if (!FUNC_22(VAR_5.buf, "--rerere-autoupdate"))
    VAR_4->allow_rerere_auto = VAR_0;
   else if (!FUNC_22(VAR_5.buf, "--no-rerere-autoupdate"))
    VAR_4->allow_rerere_auto = VAR_1;
   FUNC_20(&VAR_5);
  }

  if (FUNC_2(FUNC_17()))
   VAR_4->verbose = 1;

  if (FUNC_2(FUNC_13()))
   VAR_4->quiet = 1;

  if (FUNC_2(FUNC_15())) {
   VAR_4->allow_ff = 0;
   VAR_4->signoff = 1;
  }

  if (FUNC_2(FUNC_14()))
   VAR_4->reschedule_failed_exec = 1;

  FUNC_9(VAR_4, &VAR_5);
  FUNC_19(&VAR_5);

  if (FUNC_8(&VAR_4->current_fixups,
      FUNC_11(), 1)) {
   const char *VAR_6 = VAR_4->current_fixups.buf;
   VAR_4->current_fixup_count = 1;
   while ((VAR_6 = FUNC_21(VAR_6, '\n'))) {
    VAR_4->current_fixup_count++;
    VAR_6++;
   }
  }

  if (FUNC_8(&VAR_5, FUNC_16(), 0)) {
   if (FUNC_4(VAR_5.buf, &VAR_4->squash_onto) < 0)
    return FUNC_1(FUNC_0("unusable squash-onto"));
   VAR_4->have_squash_onto = 1;
  }

  return 0;
 }

 if (!FUNC_2(FUNC_6()))
  return 0;






 if (FUNC_5(VAR_3, FUNC_6(), VAR_4) < 0)
  return FUNC_1(FUNC_0("malformed options sheet: '%s'"),
   FUNC_6());
 return 0;
}
