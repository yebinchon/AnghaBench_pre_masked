
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label_spec_entry {char* regexstr; char* mactext; char* modestr; int mode; int flags; int regex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,char const*,...) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int *,char*,int) ;
 size_t FUNC_5 (int,int *,char*,size_t) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

void
FUNC_10(const char *VAR_10, int VAR_11, struct label_spec_entry *VAR_12,
    char *VAR_13)
{
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 size_t VAR_18;
 int VAR_19;

 VAR_14 = FUNC_9(VAR_13, " \t");
 if (VAR_14 == ((void*)0))
  FUNC_2(1, "%s: need regular expression", VAR_10);
 VAR_15 = FUNC_9(((void*)0), " \t");
 if (VAR_15 == ((void*)0))
  FUNC_2(1, "%s: need a label", VAR_10);
 VAR_16 = FUNC_9(((void*)0), " \t");
 if (VAR_16 == ((void*)0)) {
  VAR_16 = VAR_15;
  VAR_15 = ((void*)0);
 }
 if (FUNC_9(((void*)0), " \t") != ((void*)0))
  FUNC_2(1, "%s: extraneous fields at end of line", VAR_10);

 if (FUNC_0(&VAR_14, "^%s$", VAR_14) == -1)
  FUNC_1(1, "%s: processing regular expression", VAR_10);
 VAR_12->regexstr = VAR_14;
 VAR_19 = FUNC_4(&VAR_12->regex, VAR_14, VAR_1 | VAR_2);
 if (VAR_19) {
  VAR_18 = FUNC_5(VAR_19, &VAR_12->regex, ((void*)0), 0);
  VAR_17 = FUNC_3(VAR_18);
  if (VAR_17 == ((void*)0))
   FUNC_1(1, "malloc");
  (void)FUNC_5(VAR_19, &VAR_12->regex, VAR_17, VAR_18);
  FUNC_2(1, "%s: %s: %s", VAR_10, VAR_12->regexstr, VAR_17);
 }
 if (!VAR_11) {
  VAR_12->mactext = FUNC_7(VAR_16);
  if (VAR_12->mactext == ((void*)0))
   FUNC_1(1, "strdup");
 } else {
  if (FUNC_0(&VAR_12->mactext, "sebsd/%s", VAR_16) == -1)
   FUNC_1(1, "asprintf");
  if (FUNC_6(VAR_16, "<<none>>") == 0)
   VAR_12->flags |= VAR_0;
 }
 if (VAR_15 != ((void*)0)) {
  if (FUNC_8(VAR_15) != 2 || VAR_15[0] != '-')
   FUNC_2(1, "%s: invalid mode string: %s", VAR_10, VAR_15);
  switch (VAR_15[1]) {
  case 'b':
   VAR_12->mode = VAR_3;
   VAR_12->modestr = ",-b";
   break;
  case 'c':
   VAR_12->mode = VAR_4;
   VAR_12->modestr = ",-c";
   break;
  case 'd':
   VAR_12->mode = VAR_5;
   VAR_12->modestr = ",-d";
   break;
  case 'p':
   VAR_12->mode = VAR_6;
   VAR_12->modestr = ",-p";
   break;
  case 'l':
   VAR_12->mode = VAR_7;
   VAR_12->modestr = ",-l";
   break;
  case 's':
   VAR_12->mode = VAR_9;
   VAR_12->modestr = ",-s";
   break;
  case '-':
   VAR_12->mode = VAR_8;
   VAR_12->modestr = ",--";
   break;
  default:
   FUNC_2(1, "%s: invalid mode string: %s", VAR_10, VAR_15);
  }
 } else {
  VAR_12->modestr = "";
 }
}
