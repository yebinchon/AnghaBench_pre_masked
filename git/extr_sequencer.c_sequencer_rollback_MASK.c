
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct object_id {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct object_id*) ;
 scalar_t__ FUNC_8 (int ,struct object_id*,char const**) ;
 scalar_t__ FUNC_9 (struct object_id*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct repository*) ;
 int FUNC_12 (struct replay_opts*) ;
 scalar_t__ FUNC_13 (struct strbuf*,int *) ;
 int FUNC_14 (struct strbuf*) ;
 char* FUNC_15 (scalar_t__) ;
 int FUNC_16 (char*) ;

int FUNC_17(struct repository *VAR_3, struct replay_opts *VAR_4)
{
 FILE *VAR_5;
 struct object_id VAR_6;
 struct strbuf VAR_7 = VAR_1;
 const char *VAR_8;

 VAR_5 = FUNC_5(FUNC_6(), "r");
 if (!VAR_5 && VAR_2 == VAR_0) {





  return FUNC_11(VAR_3);
 }
 if (!VAR_5)
  return FUNC_2(FUNC_0("cannot open '%s'"), FUNC_6());
 if (FUNC_13(&VAR_7, VAR_5)) {
  FUNC_1(FUNC_0("cannot read '%s': %s"), FUNC_6(),
        FUNC_4(VAR_5) ? FUNC_15(VAR_2) : FUNC_0("unexpected end of file"));
  FUNC_3(VAR_5);
  goto fail;
 }
 FUNC_3(VAR_5);
 if (FUNC_8(VAR_7.buf, &VAR_6, &VAR_8) || *VAR_8 != '\0') {
  FUNC_1(FUNC_0("stored pre-cherry-pick HEAD file '%s' is corrupt"),
   FUNC_6());
  goto fail;
 }
 if (FUNC_7(&VAR_6)) {
  FUNC_1(FUNC_0("cannot abort from a branch yet to be born"));
  goto fail;
 }

 if (!FUNC_10()) {

  FUNC_16(FUNC_0("You seem to have moved HEAD. "
     "Not rewinding, check your HEAD!"));
 } else
 if (FUNC_9(&VAR_6))
  goto fail;
 FUNC_14(&VAR_7);
 return FUNC_12(VAR_4);
fail:
 FUNC_14(&VAR_7);
 return -1;
}
