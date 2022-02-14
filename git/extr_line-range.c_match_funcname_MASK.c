
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* find_func ) (char const*,int,char*,int,int ) ;int find_func_priv; } ;
typedef TYPE_1__ xdemitconf_t ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,int,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(xdemitconf_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (VAR_0) {
  char VAR_3[1];
  return VAR_0->find_func(VAR_1, VAR_2 - VAR_1, VAR_3, 1,
     VAR_0->find_func_priv) >= 0;
 }

 if (VAR_1 == VAR_2)
  return 0;
 if (FUNC_0(*VAR_1) || *VAR_1 == '_' || *VAR_1 == '$')
  return 1;
 return 0;
}
