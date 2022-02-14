
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int64_t ;
struct TYPE_2__ {int tc_frequency; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_4(int VAR_2)
{
 int64_t VAR_3, VAR_4;
 uint64_t VAR_5, VAR_6;





 if (VAR_0 == ((void*)0)) {
  for (; VAR_2 > 0; VAR_2--)
   for (VAR_3 = 200; VAR_3 > 0; VAR_3--)




    FUNC_2();
  return;
 }
 FUNC_0();


 VAR_4 = ((VAR_1.tc_frequency / 1000000) + 1);







 if (VAR_2 >= (0x80000000U / VAR_4))
  VAR_3 = (0x80000000U / VAR_4) - 1;
 else
  VAR_3 = VAR_2 * VAR_4;

 VAR_5 = FUNC_3(VAR_0);

 while (VAR_3 > 0) {
  VAR_6 = FUNC_3(VAR_0);
  VAR_3 -= (int64_t)(VAR_6 - VAR_5);
  VAR_5 = VAR_6;
 }
 FUNC_1();
}
