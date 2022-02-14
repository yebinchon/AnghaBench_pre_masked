
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpu_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 TYPE_1__** VAR_4 ;
 int FUNC_5 (char*,unsigned int,unsigned int,int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_5)
{
 int VAR_6;
 int VAR_7 = 1;
 unsigned int VAR_8 = FUNC_2(VAR_5);

 if (FUNC_3(VAR_5) == VAR_0) {
  VAR_7 = 1;
  for (VAR_6 = 0; VAR_6 < 5000; VAR_6++) {
   if (FUNC_1(VAR_5) == VAR_0) {
    VAR_7 = 0;
    break;
   }
   FUNC_4(1);
  }
 } else if (FUNC_3(VAR_5) == VAR_1) {

  for (VAR_6 = 0; VAR_6 < 25; VAR_6++) {
   VAR_7 = FUNC_6(VAR_8);
   if (VAR_7 == VAR_3 ||
       VAR_7 == VAR_2)
    break;
   FUNC_0();
  }
 }

 if (VAR_7 != 0) {
  FUNC_5("Querying DEAD? cpu %i (%i) shows %i\n",
         VAR_5, VAR_8, VAR_7);
 }






 VAR_4[VAR_5]->cpu_start = 0;
}
