
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms5611_state {int vdd; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 struct ms5611_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_0)
{
 int VAR_1;
 struct ms5611_state *VAR_2 = FUNC_4(VAR_0);


 VAR_2->vdd = FUNC_3(VAR_0->dev.parent, "vdd");
 if (FUNC_0(VAR_2->vdd))
  return FUNC_1(VAR_2->vdd);

 VAR_1 = FUNC_8(VAR_2->vdd);
 if (VAR_1) {
  FUNC_2(VAR_0->dev.parent,
   "failed to enable Vdd supply: %d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 < 0)
  goto err_regulator_disable;

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 < 0)
  goto err_regulator_disable;

 return 0;

err_regulator_disable:
 FUNC_7(VAR_2->vdd);
 return VAR_1;
}
