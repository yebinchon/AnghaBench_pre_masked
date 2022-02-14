
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int FILE ;


 int FUNC_0 (void*) ;
 char* FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,char const*,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int *,void**) ;

__attribute__((used)) static void
FUNC_5(nvlist_t *VAR_0, FILE *VAR_1)
{
 const char *VAR_2;
 void *VAR_3;

 if (VAR_0 == ((void*)0))
  return;

 while (!FUNC_3(VAR_0)) {
  VAR_3 = ((void*)0);
  VAR_2 = FUNC_4(VAR_0, ((void*)0), &VAR_3);
  FUNC_2(VAR_1, "\"%s=%s\\0\"\n", VAR_2,
       FUNC_1(VAR_3));

  FUNC_0(VAR_3);
 }
}
