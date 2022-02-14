
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kxcjk1013_data {TYPE_1__* client; } ;
typedef enum kxcjk1013_mode { ____Placeholder_kxcjk1013_mode } kxcjk1013_mode ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct kxcjk1013_data *VAR_3,
         enum kxcjk1013_mode VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->client, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->client->dev, "Error reading reg_ctrl1\n");
  return VAR_5;
 }

 if (VAR_4 == VAR_2)
  VAR_5 &= ~VAR_1;
 else
  VAR_5 |= VAR_1;

 VAR_5 = FUNC_2(VAR_3->client,
     VAR_0, VAR_5);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->client->dev, "Error writing reg_ctrl1\n");
  return VAR_5;
 }

 return 0;
}
