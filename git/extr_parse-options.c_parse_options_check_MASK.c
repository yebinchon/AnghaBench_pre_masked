
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int type; int flags; int short_name; scalar_t__ argh; int callback; int ll_callback; scalar_t__ long_name; } ;
typedef int short_opts ;


 int FUNC_0 (char*) ;




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (struct option const*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(const struct option *VAR_6)
{
 int VAR_7 = 0;
 char VAR_8[128];

 FUNC_2(VAR_8, '\0', sizeof(VAR_8));
 for (; VAR_6->type != VAR_0; VAR_6++) {
  if ((VAR_6->flags & VAR_1) &&
      (VAR_6->flags & VAR_5))
   VAR_7 |= FUNC_3(VAR_6, "uses incompatible flags "
     "LASTARG_DEFAULT and OPTARG");
  if (VAR_6->short_name) {
   if (0x7F <= VAR_6->short_name)
    VAR_7 |= FUNC_3(VAR_6, "invalid short name");
   else if (VAR_8[VAR_6->short_name]++)
    VAR_7 |= FUNC_3(VAR_6, "short name already used");
  }
  if (VAR_6->flags & VAR_3 &&
      ((VAR_6->flags & VAR_5) ||
       !(VAR_6->flags & VAR_2) ||
       !(VAR_6->flags & VAR_4) ||
       VAR_6->long_name))
   VAR_7 |= FUNC_3(VAR_6, "uses feature "
     "not supported for dashless options");
  switch (VAR_6->type) {
  case 132:
  case 134:
  case 130:
  case 128:
  case 129:
   if ((VAR_6->flags & VAR_5) ||
       !(VAR_6->flags & VAR_2))
    VAR_7 |= FUNC_3(VAR_6, "should not accept an argument");
   break;
  case 133:
   if (!VAR_6->callback && !VAR_6->ll_callback)
    FUNC_0("OPTION_CALLBACK needs one callback");
   if (VAR_6->callback && VAR_6->ll_callback)
    FUNC_0("OPTION_CALLBACK can't have two callbacks");
   break;
  case 131:
   if (!VAR_6->ll_callback)
    FUNC_0("OPTION_LOWLEVEL_CALLBACK needs a callback");
   if (VAR_6->callback)
    FUNC_0("OPTION_LOWLEVEL_CALLBACK needs no high level callback");
   break;
  case 135:
   FUNC_0("OPT_ALIAS() should not remain at this point. "
       "Are you using parse_options_step() directly?\n"
       "That case is not supported yet.");
  default:
   ;
  }
  if (VAR_6->argh &&
      FUNC_4(VAR_6->argh, " _") != FUNC_5(VAR_6->argh))
   VAR_7 |= FUNC_3(VAR_6, "multi-word argh should use dash to separate words");
 }
 if (VAR_7)
  FUNC_1(128);
}
