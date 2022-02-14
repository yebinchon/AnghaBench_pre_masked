
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct envelope {int high; int dac_max; int invert; int level; int read_lock; int dac; int done; int low; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct envelope*) ;
 struct envelope* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_2,
          struct iio_chan_spec const *VAR_3,
          int *VAR_4, int *VAR_5, long VAR_6)
{
 struct envelope *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 129:
  FUNC_3(&VAR_7->read_lock);
  VAR_7->high = VAR_7->dac_max + VAR_7->invert;
  VAR_7->low = -1 + VAR_7->invert;
  FUNC_0(VAR_7);
  FUNC_5(&VAR_7->done);
  if (VAR_7->level < 0) {
   VAR_8 = VAR_7->level;
   goto err_unlock;
  }
  *VAR_4 = VAR_7->invert ? VAR_7->dac_max - VAR_7->level : VAR_7->level;
  FUNC_4(&VAR_7->read_lock);

  return VAR_1;

 case 128:
  return FUNC_2(VAR_7->dac, VAR_4, VAR_5);
 }

 return -VAR_0;

err_unlock:
 FUNC_4(&VAR_7->read_lock);
 return VAR_8;
}
