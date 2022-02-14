
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct auth_name {int an_initator_name; struct auth_group* an_auth_group; } const auth_name ;
struct auth_group {int ag_names; } ;


 int FUNC_0 (int *,struct auth_name const*,int ) ;
 int VAR_0 ;
 struct auth_name const* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char*) ;

const struct auth_name *
FUNC_4(struct auth_group *VAR_1, const char *VAR_2)
{
 struct auth_name *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_3(1, "calloc");
 VAR_3->an_auth_group = VAR_1;
 VAR_3->an_initator_name = FUNC_2(VAR_2);
 FUNC_0(&VAR_1->ag_names, VAR_3, VAR_0);
 return (VAR_3);
}
