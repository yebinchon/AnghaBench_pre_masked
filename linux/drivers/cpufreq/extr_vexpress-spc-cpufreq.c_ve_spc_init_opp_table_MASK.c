
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (struct cpumask const*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct cpumask *VAR_0)
{
 struct device *VAR_1 = FUNC_2(FUNC_0(VAR_0));




 return FUNC_1(VAR_1) <= 0;
}
