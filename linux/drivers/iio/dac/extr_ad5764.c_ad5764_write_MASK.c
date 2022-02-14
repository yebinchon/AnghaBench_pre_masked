
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct ad5764_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int * d8; int d32; } ;


 int FUNC_0 (unsigned int) ;
 struct ad5764_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2)
{
 struct ad5764_state *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_0->mlock);
 VAR_3->data[0].d32 = FUNC_0((VAR_1 << 16) | VAR_2);

 VAR_4 = FUNC_4(VAR_3->spi, &VAR_3->data[0].d8[1], 3);
 FUNC_3(&VAR_0->mlock);

 return VAR_4;
}
