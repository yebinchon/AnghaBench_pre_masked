
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7768_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad7768_state*,int ,int) ;
 struct ad7768_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1)
{
 struct ad7768_state *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;





 VAR_3 = FUNC_0(VAR_2, VAR_0, 3);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_2(VAR_1);
}
