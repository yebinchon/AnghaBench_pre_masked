
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsa1212_data {int lock; TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct jsa1212_data *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_5->lock);

 VAR_6 = FUNC_3(VAR_5->regmap, VAR_4,
    VAR_1 |
    VAR_3,
    VAR_0 |
    VAR_2);

 if (VAR_6 < 0)
  FUNC_0(&VAR_5->client->dev, "power off cmd failed\n");

 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
