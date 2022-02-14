
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (unsigned long const) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long const) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_3;

 const unsigned long VAR_4 = FUNC_3();
 u64 VAR_5 = FUNC_4(FUNC_1(VAR_4)) >> 60;

 if (FUNC_8(!VAR_5))
  goto spurious;

 VAR_3 = FUNC_6(VAR_5) - 1;

 FUNC_5(VAR_2 + VAR_3);
 goto out;

spurious:
 FUNC_7();
out:


 if (FUNC_2(VAR_1))
  FUNC_4(VAR_0);
 else
  FUNC_4(FUNC_0(VAR_4));
 return;
}
