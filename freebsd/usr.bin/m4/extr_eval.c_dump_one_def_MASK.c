
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_definition {int type; char* defn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,char const*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_5, struct macro_definition *VAR_6)
{
 if (!VAR_4)
  VAR_4 = VAR_3;
 if (VAR_2) {
  if ((VAR_6->type & VAR_1) == VAR_0)
   FUNC_0(VAR_4, "%s:\t%s\n", VAR_5, VAR_6->defn);
  else {
   FUNC_0(VAR_4, "%s:\t<%s>\n", VAR_5, VAR_6->defn);
  }
 } else
  FUNC_0(VAR_4, "`%s'\t`%s'\n", VAR_5, VAR_6->defn);
}
