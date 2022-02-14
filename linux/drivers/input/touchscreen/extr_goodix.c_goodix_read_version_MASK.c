
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct goodix_ts_data {int id; int version; TYPE_1__* client; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int) ;
 scalar_t__ FUNC_4 (char*,int,int*) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct goodix_ts_data *VAR_1)
{
 int VAR_2;
 u8 VAR_3[6];
 char VAR_4[5];

 VAR_2 = FUNC_3(VAR_1->client, VAR_0, VAR_3, sizeof(VAR_3));
 if (VAR_2) {
  FUNC_0(&VAR_1->client->dev, "read version failed: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_5(VAR_4, VAR_3, 4);
 VAR_4[4] = 0;
 if (FUNC_4(VAR_4, 10, &VAR_1->id))
  VAR_1->id = 0x1001;

 VAR_1->version = FUNC_2(&VAR_3[4]);

 FUNC_1(&VAR_1->client->dev, "ID %d, version: %04x\n", VAR_1->id,
   VAR_1->version);

 return 0;
}
