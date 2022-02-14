
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mms114_touch {int dummy; } ;
struct mms114_data {struct input_dev* input_dev; } ;
struct input_dev {int mutex; int users; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mms114_data*,int ,int,int *) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct mms114_data*,struct mms114_touch*) ;
 int FUNC_4 (struct mms114_data*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct mms114_data *VAR_7 = VAR_6;
 struct input_dev *VAR_8 = VAR_7->input_dev;
 struct mms114_touch VAR_9[VAR_2];
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_5(&VAR_8->mutex);
 if (!VAR_8->users) {
  FUNC_6(&VAR_8->mutex);
  goto out;
 }
 FUNC_6(&VAR_8->mutex);

 VAR_10 = FUNC_4(VAR_7, VAR_4);
 if (VAR_10 <= 0)
  goto out;

 VAR_11 = VAR_10 / VAR_3;

 VAR_13 = FUNC_0(VAR_7, VAR_1, VAR_10,
   (u8 *)VAR_9);
 if (VAR_13 < 0)
  goto out;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  FUNC_3(VAR_7, VAR_9 + VAR_12);

 FUNC_1(VAR_7->input_dev, 1);
 FUNC_2(VAR_7->input_dev);

out:
 return VAR_0;
}
