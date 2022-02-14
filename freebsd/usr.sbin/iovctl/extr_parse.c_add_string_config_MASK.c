
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (char const*,int const*,char*) ;
 int FUNC_2 (int const*,char const**) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const ucl_object_t *VAR_1, nvlist_t *VAR_2)
{
 const char *VAR_3;

 if (!FUNC_2(VAR_1, &VAR_3))
  FUNC_1(VAR_0, VAR_1, "string");

 FUNC_0(VAR_2, VAR_0, VAR_3);
}
