
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {size_t pos; int dev; int lock; int send_stop; TYPE_1__* msg; } ;
typedef enum sh_mobile_i2c_op { ____Placeholder_sh_mobile_i2c_op } sh_mobile_i2c_op ;
struct TYPE_2__ {int* buf; } ;


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
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned char FUNC_2 (struct sh_mobile_i2c_data*,int ) ;
 int FUNC_3 (struct sh_mobile_i2c_data*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_6(struct sh_mobile_i2c_data *VAR_12, enum sh_mobile_i2c_op VAR_13)
{
 unsigned char VAR_14 = 0;
 unsigned long VAR_15;

 FUNC_0(VAR_12->dev, "op %d\n", VAR_13);

 FUNC_4(&VAR_12->lock, VAR_15);

 switch (VAR_13) {
 case 132:
  FUNC_3(VAR_12, VAR_0, VAR_2 | VAR_5 | VAR_1);
  break;
 case 130:
  FUNC_3(VAR_12, VAR_7, VAR_11 | VAR_8 | VAR_10);
  FUNC_3(VAR_12, VAR_6, FUNC_1(VAR_12->msg));
  break;
 case 131:
  FUNC_3(VAR_12, VAR_6, VAR_12->msg->buf[VAR_12->pos]);
  break;
 case 129:
  FUNC_3(VAR_12, VAR_0, VAR_12->send_stop ? VAR_2 | VAR_5
            : VAR_2 | VAR_5 | VAR_1);
  break;
 case 128:
  FUNC_3(VAR_12, VAR_0, VAR_2 | VAR_4);
  break;
 case 135:
  VAR_14 = FUNC_2(VAR_12, VAR_6);
  break;
 case 134:
  FUNC_3(VAR_12, VAR_7,
         VAR_9 | VAR_11 | VAR_8 | VAR_10);
  FUNC_3(VAR_12, VAR_0, VAR_2 | VAR_3);
  break;
 case 133:
  FUNC_3(VAR_12, VAR_7,
         VAR_9 | VAR_11 | VAR_8 | VAR_10);
  VAR_14 = FUNC_2(VAR_12, VAR_6);
  FUNC_3(VAR_12, VAR_0, VAR_2 | VAR_3);
  break;
 }

 FUNC_5(&VAR_12->lock, VAR_15);

 FUNC_0(VAR_12->dev, "op %d, data out 0x%02x\n", VAR_13, VAR_14);
 return VAR_14;
}
