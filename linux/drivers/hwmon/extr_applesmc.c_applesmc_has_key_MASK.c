
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applesmc_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct applesmc_entry const*) ;
 int FUNC_1 (struct applesmc_entry const*) ;
 struct applesmc_entry* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, bool *VAR_2)
{
 const struct applesmc_entry *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_3) && FUNC_1(VAR_3) != -VAR_0)
  return FUNC_1(VAR_3);

 *VAR_2 = !FUNC_0(VAR_3);
 return 0;
}
