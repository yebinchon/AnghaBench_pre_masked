
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; } ;
struct pool {int throttle; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct thin_c*,struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct thin_c *VAR_0, struct bio *VAR_1)
{
 struct pool *VAR_2 = VAR_0->pool;

 FUNC_1(&VAR_2->throttle);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->throttle);
}
