
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad5755_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int * d8; int d32; } ;


 int FUNC_0 (unsigned int) ;
 struct ad5755_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2)
{
 struct ad5755_state *VAR_3 = FUNC_1(VAR_0);

 VAR_3->data[0].d32 = FUNC_0((VAR_1 << 16) | VAR_2);

 return FUNC_2(VAR_3->spi, &VAR_3->data[0].d8[1], 3);
}
