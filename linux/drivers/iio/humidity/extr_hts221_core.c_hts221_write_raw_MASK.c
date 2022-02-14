
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct hts221_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct hts221_hw*,int ,int) ;
 int FUNC_1 (struct hts221_hw*,int) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct hts221_hw* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int VAR_5, int VAR_6, long VAR_7)
{
 struct hts221_hw *VAR_8 = FUNC_4(VAR_3);
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9)
  return VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = FUNC_1(VAR_8, VAR_5);
  break;
 case 131:
  switch (VAR_4->type) {
  case 129:
   VAR_9 = FUNC_0(VAR_8, VAR_1, VAR_5);
   break;
  case 128:
   VAR_9 = FUNC_0(VAR_8, VAR_2, VAR_5);
   break;
  default:
   VAR_9 = -VAR_0;
   break;
  }
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 FUNC_3(VAR_3);

 return VAR_9;
}
