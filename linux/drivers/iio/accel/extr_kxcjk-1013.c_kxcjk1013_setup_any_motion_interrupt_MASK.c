
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct kxcjk1013_data*) ;
 int FUNC_4 (struct kxcjk1013_data*,int*) ;
 int FUNC_5 (struct kxcjk1013_data*,int) ;

__attribute__((used)) static int FUNC_6(struct kxcjk1013_data *VAR_6,
      bool VAR_7)
{
 int VAR_8;
 enum kxcjk1013_mode VAR_9;

 VAR_8 = FUNC_4(VAR_6, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_5(VAR_6, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_6->client, VAR_2);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error reading reg_int_ctrl1\n");
  return VAR_8;
 }

 if (VAR_7)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;

 VAR_8 = FUNC_2(VAR_6->client, VAR_2,
     VAR_8);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error writing reg_int_ctrl1\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_6->client, VAR_0);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error reading reg_ctrl1\n");
  return VAR_8;
 }

 if (VAR_7)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;

 VAR_8 = FUNC_2(VAR_6->client,
     VAR_0, VAR_8);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error writing reg_ctrl1\n");
  return VAR_8;
 }

 if (VAR_9 == VAR_4) {
  VAR_8 = FUNC_5(VAR_6, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
