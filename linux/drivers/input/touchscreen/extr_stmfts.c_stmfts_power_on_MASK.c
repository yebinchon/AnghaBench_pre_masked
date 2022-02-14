
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct stmfts_data {TYPE_1__* client; void* config_ver; void* config_id; void* fw_ver; void* chip_ver; void* chip_id; int regulators; } ;
typedef int reg ;
typedef int __be16 ;
struct TYPE_3__ {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,void**) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct stmfts_data*,int ) ;

__attribute__((used)) static int FUNC_9(struct stmfts_data *VAR_8)
{
 int VAR_9;
 u8 VAR_10[8];

 VAR_9 = FUNC_7(FUNC_0(VAR_8->regulators),
        VAR_8->regulators);
 if (VAR_9)
  return VAR_9;





 FUNC_6(20);

 VAR_9 = FUNC_4(VAR_8->client, VAR_3,
         sizeof(VAR_10), VAR_10);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 != sizeof(VAR_10))
  return -VAR_0;

 VAR_8->chip_id = FUNC_1((__be16 *)&VAR_10[6]);
 VAR_8->chip_ver = VAR_10[0];
 VAR_8->fw_ver = FUNC_1((__be16 *)&VAR_10[2]);
 VAR_8->config_id = VAR_10[4];
 VAR_8->config_ver = VAR_10[5];

 FUNC_3(VAR_8->client->irq);

 FUNC_6(50);

 VAR_9 = FUNC_8(VAR_8, VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_8(VAR_8, VAR_5);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_8(VAR_8, VAR_2);
 if (VAR_9)
  FUNC_2(&VAR_8->client->dev,
    "failed to perform mutual auto tune: %d\n", VAR_9);


 VAR_9 = FUNC_8(VAR_8, VAR_6);
 if (VAR_9)
  FUNC_2(&VAR_8->client->dev,
    "failed to perform self auto tune: %d\n", VAR_9);

 VAR_9 = FUNC_8(VAR_8, VAR_1);
 if (VAR_9)
  return VAR_9;





 (void) FUNC_5(VAR_8->client, VAR_4);

 return 0;
}
