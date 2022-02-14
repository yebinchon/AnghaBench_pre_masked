
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_include_data {int (* fn ) (char const*,char const*,int ) ;int opts; int data; } ;


 int FUNC_0 (char const*,struct config_include_data*) ;
 scalar_t__ FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char const*,int ) ;

int FUNC_5(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct config_include_data *VAR_3 = VAR_2;
 const char *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7;





 VAR_7 = VAR_3->fn(VAR_0, VAR_1, VAR_3->data);
 if (VAR_7 < 0)
  return VAR_7;

 if (!FUNC_3(VAR_0, "include.path"))
  VAR_7 = FUNC_0(VAR_1, VAR_3);

 if (!FUNC_2(VAR_0, "includeif", &VAR_4, &VAR_6, &VAR_5) &&
     (VAR_4 && FUNC_1(VAR_3->opts, VAR_4, VAR_6)) &&
     !FUNC_3(VAR_5, "path"))
  VAR_7 = FUNC_0(VAR_1, VAR_3);

 return VAR_7;
}
