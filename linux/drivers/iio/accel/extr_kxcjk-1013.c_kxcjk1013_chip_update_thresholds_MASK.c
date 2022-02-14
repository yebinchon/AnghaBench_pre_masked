
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxcjk1013_data {scalar_t__ chipset; TYPE_1__* client; int wake_thres; int wake_dur; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct kxcjk1013_data *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_4->client,
     VAR_1,
     VAR_4->wake_dur);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->client->dev,
   "Error writing reg_wake_timer\n");
  return VAR_6;
 }

 VAR_5 = VAR_4->chipset == VAR_2 ?
  VAR_3 : VAR_0;
 VAR_6 = FUNC_1(VAR_4->client, VAR_5,
     VAR_4->wake_thres);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->client->dev, "Error writing reg_wake_thres\n");
  return VAR_6;
 }

 return 0;
}
