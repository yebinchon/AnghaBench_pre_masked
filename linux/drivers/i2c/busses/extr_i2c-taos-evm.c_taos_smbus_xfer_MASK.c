
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct taos_data {char* buffer; scalar_t__ addr; int pos; scalar_t__ state; } ;
struct serio {int dummy; } ;
struct i2c_adapter {int dev; struct serio* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (char*,int,int*) ;
 int FUNC_4 (int) ;
 struct taos_data* FUNC_5 (struct serio*) ;
 int FUNC_6 (struct serio*,char) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,int,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_8, u16 VAR_9,
      unsigned short VAR_10, char VAR_11, u8 VAR_12,
      int VAR_13, union i2c_smbus_data *VAR_14)
{
 struct serio *VAR_15 = VAR_8->algo_data;
 struct taos_data *VAR_16 = FUNC_5(VAR_15);
 char *VAR_17;



 VAR_17 = VAR_16->buffer;



 if (VAR_9 != VAR_16->addr)
  VAR_17 += FUNC_7(VAR_17, "@%02X", VAR_9);

 switch (VAR_13) {
 case 129:
  if (VAR_11 == VAR_4)
   FUNC_7(VAR_17, "$#%02X", VAR_12);
  else
   FUNC_7(VAR_17, "$");
  break;
 case 128:
  if (VAR_11 == VAR_4)
   FUNC_7(VAR_17, "$%02X#%02X", VAR_12, VAR_14->byte);
  else
   FUNC_7(VAR_17, "$%02X", VAR_12);
  break;
 default:
  FUNC_2(&VAR_8->dev, "Unsupported transaction %d\n", VAR_13);
  return -VAR_2;
 }


 FUNC_0(&VAR_8->dev, "Command buffer: %s\n", VAR_16->buffer);
 for (VAR_17 = VAR_16->buffer; *VAR_17; VAR_17++)
  FUNC_6(VAR_15, *VAR_17);

 VAR_16->addr = VAR_9;


 VAR_16->pos = 0;
 VAR_16->state = VAR_6;
 FUNC_6(VAR_15, VAR_11 == VAR_4 ? '>' : '<');
 FUNC_9(VAR_7, VAR_16->state == VAR_5,
      FUNC_4(150));
 if (VAR_16->state != VAR_5
  || VAR_16->pos != 5) {
  FUNC_1(&VAR_8->dev, "Transaction timeout (pos=%d)\n",
   VAR_16->pos);
  return -VAR_0;
 }
 FUNC_0(&VAR_8->dev, "Answer buffer: %s\n", VAR_16->buffer);


 VAR_17 = VAR_16->buffer + 1;
 VAR_17[3] = '\0';
 if (!FUNC_8(VAR_17, "NAK"))
  return -VAR_1;

 if (VAR_11 == VAR_4) {
  if (!FUNC_8(VAR_17, "ACK"))
   return 0;
 } else {
  if (VAR_17[0] == 'x') {





   if (FUNC_3(VAR_17 + 1, 16, &VAR_14->byte))
    return -VAR_3;
   return 0;
  }
 }

 return -VAR_0;
}
