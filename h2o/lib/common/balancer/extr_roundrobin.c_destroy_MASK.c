
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct round_robin_t {int mutex; } ;
typedef int h2o_balancer_t ;


 int FUNC_0 (struct round_robin_t*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(h2o_balancer_t *VAR_0)
{
    struct round_robin_t *VAR_1 = (void *)VAR_0;
    FUNC_1(&VAR_1->mutex);
    FUNC_0(VAR_1);
}
