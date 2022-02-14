
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxt_data {int max_reportid; int T5_msg_size; scalar_t__ msg_buf; int T5_address; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,scalar_t__) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct mxt_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mxt_data *VAR_1, u8 VAR_2)
{
 struct device *VAR_3 = &VAR_1->client->dev;
 int VAR_4;
 int VAR_5;
 u8 VAR_6 = 0;


 if (VAR_2 > VAR_1->max_reportid)
  return -VAR_0;


 VAR_4 = FUNC_0(VAR_1->client, VAR_1->T5_address,
    VAR_1->T5_msg_size * VAR_2, VAR_1->msg_buf);
 if (VAR_4) {
  FUNC_1(VAR_3, "Failed to read %u messages (%d)\n", VAR_2, VAR_4);
  return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_2(VAR_1,
   VAR_1->msg_buf + VAR_1->T5_msg_size * VAR_5);

  if (VAR_4 == 1)
   VAR_6++;
 }


 return VAR_6;
}
