
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct repository*,char const*,int,struct object_id*,char**) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct repository*,char const**,int*) ;

int FUNC_3(struct repository *VAR_0, const char *VAR_1, int VAR_2,
    struct object_id *VAR_3, char **VAR_4)
{
 char *VAR_5 = FUNC_2(VAR_0, &VAR_1, &VAR_2);
 int VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_5);
 return VAR_6;
}
