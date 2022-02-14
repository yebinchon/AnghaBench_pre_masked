
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(int VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;

 if (VAR_5)
  return;
 if (FUNC_6() > 1) {

  if (FUNC_1(&VAR_7, -1, FUNC_9()) != -1)
   return;


  FUNC_12();

  FUNC_0(VAR_1);







  VAR_10 = VAR_3;
  while (FUNC_6() > 1 && VAR_10--)
   FUNC_11(1);
 }


 if (FUNC_6() > 1) {





  if (!VAR_6 && !FUNC_8()) {

   FUNC_12();

   FUNC_7("Shutting down cpus with NMI\n");

   FUNC_0(VAR_0);
  }





  VAR_10 = VAR_2 * 10;
  while (FUNC_6() > 1 && (VAR_8 || VAR_10--))
   FUNC_11(1);
 }

 FUNC_4(VAR_9);
 FUNC_2();
 FUNC_5(FUNC_10(&VAR_4));
 FUNC_3(VAR_9);
}
