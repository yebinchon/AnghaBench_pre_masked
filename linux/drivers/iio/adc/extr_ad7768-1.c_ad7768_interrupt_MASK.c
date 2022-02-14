
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7768_state {int completion; int trig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct iio_dev*) ;
 struct ad7768_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct ad7768_state *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_1(VAR_3))
  FUNC_3(VAR_4->trig);
 else
  FUNC_0(&VAR_4->completion);

 return VAR_0;
}
