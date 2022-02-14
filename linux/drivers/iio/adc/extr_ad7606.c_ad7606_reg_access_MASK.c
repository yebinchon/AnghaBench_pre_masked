
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad7606_state {int lock; TYPE_1__* bops; } ;
struct TYPE_2__ {int (* reg_read ) (struct ad7606_state*,unsigned int) ;int (* reg_write ) (struct ad7606_state*,unsigned int,unsigned int) ;} ;


 struct ad7606_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ad7606_state*,unsigned int) ;
 int FUNC_4 (struct ad7606_state*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
        unsigned int VAR_1,
        unsigned int VAR_2,
        unsigned int *VAR_3)
{
 struct ad7606_state *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 FUNC_1(&VAR_4->lock);
 if (VAR_3) {
  VAR_5 = VAR_4->bops->reg_read(VAR_4, VAR_1);
  if (VAR_5 < 0)
   goto err_unlock;
  *VAR_3 = VAR_5;
  VAR_5 = 0;
 } else {
  VAR_5 = VAR_4->bops->reg_write(VAR_4, VAR_1, VAR_2);
 }
err_unlock:
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
