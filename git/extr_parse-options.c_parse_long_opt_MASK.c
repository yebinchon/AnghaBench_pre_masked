
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char const** out; int flags; char const* opt; int cpidx; } ;
struct option {scalar_t__ type; char* long_name; int defval; int flags; scalar_t__ value; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char const*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,char const*,...) ;
 int FUNC_3 (struct parse_opt_ctx_t*,struct option const*,struct option const*,int) ;
 int FUNC_4 (struct parse_opt_ctx_t*,struct option const*,struct option const*) ;
 int FUNC_5 (struct option const*,int) ;
 int FUNC_6 (char const*,char const*,char const**) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*,char const*,int) ;

__attribute__((used)) static enum parse_opt_result FUNC_10(
 struct parse_opt_ctx_t *VAR_9, const char *VAR_10,
 const struct option *VAR_11)
{
 const struct option *VAR_12 = VAR_11;
 const char *VAR_13 = FUNC_8(VAR_10, '=');
 const struct option *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 int VAR_16 = 0, VAR_17 = 0;

 for (; VAR_11->type != VAR_1; VAR_11++) {
  const char *VAR_18, *VAR_19 = VAR_11->long_name;
  int VAR_20 = 0, VAR_21 = 0;

  if (!VAR_19)
   continue;

again:
  if (!FUNC_6(VAR_10, VAR_19, &VAR_18))
   VAR_18 = ((void*)0);
  if (VAR_11->type == VAR_0) {
   if (!VAR_18)
    continue;
   if (*VAR_18 == '=')
    return FUNC_2(FUNC_0("%s takes no value"),
          FUNC_5(VAR_11, VAR_20));
   if (*VAR_18)
    continue;
   if (VAR_11->value)
    *(int *)VAR_11->value = VAR_11->defval;
   VAR_9->out[VAR_9->cpidx++] = VAR_10 - 2;
   return VAR_3;
  }
  if (!VAR_18) {

   if (!(VAR_9->flags & VAR_5) &&
       !FUNC_9(VAR_19, VAR_10, VAR_13 - VAR_10)) {
is_abbreviated:
    if (VAR_14 &&
        !FUNC_4(VAR_9, VAR_14, VAR_11)) {






     VAR_15 = VAR_14;
     VAR_17 = VAR_16;
    }
    if (!(VAR_20 & VAR_2) && *VAR_13)
     VAR_9->opt = VAR_13 + 1;
    VAR_14 = VAR_11;
    VAR_16 = VAR_20 ^ VAR_21;
    continue;
   }

   if (VAR_11->flags & VAR_6)
    continue;

   if (FUNC_7("no-", VAR_10)) {
    VAR_20 |= VAR_2;
    goto is_abbreviated;
   }

   if (!FUNC_7(VAR_10, "no-")) {
    if (FUNC_7(VAR_19, "no-")) {
     VAR_19 += 3;
     VAR_21 |= VAR_2;
     goto again;
    }
    continue;
   }
   VAR_20 |= VAR_2;
   if (!FUNC_6(VAR_10 + 3, VAR_19, &VAR_18)) {

    if (FUNC_7(VAR_19, VAR_10 + 3))
     goto is_abbreviated;
    else
     continue;
   }
  }
  if (*VAR_18) {
   if (*VAR_18 != '=')
    continue;
   VAR_9->opt = VAR_18 + 1;
  }
  return FUNC_3(VAR_9, VAR_11, VAR_12, VAR_20 ^ VAR_21);
 }

 if (VAR_8 && (VAR_15 || VAR_14))
  FUNC_1("disallowed abbreviated or ambiguous option '%.*s'",
      (int)(VAR_13 - VAR_10), VAR_10);

 if (VAR_15) {
  FUNC_2(FUNC_0("ambiguous option: %s "
   "(could be --%s%s or --%s%s)"),
   VAR_10,
   (VAR_17 & VAR_2) ? "no-" : "",
   VAR_15->long_name,
   (VAR_16 & VAR_2) ? "no-" : "",
   VAR_14->long_name);
  return VAR_4;
 }
 if (VAR_14)
  return FUNC_3(VAR_9, VAR_14, VAR_12, VAR_16);
 return VAR_7;
}
