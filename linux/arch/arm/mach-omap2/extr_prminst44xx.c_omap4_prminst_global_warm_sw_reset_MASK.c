
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(void)
{
 u32 VAR_4;
 s32 VAR_5 = FUNC_2();

 if (VAR_5 == VAR_3)
  return;

 VAR_4 = FUNC_0(VAR_0, VAR_5,
     VAR_2);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_4, VAR_0,
     VAR_5, VAR_2);


 VAR_4 = FUNC_0(VAR_0,
        VAR_5, VAR_2);
}
