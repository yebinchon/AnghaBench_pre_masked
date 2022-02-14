
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct portal_group {int dummy; } ;
struct portal {int p_iser; int p_listen; int p_ai; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (struct portal*) ;
 struct portal* FUNC_4 (struct portal_group*) ;

int
FUNC_5(struct portal_group *VAR_0, const char *VAR_1, bool VAR_2)
{
 struct portal *VAR_3;

 VAR_3 = FUNC_4(VAR_0);
 VAR_3->p_listen = FUNC_0(VAR_1);
 VAR_3->p_iser = VAR_2;

 if (FUNC_2(VAR_3->p_listen, "3260", &VAR_3->p_ai)) {
  FUNC_1("invalid listen address %s", VAR_3->p_listen);
  FUNC_3(VAR_3);
  return (1);
 }






 return (0);
}
