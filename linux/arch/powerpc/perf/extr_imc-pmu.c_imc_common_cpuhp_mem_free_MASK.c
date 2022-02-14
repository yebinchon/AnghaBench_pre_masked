
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imc_pmu {scalar_t__ domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static void FUNC_7(struct imc_pmu *VAR_12)
{
 if (VAR_12->domain == VAR_5) {
  FUNC_5(&VAR_9);
  if (VAR_10 == 1) {
   FUNC_3(VAR_1);
   FUNC_4(VAR_8);
   FUNC_4(VAR_11);
   VAR_11 = ((void*)0);
  }

  if (VAR_10 > 0)
   VAR_10--;
  FUNC_6(&VAR_9);
 }


 if (VAR_12->domain == VAR_4) {
  FUNC_3(VAR_0);
  FUNC_0();
 }


 if (VAR_12->domain == VAR_6) {
  FUNC_3(VAR_2);
  FUNC_1();
 }

 if (VAR_12->domain == VAR_7) {
  FUNC_3(VAR_3);
  FUNC_2();
 }
}
