
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gyroadc {scalar_t__ model; scalar_t__ regs; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rcar_gyroadc* FUNC_0 (struct iio_dev*) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
       unsigned int VAR_5, unsigned int VAR_6,
       unsigned int *VAR_7)
{
 struct rcar_gyroadc *VAR_8 = FUNC_0(VAR_4);
 unsigned int VAR_9 = VAR_1;

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 if (VAR_5 % 4)
  return -VAR_0;


 if (VAR_8->model == VAR_3)
  VAR_9 = VAR_2;

 if (VAR_5 > VAR_9)
  return -VAR_0;

 *VAR_7 = FUNC_1(VAR_8->regs + VAR_5);

 return 0;
}
