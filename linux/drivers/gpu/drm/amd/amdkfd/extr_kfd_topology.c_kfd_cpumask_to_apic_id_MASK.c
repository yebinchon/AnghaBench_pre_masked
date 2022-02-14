
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct TYPE_2__ {int apicid; } ;


 TYPE_1__ FUNC_0 (int) ;
 struct cpumask const* VAR_0 ;
 int FUNC_1 (struct cpumask const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct cpumask *VAR_2)
{
 int VAR_3;

 if (!VAR_2 || VAR_2 == VAR_0)
  return -1;
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 >= VAR_1)
  return -1;



 return VAR_3;

}
