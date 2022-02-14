
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us5182d_data {scalar_t__ power_mode; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct us5182d_data *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (VAR_1->power_mode == VAR_0)
  return 0;

 if (VAR_2) {
  VAR_3 = FUNC_0(&VAR_1->client->dev);
  if (VAR_3 < 0)
   FUNC_3(&VAR_1->client->dev);
 } else {
  FUNC_1(&VAR_1->client->dev);
  VAR_3 = FUNC_2(&VAR_1->client->dev);
 }

 return VAR_3;
}
