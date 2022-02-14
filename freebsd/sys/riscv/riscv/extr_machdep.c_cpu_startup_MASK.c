
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int uintmax_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void *VAR_5)
{

 FUNC_5();
 FUNC_2();

 FUNC_3("real memory  = %ju (%ju MB)\n", FUNC_4((uintmax_t)VAR_4),
     FUNC_4((uintmax_t)VAR_4) / (1024 * 1024));




 if (VAR_1) {
  int VAR_6;

  FUNC_3("Physical memory chunk(s):\n");
  for (VAR_6 = 0; VAR_3[VAR_6 + 1] != 0; VAR_6 += 2) {
   vm_paddr_t VAR_7;

   VAR_7 = VAR_3[VAR_6 + 1] - VAR_3[VAR_6];
   FUNC_3(
       "0x%016jx - 0x%016jx, %ju bytes (%ju pages)\n",
       (uintmax_t)VAR_3[VAR_6],
       (uintmax_t)VAR_3[VAR_6 + 1] - 1,
       (uintmax_t)VAR_7, (uintmax_t)VAR_7 / VAR_0);
  }
 }

 FUNC_7(&VAR_2);

 FUNC_3("avail memory = %ju (%ju MB)\n",
     FUNC_4((uintmax_t)FUNC_6()),
     FUNC_4((uintmax_t)FUNC_6()) / (1024 * 1024));
 if (VAR_1)
  FUNC_1();

 FUNC_0();
 FUNC_8();
}
