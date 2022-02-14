
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeriomem_rng_private {int timer; int rng_ops; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct timeriomem_rng_private* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct timeriomem_rng_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->rng_ops);
 FUNC_0(&VAR_1->timer);

 return 0;
}
