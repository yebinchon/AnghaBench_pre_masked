
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static inline u64 FUNC_0(u64 VAR_0, int VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 |= (u64) (((VAR_0 & (((u64) 1) << VAR_2)) ? 1 : 0))
   << (VAR_1 - 1 - VAR_2);
 }
 return (VAR_3);
}
