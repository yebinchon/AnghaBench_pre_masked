
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_dac {unsigned int conv_mode; scalar_t__ regs; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vf610_dac* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
    const struct iio_chan_spec *VAR_3,
    unsigned int VAR_4)
{
 struct vf610_dac *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 FUNC_1(&VAR_2->mlock);
 VAR_5->conv_mode = VAR_4;
 VAR_6 = FUNC_3(VAR_5->regs + VAR_1);
 if (VAR_4)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_4(VAR_6, VAR_5->regs + VAR_1);
 FUNC_2(&VAR_2->mlock);

 return 0;
}
