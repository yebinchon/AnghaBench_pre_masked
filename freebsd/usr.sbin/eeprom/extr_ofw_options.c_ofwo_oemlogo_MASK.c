
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofwo_extabent {char* ex_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,char*,char*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static int
FUNC_11(const struct ofwo_extabent *VAR_6, int VAR_7, const void *VAR_8,
    int VAR_9, const char *VAR_10)
{
 int VAR_11;
 char VAR_12[VAR_3 + 1];

 if (VAR_10) {
  if (VAR_10[0] == '\0')
   FUNC_4(VAR_7, FUNC_3(VAR_7), VAR_6->ex_prop, "", 1);
  else {
   if ((VAR_11 = FUNC_6(VAR_10, VAR_4)) == -1) {
    FUNC_9("could not open '%s'", VAR_10);
    return (VAR_2);
   }
   if (FUNC_8(VAR_11, VAR_12, VAR_3) != VAR_3 ||
       FUNC_2(VAR_11, 0, VAR_5) != VAR_3) {
    FUNC_0(VAR_11);
    FUNC_10("logo '%s' has wrong size.", VAR_10);
    return (VAR_2);
   }
   FUNC_0(VAR_11);
   VAR_12[VAR_3] = '\0';
   if (FUNC_4(VAR_7, FUNC_3(VAR_7), VAR_6->ex_prop,
       VAR_12, VAR_3 + 1) != VAR_3)
    FUNC_1(VAR_0, "writing logo failed.");
  }
 } else
  if (VAR_9 != 0)
   FUNC_7("%s: <logo data>\n", VAR_6->ex_prop);
  else
   FUNC_5(VAR_6->ex_prop, (const char *)VAR_8,
       VAR_9);
 return (VAR_1);
}
