
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_13(struct cpuidle_device *VAR_3,
   struct cpuidle_driver *VAR_4,
   int VAR_5)
{
 unsigned long VAR_6;
 u64 VAR_7;

 FUNC_11(VAR_0);

 FUNC_6(&VAR_6);
 FUNC_9();
 VAR_7 = FUNC_4() + VAR_1;

 while (!FUNC_10()) {
  FUNC_0();
  FUNC_2();
  if (FUNC_7(VAR_2) && FUNC_4() > VAR_7) {





   FUNC_3(VAR_0);
   FUNC_12();
   break;
  }
 }

 FUNC_1();
 FUNC_3(VAR_0);

 FUNC_8();

 FUNC_5(VAR_6);

 return VAR_5;
}
