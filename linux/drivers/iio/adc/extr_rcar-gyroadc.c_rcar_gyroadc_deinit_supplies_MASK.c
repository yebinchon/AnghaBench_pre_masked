
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gyroadc {unsigned int num_channels; int * vref; } ;
struct iio_dev {int dummy; } ;


 struct rcar_gyroadc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_0)
{
 struct rcar_gyroadc *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_channels; VAR_2++) {
  if (!VAR_1->vref[VAR_2])
   continue;

  FUNC_1(VAR_1->vref[VAR_2]);
 }
}
