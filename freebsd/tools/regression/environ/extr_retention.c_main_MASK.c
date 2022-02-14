
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(int VAR_6, char **VAR_7)
{
 const char *VAR_8 = ((void*)0);
 const char *VAR_9 = ((void*)0);
 const char *VAR_10 = ((void*)0);
 const char *VAR_11 = ((void*)0);
 const char *VAR_12 = ((void*)0);
 int VAR_13;


 VAR_5 = ((void*)0);
 VAR_13 = 0;


 if (FUNC_1(VAR_1) != ((void*)0))
  FUNC_2("not ");
 FUNC_2("ok %d - getenv(\"%s\")\n", ++VAR_13, VAR_1);


 if ((FUNC_3(VAR_1, VAR_4, 1) != 0) ||
     ((VAR_8 = FUNC_1(VAR_1)) == ((void*)0)) ||
     (FUNC_4(VAR_8, VAR_4) != 0))
  FUNC_2("not ");
 FUNC_2("ok %d - setenv(\"%s\", \"%s\", 1)\n", ++VAR_13, VAR_1,
     VAR_4);


 if ((FUNC_5(VAR_1) == -1) || ((VAR_9 = FUNC_1(VAR_1)) != ((void*)0)))
  FUNC_2("not ");
 FUNC_2("ok %d - unsetenv(\"%s\")\n", ++VAR_13, VAR_1);


 if ((FUNC_3(VAR_1, VAR_3, 1) != 0) ||
     ((VAR_10 = FUNC_1(VAR_1)) == ((void*)0)) ||
     (FUNC_4(VAR_10, VAR_3) != 0))
  FUNC_2("not ");
 FUNC_2("ok %d - setenv(\"%s\", \"%s\", 1)\n", ++VAR_13, VAR_1,
     VAR_3);


 if ((FUNC_3(VAR_1, VAR_4, 1) != 0) ||
     ((VAR_11 = FUNC_1(VAR_1)) == ((void*)0)) ||
     (FUNC_4(VAR_11, VAR_4) != 0))
  FUNC_2("not ");
 FUNC_2("ok %d - setenv(\"%s\", \"%s\", 1)\n", ++VAR_13, VAR_1,
     VAR_4);


 if ((FUNC_3(VAR_1, VAR_2, 0) != 0) ||
     ((VAR_12 = FUNC_1(VAR_1)) == ((void*)0)) ||
     (FUNC_4(VAR_12, VAR_2) == 0))
  FUNC_2("not ");
 FUNC_2("ok %d - setenv(\"%s\", \"%s\", 0)\n", ++VAR_13, VAR_1,
     VAR_2);





 if ((FUNC_4(VAR_8, VAR_4) != 0) ||
     (FUNC_4(VAR_10, VAR_4) != 0) ||
     (FUNC_4(VAR_11, VAR_4) != 0))
  FUNC_2("not ");
 FUNC_2("ok %d - old variables point to valid memory\n", ++VAR_13);

 FUNC_0(VAR_0);
}
