
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lv0104cs_private {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 struct lv0104cs_private* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct lv0104cs_private*,int,int) ;
 int FUNC_2 (struct lv0104cs_private*,int,int) ;
 int FUNC_3 (struct lv0104cs_private*,int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
    struct iio_chan_spec const *VAR_3,
    int VAR_4, int VAR_5, long VAR_6)
{
 struct lv0104cs_private *VAR_7 = FUNC_0(VAR_2);

 if (VAR_3->type != VAR_1)
  return -VAR_0;

 switch (VAR_6) {
 case 130:
  return FUNC_1(VAR_7, VAR_4, VAR_5);

 case 128:
  return FUNC_3(VAR_7, VAR_4, VAR_5);

 case 129:
  return FUNC_2(VAR_7, VAR_4, VAR_5);

 default:
  return -VAR_0;
 }
}
