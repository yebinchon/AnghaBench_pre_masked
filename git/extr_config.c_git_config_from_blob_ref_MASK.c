
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int config_fn_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (int ,char const*,struct object_id*,void*) ;

__attribute__((used)) static int FUNC_4(config_fn_t VAR_0,
        const char *VAR_1,
        void *VAR_2)
{
 struct object_id VAR_3;

 if (FUNC_2(VAR_1, &VAR_3) < 0)
  return FUNC_1(FUNC_0("unable to resolve config blob '%s'"), VAR_1);
 return FUNC_3(VAR_0, VAR_1, &VAR_3, VAR_2);
}
