
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u64 FUNC_1(void)
{
 unsigned int VAR_3, VAR_4;
 u32 VAR_5 = FUNC_0(VAR_2 + VAR_1);

 do {
  VAR_4 = VAR_5;
  VAR_3 = FUNC_0(VAR_2 + VAR_0);
  VAR_5 = FUNC_0(VAR_2 + VAR_1);
 } while (VAR_4 != VAR_5);

 return ((u64)VAR_4 << 32) | VAR_3;
}
