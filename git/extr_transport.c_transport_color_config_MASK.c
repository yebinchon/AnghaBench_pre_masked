
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char**) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 const char *VAR_2[] = {
  "color.transport.reset",
  "color.transport.rejected"
 }, *VAR_3 = "color.transport";
 char *VAR_4;
 int VAR_5;
 static int VAR_6;

 if (VAR_6)
  return 0;
 VAR_6 = 1;

 if (!FUNC_4(VAR_3, &VAR_4))
  VAR_1 = FUNC_3(VAR_3, VAR_4);

 if (!FUNC_5(VAR_1))
  return 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (!FUNC_4(VAR_2[VAR_5], &VAR_4)) {
   if (!VAR_4)
    return FUNC_2(VAR_2[VAR_5]);
   if (FUNC_1(VAR_4, VAR_0[VAR_5]) < 0)
    return -1;
  }

 return 0;
}
