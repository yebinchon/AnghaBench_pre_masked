
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm3100_data {int conversion_time; int lock; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct iio_dev {scalar_t__ currentmode; int* active_scan_mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rm3100_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;
 int FUNC_4 (struct regmap*,int ,int) ;
 int** VAR_9 ;
 int FUNC_5 (struct rm3100_data*,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_10, int VAR_11, int VAR_12)
{
 struct rm3100_data *VAR_13 = FUNC_0(VAR_10);
 struct regmap *VAR_14 = VAR_13->regmap;
 unsigned int VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_1(&VAR_13->lock);

 VAR_16 = FUNC_3(VAR_14, VAR_4, &VAR_15);
 if (VAR_16 < 0)
  goto unlock_return;

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
  if (VAR_11 == VAR_9[VAR_17][0] &&
      VAR_12 == VAR_9[VAR_17][1])
   break;
 }
 if (VAR_17 == VAR_7) {
  VAR_16 = -VAR_0;
  goto unlock_return;
 }

 VAR_16 = FUNC_4(VAR_14, VAR_6, VAR_17 + VAR_8);
 if (VAR_16 < 0)
  goto unlock_return;


 if (VAR_11 == 600 && VAR_15 == 200) {
  VAR_16 = FUNC_5(VAR_13, 100);
  if (VAR_16 < 0)
   goto unlock_return;
 } else if (VAR_11 != 600 && VAR_15 == 100) {
  VAR_16 = FUNC_5(VAR_13, 200);
  if (VAR_16 < 0)
   goto unlock_return;
 }

 if (VAR_10->currentmode == VAR_1) {

  VAR_16 = FUNC_4(VAR_14, VAR_5, 0);
  if (VAR_16 < 0)
   goto unlock_return;
  VAR_16 = FUNC_4(VAR_13->regmap, VAR_5,
   (*VAR_10->active_scan_mask & 0x7) <<
   VAR_2 | VAR_3);
  if (VAR_16 < 0)
   goto unlock_return;
 }
 FUNC_2(&VAR_13->lock);

 VAR_13->conversion_time = VAR_9[VAR_17][2] * 2;
 return 0;

unlock_return:
 FUNC_2(&VAR_13->lock);
 return VAR_16;
}
