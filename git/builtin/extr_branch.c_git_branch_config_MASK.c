
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_sorting {int dummy; } ;


 int FUNC_0 (int ,char const*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,void*) ;
 int FUNC_4 (char const*,char const*,char*,int *) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (struct ref_sorting**,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,char const**) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_4, const char *VAR_5, void *VAR_6)
{
 const char *VAR_7;
 struct ref_sorting **VAR_8 = (struct ref_sorting **)VAR_6;

 if (!FUNC_9(VAR_4, "branch.sort")) {
  if (!VAR_5)
   return FUNC_2(VAR_4);
  FUNC_6(VAR_8, VAR_5);
  return 0;
 }

 if (FUNC_8(VAR_4, "column."))
  return FUNC_4(VAR_4, VAR_5, "branch", &VAR_2);
 if (!FUNC_9(VAR_4, "color.branch")) {
  VAR_1 = FUNC_5(VAR_4, VAR_5);
  return 0;
 }
 if (FUNC_7(VAR_4, "color.branch.", &VAR_7)) {
  int VAR_9 = FUNC_0(VAR_3, VAR_7);
  if (VAR_9 < 0)
   return 0;
  if (!VAR_5)
   return FUNC_2(VAR_4);
  return FUNC_1(VAR_5, VAR_0[VAR_9]);
 }
 return FUNC_3(VAR_4, VAR_5, VAR_6);
}
