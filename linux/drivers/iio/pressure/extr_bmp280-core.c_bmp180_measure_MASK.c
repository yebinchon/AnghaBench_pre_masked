
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bmp280_data {size_t oversampling_press; int regmap; int dev; int done; scalar_t__ use_eoc; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct bmp280_data *VAR_4, u8 VAR_5)
{
 int VAR_6;
 const int VAR_7[] = { 4500, 7500, 13500, 25500 };
 unsigned int VAR_8;
 unsigned int VAR_9;

 if (VAR_4->use_eoc)
  FUNC_1(&VAR_4->done);

 VAR_6 = FUNC_4(VAR_4->regmap, VAR_2, VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->use_eoc) {





  VAR_6 = FUNC_6(&VAR_4->done,
        1 + FUNC_2(100));
  if (!VAR_6)
   FUNC_0(VAR_4->dev, "timeout waiting for completion\n");
 } else {
  if (VAR_5 == VAR_1)
   VAR_8 = 4500;
  else
   VAR_8 =
    VAR_7[VAR_4->oversampling_press];

  FUNC_5(VAR_8, VAR_8 + 1000);
 }

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_2, &VAR_9);
 if (VAR_6)
  return VAR_6;


 if (VAR_9 & VAR_0)
  return -VAR_3;

 return 0;
}
