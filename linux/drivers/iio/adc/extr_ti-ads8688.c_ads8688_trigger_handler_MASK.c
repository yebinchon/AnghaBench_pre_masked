
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int masklength; int trig; int active_scan_mask; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,int) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 u16 VAR_6[VAR_0 + sizeof(s64)/sizeof(u16)];
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5->masklength; VAR_7++) {
  if (!FUNC_4(VAR_7, VAR_5->active_scan_mask))
   continue;
  VAR_6[VAR_8] = FUNC_0(VAR_5, VAR_7);
  VAR_8++;
 }

 FUNC_2(VAR_5, VAR_6,
   FUNC_1(VAR_5));

 FUNC_3(VAR_5->trig);

 return VAR_1;
}
