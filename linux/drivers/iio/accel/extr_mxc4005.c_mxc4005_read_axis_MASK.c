
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxc4005_data {int dev; int regmap; } ;
typedef int reg ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,unsigned int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct mxc4005_data *VAR_0,
        unsigned int VAR_1)
{
 __be16 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0->regmap, VAR_1, (u8 *) &VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0) {
  FUNC_1(VAR_0->dev, "failed to read reg %02x\n", VAR_1);
  return VAR_3;
 }

 return FUNC_0(VAR_2);
}
