
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_board_info {struct psmouse_smbus_dev* platform_data; } ;
struct psmouse_smbus_dev {int need_deactivate; int node; struct i2c_board_info board; scalar_t__ client; struct psmouse* psmouse; } ;
struct psmouse {scalar_t__ resync_time; int disconnect; void* fast_reconnect; void* reconnect; int protocol_handler; struct psmouse_smbus_dev* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psmouse_smbus_dev*,int ) ;
 int FUNC_1 (struct psmouse_smbus_dev*) ;
 struct psmouse_smbus_dev* FUNC_2 (void const*,size_t,int ) ;
 struct psmouse_smbus_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct psmouse*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;

int FUNC_9(struct psmouse *VAR_9,
         const struct i2c_board_info *VAR_10,
         const void *VAR_11, size_t VAR_12,
         bool VAR_13,
         bool VAR_14)
{
 struct psmouse_smbus_dev *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->psmouse = VAR_9;
 VAR_15->board = *VAR_10;
 VAR_15->need_deactivate = VAR_13;

 if (VAR_11) {
  VAR_15->board.platform_data = FUNC_2(VAR_11, VAR_12,
            VAR_2);
  if (!VAR_15->board.platform_data) {
   FUNC_1(VAR_15);
   return -VAR_1;
  }
 }

 if (VAR_13)
  FUNC_8(VAR_9);

 VAR_9->private = VAR_15;
 VAR_9->protocol_handler = VAR_7;
 VAR_9->reconnect = VAR_8;
 VAR_9->fast_reconnect = VAR_8;
 VAR_9->disconnect = VAR_4;
 VAR_9->resync_time = 0;

 FUNC_6(&VAR_6);
 FUNC_4(&VAR_15->node, &VAR_5);
 FUNC_7(&VAR_6);


 VAR_16 = FUNC_0(VAR_15, VAR_3);

 if (VAR_15->client) {

  return 0;
 }





 FUNC_1(VAR_15->board.platform_data);
 VAR_15->board.platform_data = ((void*)0);

 if (VAR_16 < 0 || !VAR_14) {
  FUNC_6(&VAR_6);
  FUNC_5(&VAR_15->node);
  FUNC_7(&VAR_6);

  FUNC_1(VAR_15);
 }

 return VAR_16 < 0 ? VAR_16 : -VAR_0;
}
