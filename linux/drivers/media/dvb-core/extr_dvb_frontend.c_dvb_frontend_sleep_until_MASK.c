
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

void FUNC_5(ktime_t *VAR_0, u32 VAR_1)
{
 s32 VAR_2;

 *VAR_0 = FUNC_0(*VAR_0, VAR_1);
 VAR_2 = FUNC_2(FUNC_1(), *VAR_0);
 if (VAR_2 > 2500) {
  FUNC_3((VAR_2 - 1500) / 1000);
  VAR_2 = FUNC_2(FUNC_1(), *VAR_0);
 }
 if (VAR_2 > 0)
  FUNC_4(VAR_2);
}
