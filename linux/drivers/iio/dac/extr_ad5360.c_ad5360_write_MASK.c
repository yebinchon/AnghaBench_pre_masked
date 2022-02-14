
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;


 int FUNC_0 (struct iio_dev*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->mlock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->mlock);

 return VAR_5;
}
