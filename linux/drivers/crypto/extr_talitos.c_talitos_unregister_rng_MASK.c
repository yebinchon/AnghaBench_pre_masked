
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int rng_registered; int rng; } ;
struct device {int dummy; } ;


 struct talitos_private* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct talitos_private *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->rng_registered)
  return;

 FUNC_1(&VAR_1->rng);
 VAR_1->rng_registered = 0;
}
