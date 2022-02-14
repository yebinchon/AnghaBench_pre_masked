
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssif_info {int ssif_debug; TYPE_1__* client; int recv; scalar_t__ multi_pos; scalar_t__ rtc_us_timer; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ssif_info*,int ,int *,int ) ;
 int FUNC_2 (struct ssif_info*,int (*) (struct ssif_info*,int ,int *,int ),int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ssif_info *VAR_5)
{
 int VAR_6;

 VAR_5->rtc_us_timer = 0;
 VAR_5->multi_pos = 0;

 VAR_6 = FUNC_2(VAR_5, FUNC_1, VAR_2,
     VAR_4,
     VAR_5->recv, VAR_1);
 if (VAR_6 < 0) {

  if (VAR_5->ssif_debug & VAR_3)
   FUNC_0(&VAR_5->client->dev,
    "Error from i2c_non_blocking_op(5)\n");

  FUNC_1(VAR_5, -VAR_0, ((void*)0), 0);
 }
}
