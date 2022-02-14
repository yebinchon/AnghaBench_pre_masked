
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct option {scalar_t__ value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

int FUNC_3(const struct option *VAR_0, const char *VAR_1,
        int VAR_2)
{
 if (VAR_2)
  VAR_1 = "never";
 if (FUNC_2(VAR_1, (timestamp_t *)VAR_0->value))
  FUNC_1(FUNC_0("malformed expiration date '%s'"), VAR_1);
 return 0;
}
