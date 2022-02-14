
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_set_element {char* key; int ent; } ;
struct config_set {int config_hash; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char**,int *) ;
 int FUNC_2 (int *,int ) ;
 struct config_set_element* FUNC_3 (int *,struct config_set_element*,int ,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct config_set_element *FUNC_5(struct config_set *VAR_1, const char *VAR_2)
{
 struct config_set_element VAR_3;
 struct config_set_element *VAR_4;
 char *VAR_5;




 if (FUNC_1(VAR_2, &VAR_5, ((void*)0)))
  return ((void*)0);

 FUNC_2(&VAR_3.ent, FUNC_4(VAR_5));
 VAR_3.key = VAR_5;
 VAR_4 = FUNC_3(&VAR_1->config_hash, &VAR_3, VAR_0, ((void*)0));
 FUNC_0(VAR_5);
 return VAR_4;
}
