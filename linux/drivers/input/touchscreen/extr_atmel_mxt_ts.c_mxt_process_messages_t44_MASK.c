
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mxt_data {scalar_t__* msg_buf; scalar_t__ max_reportid; int update_input; scalar_t__ T5_msg_size; int T44_address; TYPE_1__* client; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct mxt_data*) ;
 int FUNC_4 (struct mxt_data*,scalar_t__*) ;
 int FUNC_5 (struct mxt_data*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(struct mxt_data *VAR_2)
{
 struct device *VAR_3 = &VAR_2->client->dev;
 int VAR_4;
 u8 VAR_5, VAR_6;


 VAR_4 = FUNC_0(VAR_2->client, VAR_2->T44_address,
  VAR_2->T5_msg_size + 1, VAR_2->msg_buf);
 if (VAR_4) {
  FUNC_1(VAR_3, "Failed to read T44 and T5 (%d)\n", VAR_4);
  return VAR_1;
 }

 VAR_5 = VAR_2->msg_buf[0];





 if (VAR_5 == 0)
  return VAR_1;

 if (VAR_5 > VAR_2->max_reportid) {
  FUNC_2(VAR_3, "T44 count %d exceeded max report id\n", VAR_5);
  VAR_5 = VAR_2->max_reportid;
 }


 VAR_4 = FUNC_4(VAR_2, VAR_2->msg_buf + 1);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3, "Unexpected invalid message\n");
  return VAR_1;
 }

 VAR_6 = VAR_5 - 1;


 if (VAR_6) {
  VAR_4 = FUNC_5(VAR_2, VAR_6);
  if (VAR_4 < 0)
   goto end;
  else if (VAR_4 != VAR_6)
   FUNC_2(VAR_3, "Unexpected invalid message\n");
 }

end:
 if (VAR_2->update_input) {
  FUNC_3(VAR_2);
  VAR_2->update_input = 0;
 }

 return VAR_0;
}
