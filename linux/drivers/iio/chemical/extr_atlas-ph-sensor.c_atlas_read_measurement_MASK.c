
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct atlas_data {int regmap; TYPE_2__* chip; TYPE_1__* client; } ;
typedef int __be32 ;
struct TYPE_4__ {int delay; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_7(struct atlas_data *VAR_0, int VAR_1, __be32 *VAR_2)
{
 struct device *VAR_3 = &VAR_0->client->dev;
 int VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0) {
  FUNC_4(VAR_3);
  return VAR_5;
 }

 if (VAR_4)
  FUNC_0(VAR_0->chip->delay);

 VAR_5 = FUNC_6(VAR_0->regmap, VAR_1, (u8 *) VAR_2, sizeof(*VAR_2));

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);

 return VAR_5;
}
