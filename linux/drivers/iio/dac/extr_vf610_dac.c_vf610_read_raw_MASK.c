
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_dac {int regs; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct vf610_dac* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
   struct iio_chan_spec const *VAR_4,
   int *VAR_5, int *VAR_6,
   long VAR_7)
{
 struct vf610_dac *VAR_8 = FUNC_1(VAR_3);

 switch (VAR_7) {
 case 129:
  *VAR_5 = FUNC_0(FUNC_2(VAR_8->regs));
  return VAR_2;
 case 128:





  *VAR_5 = 3300 ;
  *VAR_6 = 12;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
