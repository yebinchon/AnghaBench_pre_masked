
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ad7879 {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct ad7879 *VAR_0, u8 VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1, &VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "failed to read register %#02x: %d\n",
   VAR_1, VAR_3);
  return VAR_3;
 }

 return VAR_2;
}
