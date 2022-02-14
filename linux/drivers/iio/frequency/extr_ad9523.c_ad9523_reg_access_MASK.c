
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad9523_state {int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,unsigned int) ;
 int FUNC_2 (struct iio_dev*,unsigned int,unsigned int) ;
 struct ad9523_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3,
         unsigned int *VAR_4)
{
 struct ad9523_state *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 FUNC_4(&VAR_5->lock);
 if (VAR_4 == ((void*)0)) {
  VAR_6 = FUNC_2(VAR_1, VAR_2 | VAR_0, VAR_3);
  FUNC_0(VAR_1);
 } else {
  VAR_6 = FUNC_1(VAR_1, VAR_2 | VAR_0);
  if (VAR_6 < 0)
   goto out_unlock;
  *VAR_4 = VAR_6;
  VAR_6 = 0;
 }

out_unlock:
 FUNC_5(&VAR_5->lock);

 return VAR_6;
}
