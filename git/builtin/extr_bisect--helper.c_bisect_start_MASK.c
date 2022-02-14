
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {char const* buf; } ;
struct object_id {int dummy; } ;
struct bisect_terms {char const* term_good; char const* term_bad; } ;
struct argv_array {int argv; } ;
struct TYPE_2__ {int string; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 struct string_list VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*,char*,char const*,char*,int *) ;
 int FUNC_2 (char const**) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,struct bisect_terms*,int) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,struct object_id*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ) ;
 char const* FUNC_14 (struct object_id*) ;
 int FUNC_15 (char const*,char*,char*,int *) ;
 char* FUNC_16 (char*,int ,struct object_id*,int*) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (char const*,char*,char const**) ;
 int FUNC_19 (struct strbuf*,char const**) ;
 scalar_t__ FUNC_20 (char const*,char*) ;
 int FUNC_21 (struct strbuf*,char const*) ;
 int FUNC_22 (struct strbuf*,int ,int ) ;
 int FUNC_23 (struct strbuf*) ;
 int FUNC_24 (struct strbuf*) ;
 int FUNC_25 (struct strbuf*) ;
 int FUNC_26 (char const*,char*) ;
 int FUNC_27 (struct string_list*,char const*) ;
 int FUNC_28 (struct string_list*,int ) ;
 scalar_t__ FUNC_29 (int *,char*,struct object_id*,int *,int ,int ) ;
 int FUNC_30 (int ,char*,char const*) ;
 scalar_t__ FUNC_31 (char const*,char const*) ;
 void* FUNC_32 (char const*) ;
 char* FUNC_33 (char*,char const*) ;

