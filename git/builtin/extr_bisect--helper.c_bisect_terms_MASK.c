
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bisect_terms {char* term_good; char* term_bad; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct bisect_terms*) ;
 scalar_t__ FUNC_3 (char const*,char*,char*,int *) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct bisect_terms *VAR_0, const char *VAR_1)
{
 if (FUNC_2(VAR_0))
  return FUNC_1(FUNC_0("no terms defined"));

 if (VAR_1 == ((void*)0)) {
  FUNC_4(FUNC_0("Your current terms are %s for the old state\n"
    "and %s for the new state.\n"),
         VAR_0->term_good, VAR_0->term_bad);
  return 0;
 }
 if (FUNC_3(VAR_1, "--term-good", "--term-old", ((void*)0)))
  FUNC_4("%s\n", VAR_0->term_good);
 else if (FUNC_3(VAR_1, "--term-bad", "--term-new", ((void*)0)))
  FUNC_4("%s\n", VAR_0->term_bad);
 else
  return FUNC_1(FUNC_0("invalid argument %s for 'git bisect terms'.\n"
          "Supported options are: "
          "--term-good|--term-old and "
          "--term-bad|--term-new."), VAR_1);

 return 0;
}
