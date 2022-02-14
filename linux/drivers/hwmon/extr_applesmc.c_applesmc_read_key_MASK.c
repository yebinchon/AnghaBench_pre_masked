
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct applesmc_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct applesmc_entry const*) ;
 int FUNC_1 (struct applesmc_entry const*) ;
 struct applesmc_entry* FUNC_2 (char const*) ;
 int FUNC_3 (struct applesmc_entry const*,int *,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, u8 *VAR_1, u8 VAR_2)
{
 const struct applesmc_entry *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 return FUNC_3(VAR_3, VAR_1, VAR_2);
}
