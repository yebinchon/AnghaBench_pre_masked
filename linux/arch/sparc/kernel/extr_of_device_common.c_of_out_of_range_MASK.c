
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (int const*,int) ;

int FUNC_1(const u32 *VAR_0, const u32 *VAR_1,
      const u32 *VAR_2, int VAR_3, int VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_0, VAR_3);
 u64 VAR_6 = FUNC_0(VAR_1, VAR_3);

 if (VAR_5 < VAR_6)
  return 1;

 VAR_6 += FUNC_0(VAR_2, VAR_4);
 if (VAR_5 >= VAR_6)
  return 1;

 return 0;
}
