
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {scalar_t__ registered; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpuidle_device*) ;
 int VAR_0 ;
 struct cpuidle_device* FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1)
{
 struct cpuidle_device *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2->registered) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_2);
 }

 return 0;
}
