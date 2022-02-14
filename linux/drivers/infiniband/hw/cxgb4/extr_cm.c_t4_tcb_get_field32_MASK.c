
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
typedef int __be64 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(__be64 *VAR_0, u16 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u64 VAR_5 = FUNC_0(VAR_0[(31 - VAR_1) / 2]);

 if (VAR_1 & 0x1)
  VAR_3 += 32;
 VAR_4 = (VAR_5 >> VAR_3) & VAR_2;
 return VAR_4;
}
