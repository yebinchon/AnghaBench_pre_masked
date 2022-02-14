
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct mxt_object {scalar_t__ start_address; int num_report_ids; int type; } ;
struct mxt_data {scalar_t__ mem_size; int T5_msg_size; scalar_t__ T5_address; int T6_reportid; scalar_t__ T6_address; scalar_t__ T7_address; scalar_t__ T71_address; int multitouch; int T9_reportid_min; int num_touchids; scalar_t__ T44_address; int T19_reportid; int T100_reportid_min; int T100_reportid_max; int max_reportid; int msg_buf; int T9_reportid_max; TYPE_1__* info; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int object_num; int family_id; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,scalar_t__,int,int,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct mxt_object*) ;
 int FUNC_5 (struct mxt_object*) ;

__attribute__((used)) static int FUNC_6(struct mxt_data *VAR_3,
      struct mxt_object *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_3->client;
 int VAR_6;
 u8 VAR_7;
 u16 VAR_8;


 VAR_7 = 1;
 VAR_3->mem_size = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3->info->object_num; VAR_6++) {
  struct mxt_object *VAR_9 = VAR_4 + VAR_6;
  u8 VAR_10, VAR_11;

  FUNC_3(&VAR_9->start_address);

  if (VAR_9->num_report_ids) {
   VAR_10 = VAR_7;
   VAR_7 += VAR_9->num_report_ids *
     FUNC_4(VAR_9);
   VAR_11 = VAR_7 - 1;
  } else {
   VAR_10 = 0;
   VAR_11 = 0;
  }

  FUNC_0(&VAR_3->client->dev,
   "T%u Start:%u Size:%zu Instances:%zu Report IDs:%u-%u\n",
   VAR_9->type, VAR_9->start_address,
   FUNC_5(VAR_9), FUNC_4(VAR_9),
   VAR_10, VAR_11);

  switch (VAR_9->type) {
  case 134:
   if (VAR_3->info->family_id == 0x80 &&
       VAR_3->info->version < 0x20) {





    VAR_3->T5_msg_size = FUNC_5(VAR_9);
   } else {

    VAR_3->T5_msg_size = FUNC_5(VAR_9) - 1;
   }
   VAR_3->T5_address = VAR_9->start_address;
   break;
  case 135:
   VAR_3->T6_reportid = VAR_10;
   VAR_3->T6_address = VAR_9->start_address;
   break;
  case 133:
   VAR_3->T7_address = VAR_9->start_address;
   break;
  case 132:
   VAR_3->T71_address = VAR_9->start_address;
   break;
  case 128:
   VAR_3->multitouch = 128;

   VAR_3->T9_reportid_min = VAR_10;
   VAR_3->T9_reportid_max = VAR_10 +
      VAR_9->num_report_ids - 1;
   VAR_3->num_touchids = VAR_9->num_report_ids;
   break;
  case 130:
   VAR_3->T44_address = VAR_9->start_address;
   break;
  case 131:
   VAR_3->T19_reportid = VAR_10;
   break;
  case 129:
   VAR_3->multitouch = 129;
   VAR_3->T100_reportid_min = VAR_10;
   VAR_3->T100_reportid_max = VAR_11;

   VAR_3->num_touchids = VAR_9->num_report_ids - 2;
   break;
  }

  VAR_8 = VAR_9->start_address
   + FUNC_5(VAR_9) * FUNC_4(VAR_9) - 1;

  if (VAR_8 >= VAR_3->mem_size)
   VAR_3->mem_size = VAR_8 + 1;
 }


 VAR_3->max_reportid = VAR_7;


 if (VAR_3->T44_address && (VAR_3->T5_address != VAR_3->T44_address + 1)) {
  FUNC_1(&VAR_5->dev, "Invalid T44 position\n");
  return -VAR_0;
 }

 VAR_3->msg_buf = FUNC_2(VAR_3->max_reportid,
    VAR_3->T5_msg_size, VAR_2);
 if (!VAR_3->msg_buf)
  return -VAR_1;

 return 0;
}
