
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bisect_terms {char* term_bad; char* term_good; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*,char*,char*,...) ;
 int FUNC_5 (struct bisect_terms*,char*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct bisect_terms *VAR_0, const char *VAR_1)
{
 int VAR_2 = !FUNC_3(FUNC_2());

 if (FUNC_4(VAR_1, "skip", "start", "terms", ((void*)0)))
  return 0;

 if (VAR_2 && FUNC_6(VAR_1, VAR_0->term_bad) &&
     FUNC_6(VAR_1, VAR_0->term_good))
  return FUNC_1(FUNC_0("Invalid command: you're currently in a "
    "%s/%s bisect"), VAR_0->term_bad,
    VAR_0->term_good);

 if (!VAR_2) {
  if (FUNC_4(VAR_1, "bad", "good", ((void*)0))) {
   FUNC_5(VAR_0, "bad", "good");
   return FUNC_7(VAR_0->term_bad, VAR_0->term_good);
  }
  if (FUNC_4(VAR_1, "new", "old", ((void*)0))) {
   FUNC_5(VAR_0, "new", "old");
   return FUNC_7(VAR_0->term_bad, VAR_0->term_good);
  }
 }

 return 0;
}
