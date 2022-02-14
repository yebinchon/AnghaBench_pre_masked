
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmfts_data {int running; TYPE_1__* client; scalar_t__ use_key; int mutex; scalar_t__ hover_enabled; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct stmfts_data* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_3)
{
 struct stmfts_data *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->client, VAR_1);
 if (VAR_5)
  FUNC_0(&VAR_4->client->dev,
    "failed to disable touchscreen: %d\n", VAR_5);

 FUNC_3(&VAR_4->mutex);

 VAR_4->running = 0;

 if (VAR_4->hover_enabled) {
  VAR_5 = FUNC_1(VAR_4->client,
        VAR_2);
  if (VAR_5)
   FUNC_0(&VAR_4->client->dev,
     "failed to disable hover: %d\n", VAR_5);
 }
 FUNC_4(&VAR_4->mutex);

 if (VAR_4->use_key) {
  VAR_5 = FUNC_1(VAR_4->client,
        VAR_0);
  if (VAR_5)
   FUNC_0(&VAR_4->client->dev,
     "failed to disable touchkey: %d\n", VAR_5);
 }

 FUNC_5(&VAR_4->client->dev);
}
