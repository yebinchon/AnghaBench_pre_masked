
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {unsigned int cpu; int registered; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct cpuidle_device*) ;
 int VAR_1 ;
 struct cpuidle_device* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2)
{
 struct cpuidle_device *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3->registered) {
  VAR_3->cpu = VAR_2;
  if (FUNC_1(VAR_3)) {
   FUNC_3("cpuidle_register_device %d failed!\n", VAR_2);
   return -VAR_0;
  }
  FUNC_0(VAR_2);
 }

 return 0;
}
