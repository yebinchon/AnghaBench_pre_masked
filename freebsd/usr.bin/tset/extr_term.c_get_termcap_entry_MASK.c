
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyent {char* ty_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 void* FUNC_2 (char*) ;
 struct ttyent* FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (char*,char) ;
 char* VAR_3 ;
 int FUNC_7 (char*,char const*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*) ;

const char *
FUNC_11(char *VAR_4, char **VAR_5)
{
 struct ttyent *VAR_6;
 int VAR_7;
 char *VAR_8, *VAR_9;
 const char *VAR_10;

 if (VAR_4) {
  VAR_10 = VAR_4;
  goto found;
 }


 if ((VAR_10 = FUNC_2("TERM")))
  goto map;


 if ((VAR_9 = FUNC_8(VAR_1))) {
  if ((VAR_8 = FUNC_6(VAR_9, '/')))
   ++VAR_8;
  else
   VAR_8 = VAR_9;
  if ((VAR_6 = FUNC_3(VAR_8))) {
   VAR_10 = VAR_6->ty_type;
   goto map;
  }
 }


 VAR_10 = "unknown";

map: VAR_10 = FUNC_4(VAR_10);






found: if ((VAR_8 = FUNC_2("TERMCAP")) != ((void*)0) && *VAR_8 != '/')
  FUNC_9("TERMCAP");





 if (VAR_10[0] == '?') {
  if (VAR_10[1] != '\0')
   VAR_10 = FUNC_0(VAR_10 + 1);
  else
   VAR_10 = FUNC_0(((void*)0));
 }


 while ((VAR_7 = FUNC_7(VAR_3, VAR_10)) == 0) {
  FUNC_10("terminal type %s is unknown", VAR_10);
  VAR_10 = FUNC_0(((void*)0));
 }
 if (VAR_7 == -1)
  FUNC_1(1, "termcap: %s", FUNC_5(VAR_2 ? VAR_2 : VAR_0));
 *VAR_5 = VAR_3;
 return (VAR_10);
}
