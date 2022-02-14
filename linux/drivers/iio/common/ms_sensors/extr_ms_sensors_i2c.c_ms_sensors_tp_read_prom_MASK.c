
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms_tp_dev {TYPE_1__* client; int * prom; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct ms_tp_dev *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(
   VAR_3->client,
   VAR_1 + (VAR_4 << 1),
   &VAR_3->prom[VAR_4]);

  if (VAR_5)
   return VAR_5;
 }

 if (!FUNC_2(VAR_3->prom,
         VAR_2 + 1)) {
  FUNC_0(&VAR_3->client->dev,
   "Calibration coefficients crc check error\n");
  return -VAR_0;
 }

 return 0;
}
