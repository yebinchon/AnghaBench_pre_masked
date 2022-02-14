
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt3001 {scalar_t__ mode; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct opt3001* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct opt3001*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
  struct iio_chan_spec const *VAR_6, int VAR_7, int VAR_8,
  long VAR_9)
{
 struct opt3001 *VAR_10 = FUNC_0(VAR_5);
 int VAR_11;

 if (VAR_10->mode == VAR_4)
  return -VAR_0;

 if (VAR_6->type != VAR_3)
  return -VAR_1;

 if (VAR_9 != VAR_2)
  return -VAR_1;

 if (VAR_7 != 0)
  return -VAR_1;

 FUNC_1(&VAR_10->lock);
 VAR_11 = FUNC_3(VAR_10, VAR_8);
 FUNC_2(&VAR_10->lock);

 return VAR_11;
}
