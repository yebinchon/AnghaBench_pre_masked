
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kxcjk1013_data {int odr_bits; int wake_thres; TYPE_1__* client; scalar_t__ active_high_intr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct kxcjk1013_data*,int ) ;
 int FUNC_5 (struct kxcjk1013_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct kxcjk1013_data *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_2(VAR_10->client, VAR_7);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->client->dev, "Error reading who_am_i\n");
  return VAR_11;
 }

 FUNC_0(&VAR_10->client->dev, "KXCJK1013 Chip Id %x\n", VAR_11);

 VAR_11 = FUNC_4(VAR_10, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_10->client, VAR_2);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->client->dev, "Error reading reg_ctrl1\n");
  return VAR_11;
 }


 VAR_11 |= VAR_3;

 VAR_11 = FUNC_3(VAR_10->client, VAR_2,
     VAR_11);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->client->dev, "Error reading reg_ctrl\n");
  return VAR_11;
 }


 VAR_11 = FUNC_5(VAR_10, VAR_1);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_10->client, VAR_4);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->client->dev, "Error reading reg_data_ctrl\n");
  return VAR_11;
 }

 VAR_10->odr_bits = VAR_11;


 VAR_11 = FUNC_2(VAR_10->client, VAR_5);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->client->dev, "Error reading reg_int_ctrl1\n");
  return VAR_11;
 }

 if (VAR_10->active_high_intr)
  VAR_11 |= VAR_6;
 else
  VAR_11 &= ~VAR_6;

 VAR_11 = FUNC_3(VAR_10->client, VAR_5,
     VAR_11);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->client->dev, "Error writing reg_int_ctrl1\n");
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_10, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10->wake_thres = VAR_0;

 return 0;
}
