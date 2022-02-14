
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcs3472_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tcs3472_data *VAR_3)
{
 int VAR_4 = 50;
 int VAR_5;

 while (VAR_4--) {
  VAR_5 = FUNC_1(VAR_3->client, VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_5 & VAR_2)
   break;
  FUNC_2(20);
 }

 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->client->dev, "data not ready\n");
  return -VAR_0;
 }

 return 0;
}
