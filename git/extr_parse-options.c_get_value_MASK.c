
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {scalar_t__ opt; int prefix; } ;
struct option {int flags; int type; int (* ll_callback ) (struct parse_opt_ctx_t*,struct option const*,char const*,int const) ;int defval; int extra; scalar_t__ value; int (* callback ) (struct option const*,char const*,int) ;} ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char const**) ;
 int FUNC_4 (struct parse_opt_ctx_t*,struct option const*,int,char const**) ;
 int FUNC_5 (char const*,scalar_t__) ;
 int FUNC_6 (struct option const*,struct option const*,int) ;
 int FUNC_7 (struct option const*,int) ;
 int FUNC_8 (char const*,char**,int) ;
 int FUNC_9 (struct parse_opt_ctx_t*,struct option const*,char const*,int const) ;
 int FUNC_10 (struct option const*,char const*,int) ;
 int FUNC_11 (struct parse_opt_ctx_t*,struct option const*,char const*,int) ;

__attribute__((used)) static enum parse_opt_result FUNC_12(struct parse_opt_ctx_t *VAR_5,
           const struct option *VAR_6,
           const struct option *VAR_7,
           int VAR_8)
{
 const char *VAR_9, *VAR_10;
 const int VAR_11 = VAR_8 & VAR_1;
 int VAR_12;

 if (VAR_11 && VAR_5->opt)
  return FUNC_2(FUNC_1("%s takes no value"), FUNC_7(VAR_6, VAR_8));
 if (VAR_11 && (VAR_6->flags & VAR_3))
  return FUNC_2(FUNC_1("%s isn't available"), FUNC_7(VAR_6, VAR_8));
 if (!(VAR_8 & VAR_0) && VAR_5->opt && (VAR_6->flags & VAR_2))
  return FUNC_2(FUNC_1("%s takes no value"), FUNC_7(VAR_6, VAR_8));

 switch (VAR_6->type) {
 case 132:
  return VAR_6->ll_callback(VAR_5, VAR_6, ((void*)0), VAR_11);

 case 139:
  if (VAR_11)
   *(int *)VAR_6->value &= ~VAR_6->defval;
  else
   *(int *)VAR_6->value |= VAR_6->defval;
  return 0;

 case 130:
  if (VAR_11)
   *(int *)VAR_6->value |= VAR_6->defval;
  else
   *(int *)VAR_6->value &= ~VAR_6->defval;
  return 0;

 case 138:
  if (VAR_11)
   FUNC_0("BITOP can't have unset form");
  *(int *)VAR_6->value &= ~VAR_6->extra;
  *(int *)VAR_6->value |= VAR_6->defval;
  return 0;

 case 135:
  if (*(int *)VAR_6->value < 0)
   *(int *)VAR_6->value = 0;
  *(int *)VAR_6->value = VAR_11 ? 0 : *(int *)VAR_6->value + 1;
  return 0;

 case 129:
  *(int *)VAR_6->value = VAR_11 ? 0 : VAR_6->defval;
  return 0;

 case 136:




  if (*(int *)VAR_6->value && *(int *)VAR_6->value != VAR_6->defval)
   return FUNC_6(VAR_6, VAR_7, VAR_8);
  *(int *)VAR_6->value = VAR_6->defval;
  return 0;

 case 128:
  if (VAR_11)
   *(const char **)VAR_6->value = ((void*)0);
  else if (VAR_6->flags & VAR_4 && !VAR_5->opt)
   *(const char **)VAR_6->value = (const char *)VAR_6->defval;
  else
   return FUNC_4(VAR_5, VAR_6, VAR_8, (const char **)VAR_6->value);
  return 0;

 case 134:
  VAR_12 = 0;
  if (VAR_11)
   *(const char **)VAR_6->value = ((void*)0);
  else if (VAR_6->flags & VAR_4 && !VAR_5->opt)
   *(const char **)VAR_6->value = (const char *)VAR_6->defval;
  else
   VAR_12 = FUNC_4(VAR_5, VAR_6, VAR_8, (const char **)VAR_6->value);

  if (!VAR_12)
   FUNC_3(VAR_5->prefix, (const char **)VAR_6->value);
  return VAR_12;

 case 137:
 {
  const char *VAR_13 = ((void*)0);
  int VAR_14;

  if (VAR_11)
   VAR_14 = 1;
  else if (VAR_6->flags & VAR_2)
   VAR_14 = 0;
  else if (VAR_6->flags & VAR_4 && !VAR_5->opt)
   VAR_14 = 0;
  else if (FUNC_4(VAR_5, VAR_6, VAR_8, &VAR_10))
   return -1;
  else {
   VAR_14 = 0;
   VAR_13 = VAR_10;
  }
  if (VAR_6->callback)
   return (*VAR_6->callback)(VAR_6, VAR_13, VAR_14) ? (-1) : 0;
  else
   return (*VAR_6->ll_callback)(VAR_5, VAR_6, VAR_13, VAR_14);
 }
 case 133:
  if (VAR_11) {
   *(int *)VAR_6->value = 0;
   return 0;
  }
  if (VAR_6->flags & VAR_4 && !VAR_5->opt) {
   *(int *)VAR_6->value = VAR_6->defval;
   return 0;
  }
  if (FUNC_4(VAR_5, VAR_6, VAR_8, &VAR_10))
   return -1;
  if (!*VAR_10)
   return FUNC_2(FUNC_1("%s expects a numerical value"),
         FUNC_7(VAR_6, VAR_8));
  *(int *)VAR_6->value = FUNC_8(VAR_10, (char **)&VAR_9, 10);
  if (*VAR_9)
   return FUNC_2(FUNC_1("%s expects a numerical value"),
         FUNC_7(VAR_6, VAR_8));
  return 0;

 case 131:
  if (VAR_11) {
   *(unsigned long *)VAR_6->value = 0;
   return 0;
  }
  if (VAR_6->flags & VAR_4 && !VAR_5->opt) {
   *(unsigned long *)VAR_6->value = VAR_6->defval;
   return 0;
  }
  if (FUNC_4(VAR_5, VAR_6, VAR_8, &VAR_10))
   return -1;
  if (!FUNC_5(VAR_10, VAR_6->value))
   return FUNC_2(FUNC_1("%s expects a non-negative integer value"
           " with an optional k/m/g suffix"),
         FUNC_7(VAR_6, VAR_8));
  return 0;

 default:
  FUNC_0("opt->type %d should not happen", VAR_6->type);
 }
}
