
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct goodix_ts_data {TYPE_1__* client; } ;
struct firmware {int size; int* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(struct goodix_ts_data *VAR_1,
   const struct firmware *VAR_2)
{
 int VAR_3, VAR_4 = VAR_2->size - 3;
 u16 VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3 += 2)
  VAR_5 += FUNC_1(&VAR_2->data[VAR_3]);
 VAR_5 = (~VAR_5) + 1;
 if (VAR_5 != FUNC_1(&VAR_2->data[VAR_4])) {
  FUNC_0(&VAR_1->client->dev,
   "The checksum of the config fw is not correct");
  return -VAR_0;
 }

 if (VAR_2->data[VAR_4 + 2] != 1) {
  FUNC_0(&VAR_1->client->dev,
   "Config fw must have Config_Fresh register set");
  return -VAR_0;
 }

 return 0;
}
