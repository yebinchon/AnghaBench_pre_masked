
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5758_state {int pwr_down; int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned long VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned long VAR_2 ;
 int FUNC_2 (struct ad5758_state*,int ,unsigned long,unsigned int) ;
 struct ad5758_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct iio_dev *VAR_3,
          uintptr_t VAR_4,
          struct iio_chan_spec const *VAR_5,
          const char *VAR_6, size_t VAR_7)
{
 struct ad5758_state *VAR_8 = FUNC_3(VAR_3);
 bool VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned long int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_6, &VAR_9);
 if (VAR_13)
  return VAR_13;

 FUNC_5(&VAR_8->lock);
 if (VAR_9)
  VAR_11 = 0;
 else
  VAR_11 = 1;

 VAR_10 = FUNC_1(VAR_11) |
     FUNC_0(VAR_11);
 VAR_12 = VAR_2 |
    VAR_1;

 VAR_13 = FUNC_2(VAR_8, VAR_0,
        VAR_12,
        VAR_10);
 if (VAR_13 < 0)
  goto err_unlock;

 VAR_8->pwr_down = VAR_9;

err_unlock:
 FUNC_6(&VAR_8->lock);

 return VAR_13 ? VAR_13 : VAR_7;
}
