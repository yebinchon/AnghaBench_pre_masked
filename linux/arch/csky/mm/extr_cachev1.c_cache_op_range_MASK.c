
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned long,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(
 unsigned int VAR_8,
 unsigned int VAR_9,
 unsigned int VAR_10,
 unsigned int VAR_11)
{
 unsigned long VAR_12, VAR_13;
 unsigned int VAR_14 = VAR_10 | VAR_0 | VAR_1;
 bool VAR_15;

 if (FUNC_7((VAR_9 - VAR_8) >= VAR_6) ||
     FUNC_7(VAR_8 < VAR_5) ||
     FUNC_7(VAR_8 >= VAR_5 + VAR_4)) {
  FUNC_0(VAR_10, VAR_11);
  return;
 }

 if ((FUNC_3() & VAR_2) && VAR_11)
  VAR_15 = 1;
 else
  VAR_15 = 0;

 FUNC_5(&VAR_7, VAR_13);

 VAR_12 = VAR_8 & ~(VAR_3 - 1);
 for (; VAR_12 < VAR_9; VAR_12 += VAR_3) {
  FUNC_1(VAR_12, VAR_14);
  if (VAR_15) {
   FUNC_2();
   FUNC_4("cr24", VAR_14);
  }
 }
 FUNC_6(&VAR_7, VAR_13);

 FUNC_2();
}
