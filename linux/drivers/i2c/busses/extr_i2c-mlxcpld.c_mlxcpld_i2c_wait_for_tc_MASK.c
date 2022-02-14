
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int addr_width; int data_len; int msg_num; TYPE_1__* msg; int cmd; } ;
struct mlxcpld_i2c_priv {TYPE_2__ xfer; int dev; int smbus_block; } ;
struct TYPE_3__ {int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlxcpld_i2c_priv*,int*) ;
 int FUNC_2 (struct mlxcpld_i2c_priv*,int ,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct mlxcpld_i2c_priv *VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = 0;
 u8 VAR_16, VAR_17;

 do {
  FUNC_4(VAR_6 / 2, VAR_6);
  if (!FUNC_1(VAR_12, &VAR_13))
   break;
  VAR_15 += VAR_6;
 } while (VAR_13 == 0 && VAR_15 < VAR_8);

 switch (VAR_13) {
 case 128:
  return -VAR_3;

 case 130:
  if (VAR_12->xfer.cmd != VAR_4)
   return (VAR_12->xfer.addr_width + VAR_12->xfer.data_len);

  if (VAR_12->xfer.msg_num == 1)
   VAR_14 = 0;
  else
   VAR_14 = 1;

  if (!VAR_12->xfer.msg[VAR_14].buf)
   return -VAR_1;
  FUNC_2(VAR_12, VAR_10, &VAR_17,
          1);
  if (VAR_12->smbus_block && (VAR_17 & VAR_7)) {
   FUNC_2(VAR_12, VAR_11,
           &VAR_16, 1);
   if (FUNC_3(VAR_16 > (VAR_5 + 1))) {
    FUNC_0(VAR_12->dev, "Incorrect smbus block read message len\n");
    return -VAR_0;
   }
  } else {
   VAR_16 = VAR_12->xfer.data_len;
  }

  FUNC_2(VAR_12, VAR_9,
          VAR_12->xfer.msg[VAR_14].buf, VAR_16);

  return VAR_16;

 case 129:
  return -VAR_2;

 default:
  return -VAR_1;
 }
}
