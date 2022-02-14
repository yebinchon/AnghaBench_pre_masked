
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsa1212_data {TYPE_1__* client; int regmap; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct jsa1212_data*,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct jsa1212_data *VAR_4,
    unsigned int *VAR_5)
{
 int VAR_6;
 __le16 VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_3(VAR_0);


 VAR_6 = FUNC_4(VAR_4->regmap, VAR_1, &VAR_7, 2);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->client->dev, "als data read err\n");
  goto als_data_read_err;
 }

 *VAR_5 = FUNC_2(VAR_7);

als_data_read_err:
 return FUNC_1(VAR_4, VAR_2);
}
