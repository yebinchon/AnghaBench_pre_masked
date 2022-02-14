
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int data_len; int addr_width; int msg_num; int cmd; TYPE_1__* msg; } ;
struct mlxcpld_i2c_priv {TYPE_2__ xfer; scalar_t__ smbus_block; } ;
struct TYPE_3__ {int len; int flags; int* buf; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct mlxcpld_i2c_priv*,scalar_t__,int*,int) ;

__attribute__((used)) static void FUNC_1(struct mlxcpld_i2c_priv *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 u8 VAR_10, VAR_11;

 FUNC_0(VAR_7, VAR_6,
          &VAR_7->xfer.data_len, 1);

 VAR_11 = VAR_7->xfer.addr_width;

 if (VAR_7->smbus_block && VAR_7->xfer.msg_num >= 2 &&
     VAR_7->xfer.msg[1].len == 1 &&
     (VAR_7->xfer.msg[1].flags & VAR_1) &&
     (VAR_7->xfer.msg[1].flags & VAR_0))
  VAR_11 |= VAR_2;

 FUNC_0(VAR_7, VAR_5, &VAR_11, 1);

 for (VAR_8 = 0; VAR_8 < VAR_7->xfer.msg_num; VAR_8++) {
  if ((VAR_7->xfer.msg[VAR_8].flags & VAR_0) != VAR_0) {

   FUNC_0(VAR_7, VAR_4 +
            VAR_9, VAR_7->xfer.msg[VAR_8].buf,
            VAR_7->xfer.msg[VAR_8].len);
   VAR_9 += VAR_7->xfer.msg[VAR_8].len;
  }
 }





 VAR_10 = (VAR_7->xfer.msg[0].addr << 1) | VAR_7->xfer.cmd;
 FUNC_0(VAR_7, VAR_3, &VAR_10, 1);
}
