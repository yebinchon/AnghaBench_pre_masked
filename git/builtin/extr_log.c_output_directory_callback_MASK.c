
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_0, const char *VAR_1,
         int VAR_2)
{
 const char **VAR_3 = (const char **)VAR_0->value;
 FUNC_0(VAR_2);
 if (*VAR_3)
  FUNC_2(FUNC_1("two output directories?"));
 *VAR_3 = VAR_1;
 return 0;
}
