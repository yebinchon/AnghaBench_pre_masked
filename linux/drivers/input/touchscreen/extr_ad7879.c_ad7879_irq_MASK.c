
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7879 {int timer; int dev; int conversion_data; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ad7879*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct ad7879 *VAR_7 = VAR_6;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_7->regmap, VAR_1,
     VAR_7->conversion_data, VAR_0);
 if (VAR_8)
  FUNC_1(VAR_7->dev, "failed to read %#02x: %d\n",
        VAR_1, VAR_8);
 else if (!FUNC_0(VAR_7))
  FUNC_2(&VAR_7->timer, VAR_4 + VAR_3);

 return VAR_2;
}
