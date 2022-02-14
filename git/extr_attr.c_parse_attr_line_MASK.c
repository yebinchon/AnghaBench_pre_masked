
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct TYPE_3__ {char* pattern; int flags; int nowildcardlen; int patternlen; } ;
struct TYPE_4__ {TYPE_1__ pat; int attr; } ;
struct match_attr {int is_macro; int num_attr; int * state; TYPE_2__ u; } ;
struct attr_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,char const*,char const*,int) ;
 int FUNC_3 (struct match_attr*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,int,char const*,int *) ;
 int FUNC_7 (char**,int *,int*,int *) ;
 int FUNC_8 (char const*,int,char const*,int) ;
 scalar_t__ FUNC_9 (char const*,int ) ;
 int VAR_4 ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (char const*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*,int ) ;
 int FUNC_14 (struct strbuf*,char const*,char const**) ;
 int FUNC_15 (int ) ;
 struct match_attr* FUNC_16 (int,int) ;

__attribute__((used)) static struct match_attr *FUNC_17(const char *VAR_5, const char *VAR_6,
       int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11;
 const char *VAR_12, *VAR_13, *VAR_14;
 struct match_attr *VAR_15 = ((void*)0);
 int VAR_16;
 struct strbuf VAR_17 = VAR_2;

 VAR_12 = VAR_5 + FUNC_13(VAR_5, VAR_3);
 if (!*VAR_12 || *VAR_12 == '#')
  return ((void*)0);
 VAR_13 = VAR_12;

 if (*VAR_12 == '"' && !FUNC_14(&VAR_17, VAR_13, &VAR_14)) {
  VAR_13 = VAR_17.buf;
  VAR_9 = VAR_17.len;
 } else {
  VAR_9 = FUNC_11(VAR_13, VAR_3);
  VAR_14 = VAR_13 + VAR_9;
 }

 if (FUNC_12(VAR_0) < VAR_9 &&
     FUNC_9(VAR_13, VAR_0)) {
  if (!VAR_8) {
   FUNC_2(VAR_4, FUNC_0("%s not allowed: %s:%d"),
       VAR_13, VAR_6, VAR_7);
   goto fail_return;
  }
  VAR_16 = 1;
  VAR_13 += FUNC_12(VAR_0);
  VAR_13 += FUNC_13(VAR_13, VAR_3);
  VAR_9 = FUNC_11(VAR_13, VAR_3);
  if (!FUNC_1(VAR_13, VAR_9)) {
   FUNC_8(VAR_13, VAR_9, VAR_6, VAR_7);
   goto fail_return;
  }
 }
 else
  VAR_16 = 0;

 VAR_14 += FUNC_13(VAR_14, VAR_3);


 for (VAR_12 = VAR_14, VAR_10 = 0; *VAR_12; VAR_10++) {
  VAR_12 = FUNC_6(VAR_6, VAR_7, VAR_12, ((void*)0));
  if (!VAR_12)
   goto fail_return;
 }

 VAR_15 = FUNC_16(1,
        sizeof(*VAR_15) +
        sizeof(struct attr_state) * VAR_10 +
        (VAR_16 ? 0 : VAR_9 + 1));
 if (VAR_16) {
  VAR_15->u.attr = FUNC_4(VAR_13, VAR_9);
 } else {
  char *VAR_18 = (char *)&(VAR_15->state[VAR_10]);
  FUNC_5(VAR_18, VAR_13, VAR_9);
  VAR_15->u.pat.pattern = VAR_18;
  FUNC_7(&VAR_15->u.pat.pattern,
          &VAR_15->u.pat.patternlen,
          &VAR_15->u.pat.flags,
          &VAR_15->u.pat.nowildcardlen);
  if (VAR_15->u.pat.flags & VAR_1) {
   FUNC_15(FUNC_0("Negative patterns are ignored in git attributes\n"
      "Use '\\!' for literal leading exclamation."));
   goto fail_return;
  }
 }
 VAR_15->is_macro = VAR_16;
 VAR_15->num_attr = VAR_10;


 for (VAR_12 = VAR_14, VAR_11 = 0; *VAR_12; VAR_11++) {
  VAR_12 = FUNC_6(VAR_6, VAR_7, VAR_12, &(VAR_15->state[VAR_11]));
 }

 FUNC_10(&VAR_17);
 return VAR_15;

fail_return:
 FUNC_10(&VAR_17);
 FUNC_3(VAR_15);
 return ((void*)0);
}
