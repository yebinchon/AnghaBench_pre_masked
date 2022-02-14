
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma8452_data {int sleep_val; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mma8452_data *VAR_3)
{
 int VAR_4 = 150;

 while (VAR_4-- > 0) {
  int VAR_5 = FUNC_1(VAR_3->client,
   VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
  if ((VAR_5 & VAR_2) == VAR_2)
   return 0;

  if (VAR_3->sleep_val <= 20)
   FUNC_3(VAR_3->sleep_val * 250,
         VAR_3->sleep_val * 500);
  else
   FUNC_2(20);
 }

 FUNC_0(&VAR_3->client->dev, "data not ready\n");

 return -VAR_0;
}
