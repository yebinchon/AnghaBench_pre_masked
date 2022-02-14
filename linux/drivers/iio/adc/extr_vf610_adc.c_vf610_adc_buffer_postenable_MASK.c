
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc {scalar_t__ regs; } ;
struct iio_dev {int masklength; int active_scan_mask; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (int ,int ) ;
 struct vf610_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4)
{
 struct vf610_adc *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_4(VAR_5->regs + VAR_2);
 VAR_8 |= VAR_0;
 FUNC_5(VAR_8, VAR_5->regs + VAR_2);

 VAR_6 = FUNC_1(VAR_4->active_scan_mask,
      VAR_4->masklength);

 VAR_8 = FUNC_0(VAR_6);
 VAR_8 |= VAR_1;

 FUNC_5(VAR_8, VAR_5->regs + VAR_3);

 return 0;
}
