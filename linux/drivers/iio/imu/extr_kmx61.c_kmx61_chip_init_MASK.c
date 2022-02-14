
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kmx61_data {int odr_bits; int wake_duration; int wake_thresh; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct kmx61_data*,int*,int*,int) ;
 int FUNC_3 (struct kmx61_data*,int ,int,int) ;
 int FUNC_4 (struct kmx61_data*,int ) ;
 int FUNC_5 (struct kmx61_data*,int,int) ;

__attribute__((used)) static int FUNC_6(struct kmx61_data *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_9->client, VAR_8);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_9->client->dev, "Error reading who_am_i\n");
  return VAR_10;
 }

 if (VAR_10 != VAR_2) {
  FUNC_0(&VAR_9->client->dev,
   "Wrong chip id, got %x expected %x\n",
    VAR_10, VAR_2);
  return -VAR_0;
 }


 VAR_10 = FUNC_4(VAR_9, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_9->client, VAR_7);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_9->client->dev, "Error reading reg_odcntl\n");
  return VAR_10;
 }
 VAR_9->odr_bits = VAR_10;





 VAR_10 = FUNC_2(VAR_9, &VAR_11, &VAR_12, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_9, VAR_11, VAR_12);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9, 0, VAR_1 | VAR_5, 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->wake_thresh = VAR_4;
 VAR_9->wake_duration = VAR_3;

 return 0;
}
