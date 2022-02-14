
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; unsigned int* count_mode; int* quadrature_scale; scalar_t__* quadrature_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 unsigned int VAR_0 ;
 struct quad8_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (unsigned int,int const) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2, unsigned int VAR_3)
{
 struct quad8_iio *const VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5 = VAR_3 << 1;
 const int VAR_6 = VAR_4->base + 2 * VAR_2->channel + 1;

 VAR_4->count_mode[VAR_2->channel] = VAR_3;


 if (VAR_4->quadrature_mode[VAR_2->channel])
  VAR_5 |= (VAR_4->quadrature_scale[VAR_2->channel] + 1) << 3;


 FUNC_1(VAR_0 | VAR_5, VAR_6);

 return 0;
}
