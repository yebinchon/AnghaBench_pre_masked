
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ltr501_data {int regmap; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; int active_scan_mask; } ;
typedef int irqreturn_t ;
typedef int buf ;
typedef int als_buf ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*) ;
 struct ltr501_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ltr501_data*,int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int ,int ,int*,int) ;
 scalar_t__ FUNC_8 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct iio_poll_func *VAR_8 = VAR_7;
 struct iio_dev *VAR_9 = VAR_8->indio_dev;
 struct ltr501_data *VAR_10 = FUNC_1(VAR_9);
 u16 VAR_11[8];
 __le16 VAR_12[2];
 u8 VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15, VAR_16;

 FUNC_6(VAR_11, 0, sizeof(VAR_11));


 if (FUNC_8(0, VAR_9->active_scan_mask) ||
     FUNC_8(1, VAR_9->active_scan_mask))
  VAR_13 |= VAR_4;
 if (FUNC_8(2, VAR_9->active_scan_mask))
  VAR_13 |= VAR_5;

 VAR_15 = FUNC_5(VAR_10, VAR_13);
 if (VAR_15 < 0)
  goto done;

 if (VAR_13 & VAR_4) {
  VAR_15 = FUNC_7(VAR_10->regmap, VAR_1,
           (u8 *)VAR_12, sizeof(VAR_12));
  if (VAR_15 < 0)
   return VAR_15;
  if (FUNC_8(0, VAR_9->active_scan_mask))
   VAR_11[VAR_14++] = FUNC_4(VAR_12[1]);
  if (FUNC_8(1, VAR_9->active_scan_mask))
   VAR_11[VAR_14++] = FUNC_4(VAR_12[0]);
 }

 if (VAR_13 & VAR_5) {
  VAR_15 = FUNC_7(VAR_10->regmap, VAR_2,
           &VAR_16, 2);
  if (VAR_15 < 0)
   goto done;
  VAR_11[VAR_14++] = VAR_16 & VAR_3;
 }

 FUNC_2(VAR_9, VAR_11,
        FUNC_0(VAR_9));

done:
 FUNC_3(VAR_9->trig);

 return VAR_0;
}
