
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbcfg_env {char* name; } ;


 int FUNC_0 (struct rbcfg_env*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 char* FUNC_2 (struct rbcfg_env const*) ;
 struct rbcfg_env* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(int VAR_3, const char *VAR_4[])
{
 int VAR_5;

 if (VAR_3 != 0) {
  FUNC_3();
  return VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  const struct rbcfg_env *VAR_6 = &VAR_1[VAR_5];
  const char *VAR_7;

  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7)
   FUNC_1(VAR_2, "%s=%s\n", VAR_6->name, VAR_7);
 }

 return 0;
}
