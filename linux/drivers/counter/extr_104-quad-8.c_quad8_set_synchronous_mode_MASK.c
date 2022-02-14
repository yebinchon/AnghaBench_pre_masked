
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int* index_polarity; int base; unsigned int* synchronous_mode; int * quadrature_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 struct quad8_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (unsigned int const,int const) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, unsigned int VAR_4)
{
 struct quad8_iio *const VAR_5 = FUNC_0(VAR_2);
 const unsigned int VAR_6 = VAR_4 |
  VAR_5->index_polarity[VAR_3->channel] << 1;
 const int VAR_7 = VAR_5->base + 2 * VAR_3->channel + 1;


 if (VAR_4 && !VAR_5->quadrature_mode[VAR_3->channel])
  return -VAR_0;

 VAR_5->synchronous_mode[VAR_3->channel] = VAR_4;


 FUNC_1(VAR_1 | VAR_6, VAR_7);

 return 0;
}
