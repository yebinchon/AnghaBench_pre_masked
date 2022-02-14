
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(u64 *VAR_0, u64 VAR_1, int VAR_2, int VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_2, VAR_3);
 *VAR_0 &= ~VAR_4;
 *VAR_0 |= (VAR_1 << VAR_3) & VAR_4;
}
