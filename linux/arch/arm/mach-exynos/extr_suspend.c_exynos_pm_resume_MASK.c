
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(void)
{
 u32 VAR_4 = FUNC_6();

 if (FUNC_2())
  goto early_wakeup;

 if (VAR_4 == VAR_0)
  FUNC_3();

 if (FUNC_0(VAR_3) == -VAR_1
     && VAR_4 == VAR_0)
  FUNC_1();

early_wakeup:


 FUNC_5(0x0, VAR_2);
 FUNC_4(1);
}
