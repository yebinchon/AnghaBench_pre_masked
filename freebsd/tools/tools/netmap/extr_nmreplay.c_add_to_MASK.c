
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const char ** VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
 for (; VAR_1 > 0 && *VAR_0 != ((void*)0) ; VAR_1--, VAR_0++);
 if (VAR_1 == 0) {
  FUNC_0("%s %s", VAR_3, VAR_2);
  FUNC_1(1);
 }
 *VAR_0 = VAR_2;
}