__attribute__((used)) static int FUNC_34(struct bisect_terms *VAR_5, int VAR_6,
   const char **VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15 = 0;
 struct string_list VAR_16 = VAR_3;
 struct string_list VAR_17 = VAR_3;
 struct strbuf VAR_18 = VAR_2;
 struct strbuf VAR_19 = VAR_2;
 struct object_id VAR_20;
 struct object_id VAR_21;
 const char *VAR_22;

 if (FUNC_12())
  VAR_6 = 1;




 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (!FUNC_26(VAR_7[VAR_9], "--")) {
   VAR_10 = 1;
   break;
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  const char *VAR_23 = VAR_7[VAR_9];
  if (!FUNC_26(VAR_7[VAR_9], "--")) {
   break;
  } else if (!FUNC_26(VAR_23, "--no-checkout")) {
   VAR_6 = 1;
  } else if (!FUNC_26(VAR_23, "--term-good") ||
    !FUNC_26(VAR_23, "--term-old")) {
   VAR_11 = 1;
   FUNC_7((void *) VAR_5->term_good);
   VAR_5->term_good = FUNC_32(VAR_7[++VAR_9]);
  } else if (FUNC_18(VAR_23, "--term-good=", &VAR_23) ||
      FUNC_18(VAR_23, "--term-old=", &VAR_23)) {
   VAR_11 = 1;
   FUNC_7((void *) VAR_5->term_good);
   VAR_5->term_good = FUNC_32(VAR_23);
  } else if (!FUNC_26(VAR_23, "--term-bad") ||
    !FUNC_26(VAR_23, "--term-new")) {
   VAR_11 = 1;
   FUNC_7((void *) VAR_5->term_bad);
   VAR_5->term_bad = FUNC_32(VAR_7[++VAR_9]);
  } else if (FUNC_18(VAR_23, "--term-bad=", &VAR_23) ||
      FUNC_18(VAR_23, "--term-new=", &VAR_23)) {
   VAR_11 = 1;
   FUNC_7((void *) VAR_5->term_bad);
   VAR_5->term_bad = FUNC_32(VAR_23);
  } else if (FUNC_20(VAR_23, "--") &&
    !FUNC_15(VAR_23, "--term-good", "--term-bad", ((void*)0))) {
   return FUNC_6(FUNC_0("unrecognized option: '%s'"), VAR_23);
  } else {
   char *VAR_24 = FUNC_33("%s^{commit}", VAR_23);
   if (FUNC_8(VAR_24, &VAR_21) && VAR_10)
    FUNC_5(FUNC_0("'%s' does not appear to be a valid "
          "revision"), VAR_23);

   FUNC_27(&VAR_16, FUNC_14(&VAR_21));
   FUNC_7(VAR_24);
  }
 }
 VAR_14 = VAR_9;







 if (VAR_16.nr)
  VAR_11 = 1;
 for (VAR_9 = 0; VAR_9 < VAR_16.nr; VAR_9++) {
  if (VAR_12) {
   FUNC_27(&VAR_17, VAR_5->term_good);
  } else {
   VAR_12 = 1;
   FUNC_27(&VAR_17, VAR_5->term_bad);
  }
 }




 VAR_22 = FUNC_16("HEAD", 0, &VAR_20, &VAR_13);
 if (!VAR_22)
  if (FUNC_8("HEAD", &VAR_20))
   return FUNC_6(FUNC_0("bad HEAD - I need a HEAD"));




 if (!FUNC_13(FUNC_10())) {

  FUNC_22(&VAR_18, FUNC_10(), 0);
  FUNC_25(&VAR_18);
  if (!VAR_6) {
   struct argv_array VAR_25 = VAR_0;

   FUNC_1(&VAR_25, "checkout", VAR_18.buf,
      "--", ((void*)0));
   if (FUNC_17(VAR_25.argv, VAR_1)) {
    VAR_15 = FUNC_6(FUNC_0("checking out '%s' failed."
       " Try 'git bisect start "
       "<valid-branch>'."),
            VAR_18.buf);
    goto finish;
   }
  }
 } else {

  if (!FUNC_8(VAR_22, &VAR_20) &&
      !FUNC_20(VAR_22, "refs/heads/")) {
   FUNC_24(&VAR_18);
   FUNC_21(&VAR_18, FUNC_14(&VAR_20));
  } else if (!FUNC_8(VAR_22, &VAR_20) &&
      FUNC_18(VAR_22, "refs/heads/", &VAR_22)) {





   if (!FUNC_13(FUNC_11()))
    return FUNC_6(FUNC_0("won't bisect on cg-seek'ed tree"));
   FUNC_21(&VAR_18, VAR_22);
  } else {
   return FUNC_6(FUNC_0("bad HEAD - strange symbolic ref"));
  }
 }




 if (FUNC_3())
  return -1;
 FUNC_30(FUNC_10(), "%s\n", VAR_18.buf);

 if (VAR_6) {
  if (FUNC_8(VAR_18.buf, &VAR_21) < 0) {
   VAR_15 = FUNC_6(FUNC_0("invalid ref: '%s'"), VAR_18.buf);
   goto finish;
  }
  if (FUNC_29(((void*)0), "BISECT_HEAD", &VAR_21, ((void*)0), 0,
          VAR_4)) {
   VAR_15 = -1;
   goto finish;
  }
 }

 if (VAR_14 < VAR_8 - 1)
  FUNC_19(&VAR_19, VAR_7 + VAR_14);
 FUNC_30(FUNC_9(), "%s\n", VAR_19.buf);

 for (VAR_9 = 0; VAR_9 < VAR_17.nr; VAR_9++)
  if (FUNC_4(VAR_17.items[VAR_9].string,
     VAR_16.items[VAR_9].string, VAR_5, 1)) {
   VAR_15 = -1;
   goto finish;
  }

 if (VAR_11 && FUNC_31(VAR_5->term_bad,
         VAR_5->term_good)) {
  VAR_15 = -1;
  goto finish;
 }

 VAR_15 = FUNC_2(VAR_7);
 if (VAR_15)
  VAR_15 = -1;

finish:
 FUNC_28(&VAR_16, 0);
 FUNC_28(&VAR_17, 0);
 FUNC_23(&VAR_18);
 FUNC_23(&VAR_19);
 return VAR_15;
}
