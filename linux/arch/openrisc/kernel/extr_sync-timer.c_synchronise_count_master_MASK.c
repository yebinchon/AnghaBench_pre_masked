
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 () ;

void FUNC_12(int VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 FUNC_10("Synchronize counters for CPU %u: ", VAR_5);

 FUNC_5(VAR_7);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  while (FUNC_1(&VAR_2) != 1)
   FUNC_6();
  FUNC_2(&VAR_3, 0);
  FUNC_11();


  FUNC_0(&VAR_2);


  if (VAR_6 == 1)
   VAR_4 = FUNC_3();




  if (VAR_6 == VAR_1-1)
   FUNC_7(VAR_4);




  while (FUNC_1(&VAR_3) != 1)
   FUNC_6();
  FUNC_2(&VAR_2, 0);
  FUNC_11();
  FUNC_0(&VAR_3);
 }

 FUNC_8(VAR_0);

 FUNC_4(VAR_7);






 FUNC_9("done.\n");
}
