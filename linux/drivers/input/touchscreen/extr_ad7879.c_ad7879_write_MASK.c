
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ad7879 {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ad7879 *VAR_0, u8 VAR_1, u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0->dev,
   "failed to write %#04x to register %#02x: %d\n",
   VAR_2, VAR_1, VAR_3);
  return VAR_3;
 }

 return 0;
}
