
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int pool_lock; int pool; scalar_t__ subirq_base; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iio_trigger *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->pool_lock);
 FUNC_0(VAR_1 - VAR_0->subirq_base, VAR_0->pool);
 FUNC_2(&VAR_0->pool_lock);
}
