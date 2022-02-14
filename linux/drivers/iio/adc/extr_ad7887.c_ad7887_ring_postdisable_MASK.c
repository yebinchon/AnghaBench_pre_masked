
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7887_state {int * msg; int spi; } ;


 size_t VAR_0 ;
 struct ad7887_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1)
{
 struct ad7887_state *VAR_2 = FUNC_0(VAR_1);


 return FUNC_1(VAR_2->spi, &VAR_2->msg[VAR_0]);
}
