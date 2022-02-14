
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_uvis25_hw {int regmap; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ,struct iio_dev*,int *,int ,int *) ;
 struct st_uvis25_hw* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2)
{
 struct st_uvis25_hw *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(FUNC_2(VAR_3->regmap),
            VAR_2, ((void*)0),
            VAR_0,
            &VAR_1);
}
