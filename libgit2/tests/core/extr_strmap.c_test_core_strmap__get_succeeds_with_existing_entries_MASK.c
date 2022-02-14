
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const**) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char const*,char*) ;

void FUNC_5(void)
{
 const char *VAR_1[] = { "foo", "bar", "gobble" };
 char *VAR_2[] = { "oof", "rab", "elbbog" };
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  FUNC_2(FUNC_4(VAR_0, VAR_1[VAR_3], VAR_2[VAR_3]));

 FUNC_1(FUNC_3(VAR_0, "foo"), "oof");
 FUNC_1(FUNC_3(VAR_0, "bar"), "rab");
 FUNC_1(FUNC_3(VAR_0, "gobble"), "elbbog");
}
