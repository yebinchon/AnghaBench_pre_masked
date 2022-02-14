
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; int masklength; int active_scan_mask; int scan_bytes; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 int VAR_7 = 0;
 u16 *VAR_8;

 VAR_8 = FUNC_7(VAR_6->scan_bytes, VAR_0);
 if (!VAR_8)
  goto done;

 if (!FUNC_0(VAR_6->active_scan_mask, VAR_6->masklength)) {
  int VAR_9, VAR_10;

  for (VAR_9 = 0, VAR_10 = 0;
       VAR_9 < FUNC_1(VAR_6->active_scan_mask,
           VAR_6->masklength);
       VAR_9++, VAR_10++) {
   VAR_10 = FUNC_2(VAR_6->active_scan_mask,
       VAR_6->masklength, VAR_10);

   VAR_8[VAR_9] = VAR_2[VAR_10];
   VAR_7 += 2;
  }
 }

 FUNC_4(VAR_6, VAR_8,
        FUNC_3(VAR_6));

 FUNC_6(VAR_8);

done:




 FUNC_5(VAR_6->trig);

 return VAR_1;
}
