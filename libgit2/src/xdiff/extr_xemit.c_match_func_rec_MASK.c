
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdfile_t ;
struct TYPE_3__ {long (* find_func ) (char const*,long,char*,long,int ) ;int find_func_priv; } ;
typedef TYPE_1__ xdemitconf_t ;


 long FUNC_0 (char const*,long,char*,long,int ) ;
 long FUNC_1 (char const*,long,char*,long,int ) ;
 long FUNC_2 (int *,long,char const**) ;

__attribute__((used)) static long FUNC_3(xdfile_t *VAR_0, xdemitconf_t const *VAR_1, long VAR_2,
      char *VAR_3, long VAR_4)
{
 const char *VAR_5;
 long VAR_6 = FUNC_2(VAR_0, VAR_2, &VAR_5);
 if (!VAR_1->find_func)
  return FUNC_0(VAR_5, VAR_6, VAR_3, VAR_4, VAR_1->find_func_priv);
 return VAR_1->find_func(VAR_5, VAR_6, VAR_3, VAR_4, VAR_1->find_func_priv);
}
