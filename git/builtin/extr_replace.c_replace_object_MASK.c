
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (char const*,struct object_id*,char const*,struct object_id*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 struct object_id VAR_3, VAR_4;

 if (FUNC_2(VAR_0, &VAR_3))
  return FUNC_1(FUNC_0("failed to resolve '%s' as a valid ref"),
        VAR_0);
 if (FUNC_2(VAR_1, &VAR_4))
  return FUNC_1(FUNC_0("failed to resolve '%s' as a valid ref"),
        VAR_1);

 return FUNC_3(VAR_0, &VAR_3, VAR_1, &VAR_4, VAR_2);
}
