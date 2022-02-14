
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int config; } ;


 int FUNC_0 (struct repository*) ;
 int FUNC_1 (int ,char const*,char const**) ;
 int FUNC_2 (char const*,int *) ;

int FUNC_3(struct repository *VAR_0,
        const char *VAR_1, const char **VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0->config, VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_2(VAR_1, ((void*)0));
 return VAR_3;
}
