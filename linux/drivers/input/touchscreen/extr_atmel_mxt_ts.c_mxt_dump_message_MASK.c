
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxt_data {int T5_msg_size; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct mxt_data *VAR_0, u8 *VAR_1)
{
 FUNC_0(&VAR_0->client->dev, "message: %*ph\n",
  VAR_0->T5_msg_size, VAR_1);
}
