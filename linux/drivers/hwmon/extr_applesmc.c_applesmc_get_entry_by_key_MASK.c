
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applesmc_entry {int dummy; } ;


 int VAR_0 ;
 struct applesmc_entry const* FUNC_0 (int) ;
 struct applesmc_entry const* FUNC_1 (int) ;
 int FUNC_2 (int*,char const*) ;
 int FUNC_3 (int*,char const*) ;

__attribute__((used)) static const struct applesmc_entry *FUNC_4(const char *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_2, VAR_1);
 if (VAR_4)
  return FUNC_0(VAR_4);
 VAR_4 = FUNC_3(&VAR_3, VAR_1);
 if (VAR_4)
  return FUNC_0(VAR_4);
 if (VAR_3 - VAR_2 != 1)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_2);
}
