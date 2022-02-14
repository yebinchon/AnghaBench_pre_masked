
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lv0104cs_private {size_t calibscale; size_t scale; size_t int_time; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct TYPE_6__ {int val; int val2; } ;
struct TYPE_5__ {int val; int val2; } ;
struct TYPE_4__ {int val; int val2; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct lv0104cs_private* FUNC_0 (struct iio_dev*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct lv0104cs_private*,int*,int*) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6,
    struct iio_chan_spec const *VAR_7,
    int *VAR_8, int *VAR_9, long VAR_10)
{
 struct lv0104cs_private *VAR_11 = FUNC_0(VAR_6);
 int VAR_12;

 if (VAR_7->type != VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_11->lock);

 switch (VAR_10) {
 case 129:
  VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_9);
  if (VAR_12)
   goto err_mutex;
  VAR_12 = VAR_2;
  break;

 case 131:
  *VAR_8 = VAR_3[VAR_11->calibscale].val;
  *VAR_9 = VAR_3[VAR_11->calibscale].val2;
  VAR_12 = VAR_2;
  break;

 case 128:
  *VAR_8 = VAR_5[VAR_11->scale].val;
  *VAR_9 = VAR_5[VAR_11->scale].val2;
  VAR_12 = VAR_2;
  break;

 case 130:
  *VAR_8 = VAR_4[VAR_11->int_time].val;
  *VAR_9 = VAR_4[VAR_11->int_time].val2;
  VAR_12 = VAR_2;
  break;

 default:
  VAR_12 = -VAR_0;
 }

err_mutex:
 FUNC_3(&VAR_11->lock);

 return VAR_12;
}
