
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ili210x {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ili210x *VAR_1, u8 *VAR_2,
     unsigned int VAR_3,
     unsigned int *VAR_4, unsigned int *VAR_5)
{
 if (VAR_3 >= VAR_0)
  return 0;

 *VAR_4 = FUNC_1(VAR_2 + 1 + (VAR_3 * 5) + 0);
 if (!(*VAR_4 & FUNC_0(15)))
  return 0;

 *VAR_4 &= 0x3fff;
 *VAR_5 = FUNC_1(VAR_2 + 1 + (VAR_3 * 5) + 2);

 return 1;
}
