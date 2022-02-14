
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mxt_data {TYPE_1__* client; scalar_t__ T6_address; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int,scalar_t__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mxt_data *VAR_1, u16 VAR_2,
     u8 VAR_3, bool VAR_4)
{
 u16 VAR_5;
 u8 VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_5 = VAR_1->T6_address + VAR_2;

 VAR_8 = FUNC_3(VAR_1->client, VAR_5, VAR_3);
 if (VAR_8)
  return VAR_8;

 if (!VAR_4)
  return 0;

 do {
  FUNC_2(20);
  VAR_8 = FUNC_0(VAR_1->client, VAR_5, 1, &VAR_6);
  if (VAR_8)
   return VAR_8;
 } while (VAR_6 != 0 && VAR_7++ <= 100);

 if (VAR_7 > 100) {
  FUNC_1(&VAR_1->client->dev, "Command failed!\n");
  return -VAR_0;
 }

 return 0;
}
