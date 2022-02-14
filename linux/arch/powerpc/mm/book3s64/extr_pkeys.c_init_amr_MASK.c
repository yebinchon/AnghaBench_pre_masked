
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(int VAR_0, u8 VAR_1)
{
 u64 VAR_2 = (((u64)VAR_1 & 0x3UL) << FUNC_0(VAR_0));
 u64 VAR_3 = FUNC_1() & ~((u64)(0x3ul) << FUNC_0(VAR_0));

 FUNC_2(VAR_3 | VAR_2);
}
