
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct ad5449 {int * data; int spi; } ;


 int FUNC_0 (unsigned int) ;
 struct ad5449* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2)
{
 struct ad5449 *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_0->mlock);
 VAR_3->data[0] = FUNC_0((VAR_1 << 12) | VAR_2);
 VAR_4 = FUNC_4(VAR_3->spi, VAR_3->data, 2);
 FUNC_3(&VAR_0->mlock);

 return VAR_4;
}
