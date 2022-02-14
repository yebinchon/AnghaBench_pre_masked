
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protox {int dummy; } ;
struct protoent {char** p_aliases; char const* p_name; } ;


 int FUNC_0 () ;
 struct protoent* FUNC_1 () ;
 struct protox* FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static struct protox *
FUNC_5(const char *VAR_0)
{
 struct protox *VAR_1;
 char **VAR_2;
 struct protoent *VAR_3;





 if ((VAR_1 = FUNC_2(VAR_0)) != ((void*)0))
  return (VAR_1);

 FUNC_3(1);
 while ((VAR_3 = FUNC_1()) != ((void*)0)) {

  for (VAR_2 = VAR_3->p_aliases; *VAR_2; VAR_2++)
   if (FUNC_4(VAR_0, *VAR_2) == 0) {
    FUNC_0();
    return (FUNC_2(VAR_3->p_name));
   }
 }
 FUNC_0();
 return (((void*)0));
}
