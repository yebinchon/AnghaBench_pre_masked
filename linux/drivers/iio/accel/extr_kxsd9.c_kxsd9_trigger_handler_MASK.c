
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxsd9_state {int dev; int map; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct kxsd9_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int **,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 const struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct kxsd9_state *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 __be16 VAR_8[8];

 VAR_7 = FUNC_5(VAR_6->map,
          VAR_1,
          &VAR_8,
          8);
 if (VAR_7) {
  FUNC_0(VAR_6->dev,
   "error reading data\n");
  return VAR_7;
 }

 FUNC_3(VAR_5,
        VAR_8,
        FUNC_1(VAR_5));
 FUNC_4(VAR_5->trig);

 return VAR_0;
}
