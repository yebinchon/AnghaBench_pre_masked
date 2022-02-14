
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_13(struct cpuidle_device *VAR_2,
   struct cpuidle_driver *VAR_3,
   int VAR_4)
{
 u64 VAR_5;

 FUNC_11(VAR_0);

 FUNC_7();

 VAR_5 = FUNC_4() + FUNC_3(VAR_2, VAR_3, VAR_4);
 FUNC_9();
 FUNC_1();
 while (!FUNC_8()) {
  if (FUNC_5(VAR_1) && FUNC_4() > VAR_5) {





   FUNC_2(VAR_0);
   FUNC_12();
   break;
  }
 }

 FUNC_0();
 FUNC_10();
 FUNC_2(VAR_0);

 FUNC_6();

 return VAR_4;
}
