
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxc4005_data {int dev; scalar_t__ buffer; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct mxc4005_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->regmap, VAR_0,
          (u8 *) VAR_1->buffer, sizeof(VAR_1->buffer));
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "failed to read axes\n");
  return VAR_2;
 }

 return 0;
}
