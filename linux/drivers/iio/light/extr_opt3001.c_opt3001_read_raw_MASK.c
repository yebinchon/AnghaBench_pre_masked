
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt3001 {scalar_t__ mode; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct opt3001* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct opt3001*,int*,int*) ;
 int FUNC_4 (struct opt3001*,int*,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
  struct iio_chan_spec const *VAR_5, int *VAR_6, int *VAR_7,
  long VAR_8)
{
 struct opt3001 *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 if (VAR_9->mode == VAR_3)
  return -VAR_0;

 if (VAR_5->type != VAR_2)
  return -VAR_1;

 FUNC_1(&VAR_9->lock);

 switch (VAR_8) {
 case 128:
  VAR_10 = FUNC_4(VAR_9, VAR_6, VAR_7);
  break;
 case 129:
  VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_7);
  break;
 default:
  VAR_10 = -VAR_1;
 }

 FUNC_2(&VAR_9->lock);

 return VAR_10;
}
