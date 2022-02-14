
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {scalar_t__ subirq_base; int pool_lock; int pool; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_1)
{
 int VAR_2;
 FUNC_2(&VAR_1->pool_lock);
 VAR_2 = FUNC_0(VAR_1->pool,
          VAR_0,
          FUNC_1(1));
 FUNC_3(&VAR_1->pool_lock);
 if (VAR_2 >= 0)
  VAR_2 += VAR_1->subirq_base;

 return VAR_2;
}
