
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xadc {int zynq_intmask; int zynq_masked_alarm; int lock; int zynq_unmask_work; int completion; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct xadc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iio_dev*,int ) ;
 int FUNC_7 (struct xadc*,int ,int*) ;
 int FUNC_8 (struct xadc*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct xadc*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_6, void *VAR_7)
{
 struct iio_dev *VAR_8 = VAR_7;
 struct xadc *VAR_9 = FUNC_1(VAR_8);
 uint32_t VAR_10;

 FUNC_7(VAR_9, VAR_4, &VAR_10);

 VAR_10 &= ~(VAR_9->zynq_intmask | VAR_9->zynq_masked_alarm);

 if (!VAR_10)
  return VAR_1;

 FUNC_4(&VAR_9->lock);

 FUNC_8(VAR_9, VAR_4, VAR_10);

 if (VAR_10 & VAR_3) {
  FUNC_10(VAR_9, VAR_3,
   VAR_3);
  FUNC_0(&VAR_9->completion);
 }

 VAR_10 &= VAR_2;
 if (VAR_10) {
  VAR_9->zynq_masked_alarm |= VAR_10;




  FUNC_10(VAR_9, 0, 0);

  FUNC_6(VAR_8,
    FUNC_9(VAR_10));


  FUNC_3(&VAR_9->zynq_unmask_work,
    FUNC_2(VAR_5));
 }
 FUNC_5(&VAR_9->lock);

 return VAR_0;
}
