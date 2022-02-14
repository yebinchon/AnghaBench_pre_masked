
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_0, u32 VAR_1,
        u32 VAR_2, bool VAR_3)
{
 u32 VAR_4 = VAR_0 >> VAR_1;

 if (VAR_3)
  return FUNC_0(8192 * VAR_4, VAR_2);
 else
  return 8192 * (VAR_4 - 1) / (VAR_2 - 1);
}
