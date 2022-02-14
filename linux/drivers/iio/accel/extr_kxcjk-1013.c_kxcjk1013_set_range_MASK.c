
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kxcjk1013_data {int range; TYPE_1__* client; } ;
struct TYPE_5__ {int gsel_0; int gsel_1; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct kxcjk1013_data *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->client, VAR_0);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->client->dev, "Error reading reg_ctrl1\n");
  return VAR_6;
 }

 VAR_6 &= ~(VAR_1 |
   VAR_2);
 VAR_6 |= (VAR_3[VAR_5].gsel_0 << 3);
 VAR_6 |= (VAR_3[VAR_5].gsel_1 << 4);

 VAR_6 = FUNC_2(VAR_4->client,
     VAR_0,
     VAR_6);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->client->dev, "Error writing reg_ctrl1\n");
  return VAR_6;
 }

 VAR_4->range = VAR_5;

 return 0;
}
