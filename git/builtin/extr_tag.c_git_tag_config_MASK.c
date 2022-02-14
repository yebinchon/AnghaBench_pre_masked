
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_sorting {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char const*,char const*,void*) ;
 int FUNC_2 (char const*,char const*,char*,int *) ;
 void* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*,void*) ;
 int FUNC_5 (struct ref_sorting**,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 int VAR_6;
 struct ref_sorting **VAR_7 = (struct ref_sorting **)VAR_5;

 if (!FUNC_7(VAR_3, "tag.gpgsign")) {
  VAR_1 = FUNC_3(VAR_3, VAR_4);
  return 0;
 }

 if (!FUNC_7(VAR_3, "tag.sort")) {
  if (!VAR_4)
   return FUNC_0(VAR_3);
  FUNC_5(VAR_7, VAR_4);
  return 0;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 if (!FUNC_7(VAR_3, "tag.forcesignannotated")) {
  VAR_2 = FUNC_3(VAR_3, VAR_4);
  return 0;
 }

 if (FUNC_6(VAR_3, "column."))
  return FUNC_2(VAR_3, VAR_4, "tag", &VAR_0);
 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
