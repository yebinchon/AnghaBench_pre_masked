
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long,scalar_t__) ;
 int FUNC_9 () ;

void FUNC_10(void *VAR_7)
{
 unsigned long VAR_8 = (unsigned long) VAR_7 & VAR_4;

 if (VAR_8 < FUNC_2(VAR_2)) {
  FUNC_6();
  FUNC_7();
  return;
 }

 if (FUNC_0(VAR_0)) {
  int VAR_9 = FUNC_3();
  unsigned int VAR_10;

  VAR_10 = VAR_9 + VAR_3 * FUNC_9();
  FUNC_1(VAR_8 != FUNC_2(VAR_1 + VAR_10));





  FUNC_8(&VAR_5, VAR_8, VAR_6-VAR_10);
  FUNC_5(((void*)0), VAR_8);
 }

 FUNC_4();
 FUNC_6();
 FUNC_7();
}
