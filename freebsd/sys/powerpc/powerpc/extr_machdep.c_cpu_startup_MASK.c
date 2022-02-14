
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int uintmax_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 () ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(void *VAR_9)
{




 FUNC_3();




 FUNC_2(FUNC_0(VAR_2));




 FUNC_5("real memory  = %ju (%ju MB)\n", FUNC_6((uintmax_t)VAR_5),
     FUNC_6((uintmax_t)VAR_5) / 1048576);
 VAR_6 = VAR_5;

 if (VAR_1)
  FUNC_5("available KVA = %zu (%zu MB)\n",
      VAR_8 - VAR_7,
      (VAR_8 - VAR_7) / 1048576);




 if (VAR_1) {
  int VAR_10;

  FUNC_5("Physical memory chunk(s):\n");
  for (VAR_10 = 0; VAR_4[VAR_10 + 1] != 0; VAR_10 += 2) {
   vm_paddr_t VAR_11 =
       VAR_4[VAR_10 + 1] - VAR_4[VAR_10];




   FUNC_5("0x%09jx - 0x%09jx, %ju bytes (%ju pages)\n",

       (uintmax_t)VAR_4[VAR_10],
       (uintmax_t)VAR_4[VAR_10 + 1] - 1,
       (uintmax_t)VAR_11, (uintmax_t)VAR_11 / VAR_0);
  }
 }

 FUNC_8(&VAR_3);

 FUNC_5("avail memory = %ju (%ju MB)\n",
     FUNC_6((uintmax_t)FUNC_7()),
     FUNC_6((uintmax_t)FUNC_7()) / 1048576);




 FUNC_1();
 FUNC_9();
}
