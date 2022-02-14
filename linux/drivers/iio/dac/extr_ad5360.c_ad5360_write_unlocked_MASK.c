
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad5360_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int * d8; int d32; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct ad5360_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 struct ad5360_state *VAR_5 = FUNC_3(VAR_0);

 VAR_3 <<= VAR_4;
 VAR_3 |= FUNC_1(VAR_1) | FUNC_0(VAR_2);
 VAR_5->data[0].d32 = FUNC_2(VAR_3);

 return FUNC_4(VAR_5->spi, &VAR_5->data[0].d8[1], 3);
}
