
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charlcd {int dummy; } ;


 int FUNC_0 (struct charlcd*,char const) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(struct charlcd *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1;
 int VAR_3 = FUNC_3(VAR_1);

 for (; VAR_3-- > 0; VAR_2++) {
  if (!FUNC_1() && (((VAR_3 + 1) & 0x1f) == 0))




   FUNC_2();

  FUNC_0(VAR_0, *VAR_2);
 }
}
