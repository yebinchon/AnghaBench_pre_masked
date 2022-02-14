
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 () ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(void)
{
 u32 VAR_6 = FUNC_4();

 if (FUNC_2())
  goto early_wakeup;

 FUNC_3(VAR_4, VAR_2);

 if (FUNC_0(VAR_5) == -VAR_1
     && VAR_6 == VAR_0)
  FUNC_1();

early_wakeup:


 FUNC_3(0x0, VAR_3);
}
