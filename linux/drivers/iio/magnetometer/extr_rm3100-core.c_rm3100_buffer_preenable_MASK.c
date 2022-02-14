
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm3100_data {int regmap; } ;
struct iio_dev {int* active_scan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rm3100_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3)
{
 struct rm3100_data *VAR_4 = FUNC_0(VAR_3);


 return FUNC_1(VAR_4->regmap, VAR_2,
  (*VAR_3->active_scan_mask & 0x7) << VAR_0 |
  VAR_1);
}
