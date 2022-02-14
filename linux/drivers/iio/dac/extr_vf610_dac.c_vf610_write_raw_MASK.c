
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_dac {int regs; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 struct vf610_dac* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
   struct iio_chan_spec const *VAR_2,
   int VAR_3, int VAR_4,
   long VAR_5)
{
 struct vf610_dac *VAR_6 = FUNC_1(VAR_1);

 switch (VAR_5) {
 case 128:
  FUNC_2(&VAR_1->mlock);
  FUNC_4(FUNC_0(VAR_3), VAR_6->regs);
  FUNC_3(&VAR_1->mlock);
  return 0;

 default:
  return -VAR_0;
 }
}
