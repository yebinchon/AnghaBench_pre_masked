
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

void FUNC_12(int VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 FUNC_7("Synchronize counters for CPU %u: ", VAR_5);

 FUNC_4(VAR_7);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  while (FUNC_1(&VAR_2) != 1)
   FUNC_5();
  FUNC_2(&VAR_3, 0);
  FUNC_9();


  FUNC_0(&VAR_2);


  if (VAR_6 == 1)
   VAR_4 = FUNC_8();




  if (VAR_6 == VAR_1-1)
   FUNC_11(VAR_4);




  while (FUNC_1(&VAR_3) != 1)
   FUNC_5();
  FUNC_2(&VAR_2, 0);
  FUNC_9();
  FUNC_0(&VAR_3);
 }

 FUNC_10(FUNC_8() + VAR_0);

 FUNC_3(VAR_7);






 FUNC_6("done.\n");
}
