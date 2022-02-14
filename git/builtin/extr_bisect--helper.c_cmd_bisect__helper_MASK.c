
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct bisect_terms {int * term_bad; int * term_good; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,int ) ;
 struct option FUNC_2 (int ,char*,int*,int ,int) ;
 struct option FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (struct bisect_terms*,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct bisect_terms*,int,char const**,int) ;
 int FUNC_10 (struct bisect_terms*,char const*) ;
 int FUNC_11 (char const*,char const*,struct bisect_terms*,int) ;
 int FUNC_12 (struct bisect_terms*,char const*) ;
 int FUNC_13 (char const**,int) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct bisect_terms*) ;
 int VAR_2 ;
 int FUNC_16 (int,char const**,char const*,struct option*,int ,int) ;
 int FUNC_17 (struct bisect_terms*,char const*,char const*) ;
 int VAR_3 ;
 int FUNC_18 (int ,struct option*) ;
 int FUNC_19 (char const*,char const*) ;

int FUNC_20(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 enum {
  NEXT_ALL = 1,
  WRITE_TERMS,
  BISECT_CLEAN_STATE,
  CHECK_EXPECTED_REVS,
  BISECT_RESET,
  BISECT_WRITE,
  CHECK_AND_SET_TERMS,
  BISECT_NEXT_CHECK,
  BISECT_TERMS,
  BISECT_START
 } VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct option VAR_11[] = {
  FUNC_2(0, "next-all", &VAR_7,
    FUNC_0("perform 'git bisect next'"), NEXT_ALL),
  FUNC_2(0, "write-terms", &VAR_7,
    FUNC_0("write the terms to .git/BISECT_TERMS"), WRITE_TERMS),
  FUNC_2(0, "bisect-clean-state", &VAR_7,
    FUNC_0("cleanup the bisection state"), BISECT_CLEAN_STATE),
  FUNC_2(0, "check-expected-revs", &VAR_7,
    FUNC_0("check for expected revs"), CHECK_EXPECTED_REVS),
  FUNC_2(0, "bisect-reset", &VAR_7,
    FUNC_0("reset the bisection state"), BISECT_RESET),
  FUNC_2(0, "bisect-write", &VAR_7,
    FUNC_0("write out the bisection state in BISECT_LOG"), BISECT_WRITE),
  FUNC_2(0, "check-and-set-terms", &VAR_7,
    FUNC_0("check and set terms in a bisection state"), CHECK_AND_SET_TERMS),
  FUNC_2(0, "bisect-next-check", &VAR_7,
    FUNC_0("check whether bad or good terms exist"), BISECT_NEXT_CHECK),
  FUNC_2(0, "bisect-terms", &VAR_7,
    FUNC_0("print out the bisect terms"), BISECT_TERMS),
  FUNC_2(0, "bisect-start", &VAR_7,
    FUNC_0("start the bisect session"), BISECT_START),
  FUNC_1(0, "no-checkout", &VAR_8,
    FUNC_0("update BISECT_HEAD instead of checking out the current commit")),
  FUNC_1(0, "no-log", &VAR_10,
    FUNC_0("no log for BISECT_WRITE")),
  FUNC_3()
 };
 struct bisect_terms VAR_12 = { .term_good = ((void*)0), .term_bad = ((void*)0) };

 VAR_4 = FUNC_16(VAR_4, VAR_5, VAR_6, VAR_11,
        VAR_2,
        VAR_0 | VAR_1);

 if (!VAR_7)
  FUNC_18(VAR_2, VAR_11);

 switch (VAR_7) {
 case NEXT_ALL:
  return FUNC_6(VAR_3, VAR_6, VAR_8);
 case WRITE_TERMS:
  if (VAR_4 != 2)
   return FUNC_14(FUNC_4("--write-terms requires two arguments"));
  return FUNC_19(VAR_5[0], VAR_5[1]);
 case BISECT_CLEAN_STATE:
  if (VAR_4 != 0)
   return FUNC_14(FUNC_4("--bisect-clean-state requires no arguments"));
  return FUNC_5();
 case CHECK_EXPECTED_REVS:
  FUNC_13(VAR_5, VAR_4);
  return 0;
 case BISECT_RESET:
  if (VAR_4 > 1)
   return FUNC_14(FUNC_4("--bisect-reset requires either no argument or a commit"));
  return !!FUNC_8(VAR_4 ? VAR_5[0] : ((void*)0));
 case BISECT_WRITE:
  if (VAR_4 != 4 && VAR_4 != 5)
   return FUNC_14(FUNC_4("--bisect-write requires either 4 or 5 arguments"));
  FUNC_17(&VAR_12, VAR_5[3], VAR_5[2]);
  VAR_9 = FUNC_11(VAR_5[0], VAR_5[1], &VAR_12, VAR_10);
  break;
 case CHECK_AND_SET_TERMS:
  if (VAR_4 != 3)
   return FUNC_14(FUNC_4("--check-and-set-terms requires 3 arguments"));
  FUNC_17(&VAR_12, VAR_5[2], VAR_5[1]);
  VAR_9 = FUNC_12(&VAR_12, VAR_5[0]);
  break;
 case BISECT_NEXT_CHECK:
  if (VAR_4 != 2 && VAR_4 != 3)
   return FUNC_14(FUNC_4("--bisect-next-check requires 2 or 3 arguments"));
  FUNC_17(&VAR_12, VAR_5[1], VAR_5[0]);
  VAR_9 = FUNC_7(&VAR_12, VAR_4 == 3 ? VAR_5[2] : ((void*)0));
  break;
 case BISECT_TERMS:
  if (VAR_4 > 1)
   return FUNC_14(FUNC_4("--bisect-terms requires 0 or 1 argument"));
  VAR_9 = FUNC_10(&VAR_12, VAR_4 == 1 ? VAR_5[0] : ((void*)0));
  break;
 case BISECT_START:
  FUNC_17(&VAR_12, "bad", "good");
  VAR_9 = FUNC_9(&VAR_12, VAR_8, VAR_5, VAR_4);
  break;
 default:
  return FUNC_14("BUG: unknown subcommand '%d'", VAR_7);
 }
 FUNC_15(&VAR_12);
 return !!VAR_9;
}
