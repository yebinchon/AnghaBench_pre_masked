
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_group {int ag_auths; } ;
struct auth {struct auth_group* a_auth_group; } ;


 int FUNC_0 (int *,struct auth*,int ) ;
 int VAR_0 ;
 struct auth* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static struct auth *
FUNC_3(struct auth_group *VAR_1)
{
 struct auth *VAR_2;

 VAR_2 = FUNC_1(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  FUNC_2(1, "calloc");
 VAR_2->a_auth_group = VAR_1;
 FUNC_0(&VAR_1->ag_auths, VAR_2, VAR_0);
 return (VAR_2);
}
