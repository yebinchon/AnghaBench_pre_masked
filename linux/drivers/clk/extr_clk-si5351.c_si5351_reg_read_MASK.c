
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct si5351_driver_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static inline u8 FUNC_2(struct si5351_driver_data *VAR_0, u8 VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1, &VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_0->client->dev,
   "unable to read from reg%02x\n", VAR_1);
  return 0;
 }

 return (u8)VAR_2;
}
