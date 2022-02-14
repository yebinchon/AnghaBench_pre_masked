
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long,scalar_t__) ;
 int FUNC_8 () ;

void FUNC_9(void *VAR_6)
{
 unsigned long VAR_7 = (unsigned long) VAR_6 & VAR_3;
 int VAR_8;
 unsigned int VAR_9;

 if (VAR_7 < FUNC_1(VAR_1)) {
  FUNC_5();
  FUNC_6();
  return;
 }

 VAR_8 = FUNC_2();

 VAR_9 = VAR_8 + VAR_2 * FUNC_8();







 FUNC_7(&VAR_4, VAR_7, VAR_5-VAR_9);
 FUNC_4(((void*)0), VAR_7);

 FUNC_3();
 FUNC_5();
 FUNC_6();
}
