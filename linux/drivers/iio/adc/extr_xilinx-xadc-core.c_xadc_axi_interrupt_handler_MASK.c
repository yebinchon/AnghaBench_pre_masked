
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xadc {scalar_t__ trigger; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xadc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iio_dev*,unsigned int) ;
 int FUNC_3 (struct xadc*,int ,int*) ;
 int FUNC_4 (struct xadc*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct iio_dev *VAR_8 = VAR_7;
 struct xadc *VAR_9 = FUNC_0(VAR_8);
 uint32_t VAR_10, VAR_11;
 unsigned int VAR_12;

 FUNC_3(VAR_9, VAR_5, &VAR_10);
 FUNC_3(VAR_9, VAR_4, &VAR_11);
 VAR_10 &= VAR_11;

 if (!VAR_10)
  return VAR_1;

 if ((VAR_10 & VAR_3) && VAR_9->trigger)
  FUNC_1(VAR_9->trigger);

 if (VAR_10 & VAR_2) {






  VAR_12 = (VAR_10 & 0x000e) >> 1;
  VAR_12 |= (VAR_10 & 0x0001) << 3;
  VAR_12 |= (VAR_10 & 0x3c00) >> 6;
  FUNC_2(VAR_8, VAR_12);
 }

 FUNC_4(VAR_9, VAR_5, VAR_10);

 return VAR_0;
}
