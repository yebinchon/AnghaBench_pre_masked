
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isl29501_private {int dummy; } ;
struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {unsigned long* active_scan_mask; int trig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct isl29501_private* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct isl29501_private*,int ,int *) ;
 scalar_t__ FUNC_4 (int ,unsigned long const*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct isl29501_private *VAR_7 = FUNC_0(VAR_6);
 const unsigned long *VAR_8 = VAR_6->active_scan_mask;
 u32 VAR_9[4] = {};

 if (FUNC_4(VAR_1, VAR_8))
  FUNC_3(VAR_7, VAR_2, VAR_9);

 FUNC_1(VAR_6, VAR_9, VAR_5->timestamp);
 FUNC_2(VAR_6->trig);

 return VAR_0;
}
