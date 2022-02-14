
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gyroadc {unsigned int num_channels; int * vref; struct device* dev; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,unsigned int,int) ;
 struct rcar_gyroadc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0)
{
 struct rcar_gyroadc *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = VAR_1->dev;
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_channels; VAR_3++) {
  if (!VAR_1->vref[VAR_3])
   continue;

  VAR_4 = FUNC_3(VAR_1->vref[VAR_3]);
  if (VAR_4) {
   FUNC_0(VAR_2, "Failed to enable regulator %i (ret=%i)\n",
    VAR_3, VAR_4);
   goto err;
  }
 }

 return 0;

err:
 FUNC_2(VAR_0);
 return VAR_4;
}
