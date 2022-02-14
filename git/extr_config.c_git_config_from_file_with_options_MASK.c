
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_options {int dummy; } ;
typedef int config_fn_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,char const*,int *,void*,struct config_options const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;

int FUNC_3(config_fn_t VAR_1, const char *VAR_2,
          void *VAR_3,
          const struct config_options *VAR_4)
{
 int VAR_5 = -1;
 FILE *VAR_6;

 VAR_6 = FUNC_2(VAR_2, "r");
 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_2,
       VAR_2, VAR_6, VAR_3, VAR_4);
  FUNC_1(VAR_6);
 }
 return VAR_5;
}
