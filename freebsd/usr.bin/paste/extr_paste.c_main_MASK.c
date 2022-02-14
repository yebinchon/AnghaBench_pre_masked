
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 int * FUNC_3 (size_t) ;
 size_t FUNC_4 (int *,char const**,size_t,int *) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char**) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (int ,char*) ;
 int * VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_6, char *VAR_7[])
{
 int VAR_8, VAR_9, VAR_10;
 wchar_t *VAR_11;
 const char *VAR_12;
 size_t VAR_13;

 FUNC_7(VAR_0, "");

 VAR_10 = 0;
 while ((VAR_8 = FUNC_2(VAR_6, VAR_7, "d:s")) != -1)
  switch(VAR_8) {
  case 'd':
   VAR_12 = VAR_3;
   VAR_13 = FUNC_4(((void*)0), &VAR_12, 0, ((void*)0));
   if (VAR_13 == (size_t)-1)
    FUNC_0(1, "delimiters");
   VAR_11 = FUNC_3((VAR_13 + 1) * sizeof(*VAR_11));
   if (VAR_11 == ((void*)0))
    FUNC_0(1, ((void*)0));
   VAR_12 = VAR_3;
   VAR_13 = FUNC_4(VAR_11, &VAR_12, VAR_13 + 1, ((void*)0));
   if (VAR_13 == (size_t)-1)
    FUNC_0(1, "delimiters");
   VAR_2 = FUNC_8(VAR_1 = VAR_11);
   break;
  case 's':
   VAR_10 = 1;
   break;
  case '?':
  default:
   FUNC_9();
  }
 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;

 if (*VAR_7 == ((void*)0))
  FUNC_9();
 if (!VAR_1) {
  VAR_2 = 1;
  VAR_1 = VAR_5;
 }

 if (VAR_10)
  VAR_9 = FUNC_6(VAR_7);
 else
  VAR_9 = FUNC_5(VAR_7);
 FUNC_1(VAR_9);
}
