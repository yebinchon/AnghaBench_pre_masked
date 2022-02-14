
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char const*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;
 int VAR_4 ;
 int FUNC_3 (char const*,char const*,void*) ;
 int FUNC_4 (char const*,char const*,char*,int *) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,char const**) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_5, const char *VAR_6, void *VAR_7)
{
 const char *VAR_8;

 if (FUNC_8(VAR_5, "column."))
  return FUNC_4(VAR_5, VAR_6, "clean", &VAR_2);



 if (!FUNC_9(VAR_5, "color.interactive")) {
  VAR_1 = FUNC_6(VAR_5, VAR_6);
  return 0;
 }
 if (FUNC_7(VAR_5, "color.interactive.", &VAR_8)) {
  int VAR_9 = FUNC_0(VAR_3, VAR_8);
  if (VAR_9 < 0)
   return 0;
  if (!VAR_6)
   return FUNC_2(VAR_5);
  return FUNC_1(VAR_6, VAR_0[VAR_9]);
 }

 if (!FUNC_9(VAR_5, "clean.requireforce")) {
  VAR_4 = !FUNC_5(VAR_5, VAR_6);
  return 0;
 }


 return FUNC_3(VAR_5, VAR_6, VAR_7);
}
