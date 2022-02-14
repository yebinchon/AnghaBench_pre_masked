
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_state {int (* reset ) (int *) ;} ;
struct iio_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct ms5611_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0)
{
 int VAR_1;
 struct ms5611_state *VAR_2 = FUNC_1(VAR_0);

 VAR_1 = VAR_2->reset(&VAR_0->dev);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev, "failed to reset device\n");
  return VAR_1;
 }

 FUNC_3(3000, 4000);

 return 0;
}
