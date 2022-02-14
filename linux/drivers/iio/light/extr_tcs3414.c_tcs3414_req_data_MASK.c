
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tcs3414_data {int control; TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct tcs3414_data *VAR_4)
{
 int VAR_5 = 25;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4->client, VAR_1,
  VAR_4->control | VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 while (VAR_5--) {
  VAR_6 = FUNC_1(VAR_4->client, VAR_1);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_6 & VAR_3)
   break;
  FUNC_3(20);
 }

 VAR_6 = FUNC_2(VAR_4->client, VAR_1,
  VAR_4->control);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->client->dev, "data not ready\n");
  return -VAR_0;
 }

 return 0;
}
