
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_2 (int ) ;
 int * VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int *) ;

void FUNC_6(void)
{
 unsigned int VAR_8 = FUNC_2(FUNC_4());
 u32 VAR_9;

 if (VAR_7 == ((void*)0))
  return;

 VAR_9 = FUNC_3(VAR_7 + FUNC_0(VAR_8));
 VAR_9 &= ~VAR_0;
 FUNC_5(VAR_9, VAR_7 + FUNC_0(VAR_8));


 VAR_9 = FUNC_3(VAR_7 + FUNC_1(VAR_8));
 VAR_9 &= ~(VAR_5 | VAR_3);
 VAR_9 &= ~VAR_1;
 VAR_9 &= ~VAR_6;
 VAR_9 &= ~(VAR_4 | VAR_2);
 FUNC_5(VAR_9, VAR_7 + FUNC_1(VAR_8));
}
