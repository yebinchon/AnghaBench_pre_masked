
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int flags; char const* opt; int argc; char** argv; int total; char** out; int cpidx; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_1 (char const*,struct option const*) ;
 int FUNC_2 (struct parse_opt_ctx_t*,char const*,struct option const*) ;
 scalar_t__ FUNC_3 (struct parse_opt_ctx_t*,char const*,struct option const*) ;
 int FUNC_4 (struct parse_opt_ctx_t*,struct option const*) ;
 int FUNC_5 (struct option const*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (struct parse_opt_ctx_t*,char const* const*,struct option const*,int,int ) ;
 char* FUNC_8 (char*) ;

int FUNC_9(struct parse_opt_ctx_t *VAR_5,
         const struct option *VAR_6,
         const char * const VAR_7[])
{
 int VAR_8 = !(VAR_5->flags & VAR_2);


 VAR_5->opt = ((void*)0);

 for (; VAR_5->argc; VAR_5->argc--, VAR_5->argv++) {
  const char *VAR_9 = VAR_5->argv[0];

  if (VAR_5->flags & VAR_3 &&
      VAR_5->argc != VAR_5->total)
   break;

  if (*VAR_9 != '-' || !VAR_9[1]) {
   if (FUNC_3(VAR_5, VAR_9, VAR_6) == 0)
    continue;
   if (VAR_5->flags & VAR_4)
    return 129;
   VAR_5->out[VAR_5->cpidx++] = VAR_5->argv[0];
   continue;
  }


  if (VAR_8 && VAR_5->total == 1 && !FUNC_6(VAR_9 + 1, "h"))
   goto show_usage;


  if (VAR_5->total == 1 && !FUNC_6(VAR_9 + 1, "-git-completion-helper"))
   return FUNC_5(VAR_6);

  if (VAR_9[1] != '-') {
   VAR_5->opt = VAR_9 + 1;
   switch (FUNC_4(VAR_5, VAR_6)) {
   case 131:
    return 131;
   case 128:
    if (VAR_5->opt)
     FUNC_1(VAR_9 + 1, VAR_6);
    if (VAR_8 && *VAR_5->opt == 'h')
     goto show_usage;
    goto unknown;
   case 129:
   case 130:
   case 133:
    FUNC_0("parse_short_opt() cannot return these");
   case 132:
    break;
   }
   if (VAR_5->opt)
    FUNC_1(VAR_9 + 1, VAR_6);
   while (VAR_5->opt) {
    switch (FUNC_4(VAR_5, VAR_6)) {
    case 131:
     return 131;
    case 128:
     if (VAR_8 && *VAR_5->opt == 'h')
      goto show_usage;






     VAR_5->argv[0] = FUNC_8(VAR_5->opt - 1);
     *(char *)VAR_5->argv[0] = '-';
     goto unknown;
    case 129:
    case 133:
    case 130:
     FUNC_0("parse_short_opt() cannot return these");
    case 132:
     break;
    }
   }
   continue;
  }

  if (!VAR_9[2] ||
      !FUNC_6(VAR_9 + 2, "end-of-options")) {
   if (!(VAR_5->flags & VAR_0)) {
    VAR_5->argc--;
    VAR_5->argv++;
   }
   break;
  }

  if (VAR_8 && !FUNC_6(VAR_9 + 2, "help-all"))
   return FUNC_7(VAR_5, VAR_7, VAR_6, 1, 0);
  if (VAR_8 && !FUNC_6(VAR_9 + 2, "help"))
   goto show_usage;
  switch (FUNC_2(VAR_5, VAR_9 + 2, VAR_6)) {
  case 131:
   return 131;
  case 128:
   goto unknown;
  case 130:
   goto show_usage;
  case 129:
  case 133:
   FUNC_0("parse_long_opt() cannot return these");
  case 132:
   break;
  }
  continue;
unknown:
  if (VAR_5->flags & VAR_3)
   break;
  if (!(VAR_5->flags & VAR_1))
   return 128;
  VAR_5->out[VAR_5->cpidx++] = VAR_5->argv[0];
  VAR_5->opt = ((void*)0);
 }
 return 132;

 show_usage:
 return FUNC_7(VAR_5, VAR_7, VAR_6, 0, 0);
}
