
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int dummy; } ;
struct ad7303_state {int config; int vdd_reg; int vref_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ad7303_state *VAR_1,
 struct iio_chan_spec const *VAR_2)
{
 int VAR_3;

 if (VAR_1->config & VAR_0)
  return FUNC_0(VAR_1->vref_reg);

 VAR_3 = FUNC_0(VAR_1->vdd_reg);
 if (VAR_3 < 0)
  return VAR_3;
 return VAR_3 / 2;
}
