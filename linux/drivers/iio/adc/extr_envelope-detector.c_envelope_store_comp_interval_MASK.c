
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct envelope {unsigned long comp_interval; int read_lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct envelope* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct iio_dev *VAR_1,
         uintptr_t VAR_2,
         struct iio_chan_spec const *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct envelope *VAR_6 = FUNC_0(VAR_1);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, 0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 > 1000)
  return -VAR_0;

 FUNC_2(&VAR_6->read_lock);
 VAR_6->comp_interval = VAR_7;
 FUNC_3(&VAR_6->read_lock);

 return VAR_5;
}
