
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpr0521_data {TYPE_1__* client; int regmap; } ;
typedef int buffer ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct rpr0521_data *VAR_1, int *VAR_2)
{
 int VAR_3;
 __le16 VAR_4;

 VAR_3 = FUNC_2(VAR_1->regmap,
  VAR_0, &VAR_4, sizeof(VAR_4));

 if (VAR_3 < 0) {
  FUNC_0(&VAR_1->client->dev, "Failed to read PS OFFSET register\n");
  return VAR_3;
 }
 *VAR_2 = FUNC_1(VAR_4);

 return VAR_3;
}
