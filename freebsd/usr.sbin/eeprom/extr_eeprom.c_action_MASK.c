
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_6(char *VAR_1)
{
 int VAR_2;
 char *VAR_3, *VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, "malloc() failed");
 if ((VAR_4 = FUNC_4(VAR_3, '=')) != ((void*)0))
  *VAR_4++ = '\0';
 switch (VAR_2 = FUNC_2(VAR_3, VAR_4)) {
  case 128:
   FUNC_5("nothing available for '%s'.", VAR_3);
   break;
  case 129:
   FUNC_5("invalid value '%s' for '%s'.", VAR_4, VAR_3);
   break;
 }
 FUNC_1(VAR_3);
 return(VAR_2);
}
