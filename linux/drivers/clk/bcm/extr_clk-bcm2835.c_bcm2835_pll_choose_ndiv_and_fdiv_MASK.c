
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1,
          unsigned long VAR_2,
          u32 *VAR_3, u32 *VAR_4)
{
 u64 VAR_5;

 VAR_5 = (u64)VAR_1 << VAR_0;
 FUNC_0(VAR_5, VAR_2);

 *VAR_3 = VAR_5 >> VAR_0;
 *VAR_4 = VAR_5 & ((1 << VAR_0) - 1);
}
