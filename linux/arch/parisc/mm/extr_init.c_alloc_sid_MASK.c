
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 (long*,int ,unsigned long) ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 long* VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

unsigned long FUNC_5(void)
{
 unsigned long VAR_9;

 FUNC_3(&VAR_6);

 if (VAR_5 == 0) {
  if (VAR_4 != 0) {
   FUNC_4(&VAR_6);
   FUNC_2();
   FUNC_3(&VAR_6);
  }
  FUNC_0(VAR_5 == 0);
 }

 VAR_5--;

 VAR_9 = FUNC_1(VAR_7, VAR_1, VAR_8);
 VAR_7[VAR_9 >> VAR_2] |= (1L << (VAR_9 & (VAR_0 - 1)));
 VAR_8 = VAR_9;

 FUNC_4(&VAR_6);

 return VAR_9 << VAR_3;
}
