
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int showch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int,...) ;
 int FUNC_1 (char*,int,char*,char const) ;
 int * FUNC_2 (char const*,char const) ;

char *
FUNC_3(char *VAR_3, int VAR_4)
{
 char VAR_5[8];
 const char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = VAR_3;
 VAR_9 = 0;
 if (VAR_4) {

  VAR_6 = ":";
  VAR_8 = "gecos field";
 } else {

  VAR_6 = " ,\t:+&#%$^()!@~*?<>=|\\/\"";
  VAR_8 = "userid/group name";

  if (*VAR_7 == '-')
   VAR_9 = 1;
 }
 if (!VAR_9) {
  while (*VAR_7) {
   if (FUNC_2(VAR_6, *VAR_7) != ((void*)0) ||
       (!VAR_4 && *VAR_7 < ' ') ||
       *VAR_7 == 127) {
    VAR_9 = 1;
    break;
   }

   if (!VAR_4 && (*VAR_7 & 0x80)) {
    VAR_9 = 1;
    break;
   }
   VAR_7++;
  }
 }




 if (VAR_9 && !VAR_4) {
  if (*VAR_7 == '$' && *(VAR_7 + 1) == '\0') {
   VAR_9 = 0;
   VAR_7++;
  }
 }
 if (VAR_9) {
  FUNC_1(VAR_5, sizeof(VAR_5), (*VAR_7 >= ' ' && *VAR_7 < 127)
      ? "`%c'" : "0x%02x", *VAR_7);
  FUNC_0(VAR_0, "invalid character %s at position %td in %s",
      VAR_5, (VAR_7 - VAR_3), VAR_8);
 }
 if (!VAR_4 && (VAR_7 - VAR_3) > VAR_2)
  FUNC_0(VAR_1, "name too long `%s' (max is %d)", VAR_3,
      VAR_2);

 return (VAR_3);
}
