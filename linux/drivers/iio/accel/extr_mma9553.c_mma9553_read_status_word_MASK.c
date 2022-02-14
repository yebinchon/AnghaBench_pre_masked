
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mma9553_data {int mutex; TYPE_1__* client; scalar_t__ stepcnt_enabled; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct mma9553_data*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mma9553_data *VAR_2, u16 VAR_3,
        u16 *VAR_4)
{
 bool VAR_5;
 int VAR_6;







 VAR_5 = FUNC_2(VAR_2, 0, 0) ||
       VAR_2->stepcnt_enabled;
 if (!VAR_5) {
  FUNC_0(&VAR_2->client->dev, "No channels enabled\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_2->mutex);
 VAR_6 = FUNC_1(VAR_2->client, VAR_1,
           VAR_3, VAR_4);
 FUNC_4(&VAR_2->mutex);
 return VAR_6;
}
