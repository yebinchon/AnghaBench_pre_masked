
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int data_ready; int trigger; int result; int regmap; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct iio_dev*) ;
 struct zpa2326_private* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (struct iio_dev*,char*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct iio_dev *VAR_7 = VAR_6;
 struct zpa2326_private *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9;
 bool VAR_10;
 irqreturn_t VAR_11 = VAR_2;





 VAR_10 = (FUNC_1(VAR_7) &&
  FUNC_4(VAR_7));





 VAR_8->result = FUNC_5(VAR_8->regmap, VAR_4, &VAR_9);
 if (VAR_8->result < 0) {
  if (VAR_10)
   return VAR_2;

  goto complete;
 }


 if (!(VAR_9 & VAR_3)) {






  FUNC_6(VAR_7, "unexpected interrupt status %02x",
        VAR_9);

  if (VAR_10)
   return VAR_2;

  VAR_8->result = -VAR_0;
  goto complete;
 }


 FUNC_3(VAR_8->trigger);

 if (VAR_10)




  return VAR_1;

 VAR_11 = VAR_1;

complete:




 FUNC_0(&VAR_8->data_ready);

 return VAR_11;
}
