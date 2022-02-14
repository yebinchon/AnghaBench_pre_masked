
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iio_dev {int dummy; } ;
struct cm3605 {scalar_t__ dir; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (struct iio_dev*) ;
 struct cm3605* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct iio_dev *VAR_8 = VAR_7;
 struct cm3605 *VAR_9 = FUNC_2(VAR_8);
 u64 VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_0,
      VAR_3, VAR_9->dir);
 FUNC_3(VAR_8, VAR_10, FUNC_1(VAR_8));


 if (VAR_9->dir == VAR_2)
  VAR_9->dir = VAR_1;
 else
  VAR_9->dir = VAR_2;

 return VAR_5;
}
