
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_state {int vdd; } ;
struct iio_dev {int dummy; } ;


 struct ms5611_state* FUNC_0 (struct iio_dev const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct iio_dev *VAR_0)
{
 const struct ms5611_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->vdd);
}
