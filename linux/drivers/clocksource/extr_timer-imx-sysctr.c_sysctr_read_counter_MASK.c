
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline u64 FUNC_1(void)
{
 u32 VAR_3, VAR_4, VAR_5;

 do {
  VAR_3 = FUNC_0(VAR_2 + VAR_0);
  VAR_5 = FUNC_0(VAR_2 + VAR_1);
  VAR_4 = FUNC_0(VAR_2 + VAR_0);
 } while (VAR_4 != VAR_3);

 return ((u64) VAR_3 << 32) | VAR_5;
}
