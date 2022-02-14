
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 char* VAR_3 ;
 int FUNC_2 (int,char**,char const*) ;
 int FUNC_3 (int,char**,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;

int
FUNC_6(int VAR_6, char *VAR_7[])
{
 int VAR_8 = -1;
 const char *VAR_9;

 VAR_3 = VAR_7[0];

 if (VAR_6 == 2) {
  if (!FUNC_4(VAR_7[1], "-h") || !FUNC_4(VAR_7[1], "--help"))
   FUNC_5(VAR_5);
  if (!FUNC_4(VAR_7[1], "-v") || !FUNC_4(VAR_7[1], "--version")) {
   FUNC_1("%s version %s\n", VAR_1, VAR_2);
   FUNC_1("%s\n", VAR_0);
   FUNC_0(0);
  }
 }

 if (VAR_6 < 3) FUNC_5(VAR_4);

 VAR_9 = VAR_7[1];

 if (VAR_6 == 3 && !FUNC_4(VAR_7[2], "stdio"))
  VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_9);
 else
  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_9);

 return (VAR_8);
}
