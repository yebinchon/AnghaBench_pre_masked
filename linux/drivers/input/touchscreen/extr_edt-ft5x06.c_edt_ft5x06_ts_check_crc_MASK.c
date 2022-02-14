
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct edt_ft5x06_ts_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct edt_ft5x06_ts_data *VAR_0,
        u8 *VAR_1, int VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++)
  VAR_4 ^= VAR_1[VAR_3];

 if (VAR_4 != VAR_1[VAR_2-1]) {
  FUNC_0(&VAR_0->client->dev,
        "crc error: 0x%02x expected, got 0x%02x\n",
        VAR_4, VAR_1[VAR_2-1]);
  return 0;
 }

 return 1;
}
