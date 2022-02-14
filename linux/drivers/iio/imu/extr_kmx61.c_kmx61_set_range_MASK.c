
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kmx61_data {int range; TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct kmx61_data *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->client, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->client->dev, "Error reading reg_ctrl1\n");
  return VAR_4;
 }

 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_3 & VAR_1;

 VAR_4 = FUNC_2(VAR_2->client, VAR_0, VAR_4);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->client->dev, "Error writing reg_ctrl1\n");
  return VAR_4;
 }

 VAR_2->range = VAR_3;

 return 0;
}
