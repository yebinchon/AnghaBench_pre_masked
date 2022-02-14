
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char const*,...) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int*,int*,char*) ;
 int VAR_0 ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_8(const char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 char VAR_9;
 int VAR_10;


 if (VAR_3)
  return;

 if (VAR_1) {
  FUNC_0(&VAR_8, "vidcontrol -f %s", VAR_4);
  FUNC_7(VAR_8);
  FUNC_2(VAR_8);
  return;
 }

 VAR_5 = FUNC_4(VAR_4);


 VAR_6 = FUNC_5(VAR_5, '-');
 if (VAR_6 && VAR_6[1] != '\0') {
  VAR_6++;

  if ((VAR_7 = FUNC_6(VAR_6, ".fnt")))
   *VAR_7 = '\0';





  if (FUNC_3(VAR_6, "%dx%d%c", &VAR_10, &VAR_10, &VAR_9) != 2)
   FUNC_1(VAR_0, "Which font size? %s\n", VAR_4);
  else {
   FUNC_0(&VAR_8, "vidcontrol -f %s %s", VAR_6, VAR_4);
   if (VAR_2)
    FUNC_1(VAR_0, "%s\n", VAR_8);
   FUNC_7(VAR_8);
   FUNC_2(VAR_8);
  }
 } else
  FUNC_1(VAR_0, "Which font size? %s\n", VAR_4);

 FUNC_2(VAR_5);
}
