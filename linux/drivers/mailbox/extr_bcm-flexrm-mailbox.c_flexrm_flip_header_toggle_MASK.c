
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 & ((u64)0x1 << VAR_0))
  VAR_2 &= ~((u64)0x1 << VAR_0);
 else
  VAR_2 |= ((u64)0x1 << VAR_0);

 FUNC_1(VAR_1, VAR_2);
}
