
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsa1212_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct jsa1212_data*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct jsa1212_data *VAR_5,
    unsigned int *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_2(VAR_4);


 VAR_7 = FUNC_3(VAR_5->regmap, VAR_3, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_5->client->dev, "pxs data read err\n");
  goto pxs_data_read_err;
 }

 *VAR_6 = VAR_8 & VAR_2;

pxs_data_read_err:
 return FUNC_1(VAR_5, VAR_0);
}
