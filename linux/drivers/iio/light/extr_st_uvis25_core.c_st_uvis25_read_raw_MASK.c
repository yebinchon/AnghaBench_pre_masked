
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_uvis25_hw {int irq; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct st_uvis25_hw* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct st_uvis25_hw*,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
         struct iio_chan_spec const *VAR_2,
         int *VAR_3, int *VAR_4, long VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6)
  return VAR_6;

 switch (VAR_5) {
 case 128: {
  struct st_uvis25_hw *VAR_7 = FUNC_4(VAR_1);
  if (VAR_7->irq > 0)
   FUNC_0(VAR_7->irq);
  VAR_6 = FUNC_5(VAR_7, VAR_2->address, VAR_3);
  if (VAR_7->irq > 0)
   FUNC_1(VAR_7->irq);
  break;
 }
 default:
  VAR_6 = -VAR_0;
  break;
 }

 FUNC_3(VAR_1);

 return VAR_6;
}
