
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_2, const char *VAR_3,
        int VAR_4)
{
 FUNC_0(VAR_3);
 *(int *)VAR_2->value = VAR_1 = VAR_4 ? 0 : 1;
 if (VAR_4)
  VAR_0 = 0;
 return 0;
}
