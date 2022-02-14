
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int * ucl_object_iter_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int const*,int **,int) ;
 char* FUNC_3 (int const*) ;
 int FUNC_4 (int const*,char const**) ;

__attribute__((used)) static const char *
FUNC_5(const ucl_object_t *VAR_0)
{
 ucl_object_iter_t VAR_1;
 const ucl_object_t *VAR_2;
 const char *VAR_3, *VAR_4;

 VAR_1 = ((void*)0);
 while ((VAR_2 = FUNC_2(VAR_0, &VAR_1, 1)) != ((void*)0)) {
  VAR_3 = FUNC_3(VAR_2);

  if (FUNC_1(VAR_3, "device") == 0) {
   if (!FUNC_4(VAR_2, &VAR_4))
    FUNC_0(1,
        "Config PF.device must be a string");

   return (VAR_4);
  }
 }

 return (((void*)0));
}
