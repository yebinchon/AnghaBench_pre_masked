
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ipmb_msg {int dummy; } ;
struct TYPE_2__ {size_t len; } ;
struct ipmb_dev {size_t msg_idx; int lock; TYPE_1__ request; } ;
struct i2c_client {int addr; } ;
typedef enum i2c_slave_event { ____Placeholder_i2c_slave_event } i2c_slave_event ;


 int FUNC_0 (int ) ;



 struct ipmb_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct ipmb_dev*) ;
 int FUNC_3 (struct ipmb_dev*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0,
   enum i2c_slave_event VAR_1, u8 *VAR_2)
{
 struct ipmb_dev *VAR_3 = FUNC_1(VAR_0);
 u8 *VAR_4 = (u8 *)&VAR_3->request;
 unsigned long VAR_5;

 FUNC_5(&VAR_3->lock, VAR_5);
 switch (VAR_1) {
 case 128:
  FUNC_4(&VAR_3->request, 0, sizeof(VAR_3->request));
  VAR_3->msg_idx = 0;
  VAR_4[++VAR_3->msg_idx] = FUNC_0(VAR_0->addr);
  break;

 case 129:
  if (VAR_3->msg_idx >= sizeof(struct ipmb_msg))
   break;

  VAR_4[++VAR_3->msg_idx] = *VAR_2;
  break;

 case 130:
  VAR_3->request.len = VAR_3->msg_idx;

  if (FUNC_3(VAR_3, FUNC_0(VAR_0->addr)))
   FUNC_2(VAR_3);
  break;

 default:
  break;
 }
 FUNC_6(&VAR_3->lock, VAR_5);

 return 0;
}
