
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline u32
FUNC_2(u64 VAR_0)
{

 bool VAR_1 = VAR_0 & FUNC_0(63);
 u32 VAR_2 = (VAR_0 >> 32) & 0x7fffffff;
 u32 VAR_3 = VAR_0 & 0xffffffff;

 if (VAR_2 >= 4) {
  return (1 << 18) - (VAR_1 ? 0 : 1);
 } else {
  u32 VAR_4 = (VAR_2 << 16) | (VAR_3 >> 16);
  if (VAR_1)
   VAR_4 = -VAR_4;
  return VAR_4 & FUNC_1(18, 0);
 }
}
