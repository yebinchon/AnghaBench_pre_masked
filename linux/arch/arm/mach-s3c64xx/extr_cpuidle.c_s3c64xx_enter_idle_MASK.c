
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct cpuidle_device *VAR_3,
         struct cpuidle_driver *VAR_4,
         int VAR_5)
{
 unsigned long VAR_6;


 VAR_6 = FUNC_0(VAR_2);
 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_0;
 FUNC_1(VAR_6, VAR_2);

 FUNC_2();

 return VAR_5;
}
