
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kmx61_data {TYPE_1__* client; int wake_thresh; int wake_duration; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct kmx61_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->client,
     VAR_1,
     VAR_2->wake_duration);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_2->client->dev, "Errow writing reg_wuf_timer\n");
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_2->client,
     VAR_0,
     VAR_2->wake_thresh);
 if (VAR_3 < 0)
  FUNC_0(&VAR_2->client->dev, "Error writing reg_wuf_thresh\n");

 return VAR_3;
}
