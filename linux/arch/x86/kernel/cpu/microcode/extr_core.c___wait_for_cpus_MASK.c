
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 long long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (long long) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(atomic_t *VAR_1, long long VAR_2)
{
 int VAR_3 = FUNC_3();

 FUNC_0(VAR_1);

 while (FUNC_1(VAR_1) < VAR_3) {
  if (VAR_2 < VAR_0) {
   FUNC_4("Timeout while waiting for CPUs rendezvous, remaining: %d\n",
    VAR_3 - FUNC_1(VAR_1));
   return 1;
  }

  FUNC_2(VAR_0);
  VAR_2 -= VAR_0;

  FUNC_5();
 }
 return 0;
}
