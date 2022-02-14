
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int flags; int len; } ;
struct TYPE_2__ {int timeout; } ;
struct hix5hd2_i2c_priv {int stop; int err; int state; TYPE_1__ adap; int dev; int msg_complete; struct i2c_msg* msg; int msg_len; scalar_t__ msg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (struct hix5hd2_i2c_priv*,int) ;
 int FUNC_2 (struct hix5hd2_i2c_priv*) ;
 int FUNC_3 (struct hix5hd2_i2c_priv*) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct hix5hd2_i2c_priv *VAR_5,
    struct i2c_msg *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 VAR_5->msg = VAR_6;
 VAR_5->msg_idx = 0;
 VAR_5->msg_len = VAR_5->msg->len;
 VAR_5->stop = VAR_7;
 VAR_5->err = 0;
 VAR_5->state = VAR_1;

 FUNC_4(&VAR_5->msg_complete);
 FUNC_1(VAR_5, VAR_7);

 VAR_8 = FUNC_5(&VAR_5->msg_complete,
           VAR_5->adap.timeout);
 if (VAR_8 == 0) {
  VAR_5->state = VAR_2;
  VAR_5->err = -VAR_0;
  FUNC_0(VAR_5->dev, "%s timeout=%d\n",
    VAR_6->flags & VAR_4 ? "rx" : "tx",
    VAR_5->adap.timeout);
 }
 VAR_9 = VAR_5->state;





 if (VAR_5->state == VAR_3 && VAR_7)
  VAR_9 = FUNC_3(VAR_5);

 if (VAR_9 < 0)
  FUNC_2(VAR_5);

 return VAR_5->err;
}
