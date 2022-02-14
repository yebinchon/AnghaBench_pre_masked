
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

void FUNC_3(u64 *VAR_4)
{
 u64 VAR_5 = FUNC_2(VAR_2);
 u64 VAR_6 = FUNC_0(VAR_5);
 u64 VAR_7 = FUNC_1(VAR_5);
 u64 VAR_8 = FUNC_2(VAR_3);
 u64 VAR_9 = (VAR_8 & VAR_0) >> VAR_1;

 if (VAR_9 == 0 || VAR_9 == 7)
  *VAR_4 = 0;
 else
  *VAR_4 = VAR_7 << (2 * VAR_6);
}
