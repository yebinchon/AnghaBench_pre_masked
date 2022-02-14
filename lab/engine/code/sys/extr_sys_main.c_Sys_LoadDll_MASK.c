
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int libPath ;


 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char*,int,char*,char const*,int ,char const*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 () ;
 int FUNC_5 (char const*) ;
 void* FUNC_6 (char const*) ;

void *FUNC_7(const char *VAR_2, qboolean VAR_3)
{
 void *VAR_4 = ((void*)0);

 if(!FUNC_5(VAR_2))
 {
  FUNC_0("Refusing to attempt to load library \"%s\": Extension not allowed.\n", VAR_2);
  return ((void*)0);
 }

 if(VAR_3)
 {
  FUNC_0("Trying to load \"%s\"...\n", VAR_2);
  VAR_4 = FUNC_6(VAR_2);
 }

 if(!VAR_4)
 {
  const char *VAR_5;
  char VAR_6[VAR_0];
  int VAR_7;

  VAR_5 = FUNC_4();

  if(!*VAR_5)
   VAR_5 = ".";

  VAR_7 = FUNC_1(VAR_6, sizeof(VAR_6), "%s%c%s", VAR_5, VAR_1, VAR_2);
  if(VAR_7 < sizeof(VAR_6))
  {
   FUNC_0("Trying to load \"%s\" from \"%s\"...\n", VAR_2, VAR_5);
   VAR_4 = FUNC_6(VAR_6);
  }
  else
  {
   FUNC_0("Skipping trying to load \"%s\" from \"%s\", file name is too long.\n", VAR_2, VAR_5);
  }

  if(!VAR_4)
  {
   const char *VAR_8 = FUNC_2("fs_basepath");

   if(!VAR_8 || !*VAR_8)
    VAR_8 = ".";

   if(FUNC_3(VAR_5, VAR_8))
   {
    VAR_7 = FUNC_1(VAR_6, sizeof(VAR_6), "%s%c%s", VAR_8, VAR_1, VAR_2);
    if(VAR_7 < sizeof(VAR_6))
    {
     FUNC_0("Trying to load \"%s\" from \"%s\"...\n", VAR_2, VAR_8);
     VAR_4 = FUNC_6(VAR_6);
    }
    else
    {
     FUNC_0("Skipping trying to load \"%s\" from \"%s\", file name is too long.\n", VAR_2, VAR_8);
    }
   }

   if(!VAR_4)
    FUNC_0("Loading \"%s\" failed\n", VAR_2);
  }
 }

 return VAR_4;
}
