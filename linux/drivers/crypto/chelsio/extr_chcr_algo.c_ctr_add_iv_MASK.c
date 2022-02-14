
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 unsigned int VAR_4 = VAR_0;
 __be32 *VAR_5 = (__be32 *)(VAR_1 + VAR_4);
 u32 VAR_6, VAR_7;

 FUNC_2(VAR_1, VAR_2, VAR_0);
 for (; VAR_4 >= 4; VAR_4 -= 4) {
  VAR_7 = FUNC_0(*--VAR_5);
  VAR_6 = VAR_7 + VAR_3;
  *VAR_5 = FUNC_1(VAR_6);
  if (VAR_7 < VAR_6)
   break;
  VAR_3 = 1;
 }

}
