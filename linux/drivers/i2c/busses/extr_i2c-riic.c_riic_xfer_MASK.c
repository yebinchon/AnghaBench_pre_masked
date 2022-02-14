
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int timeout; } ;
struct riic_dev {int err; int is_last; TYPE_1__ adapter; int msg_done; scalar_t__ base; struct i2c_msg* msg; int buf; int bytes_left; } ;
struct i2c_msg {int buf; } ;
struct TYPE_4__ {int parent; } ;
struct i2c_adapter {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct riic_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int *,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_11, struct i2c_msg VAR_12[], int VAR_13)
{
 struct riic_dev *VAR_14 = FUNC_0(VAR_11);
 unsigned long VAR_15;
 int VAR_16;
 u8 VAR_17;

 FUNC_1(VAR_11->dev.parent);

 if (FUNC_3(VAR_14->base + VAR_7) & VAR_2) {
  VAR_14->err = -VAR_0;
  goto out;
 }

 FUNC_4(&VAR_14->msg_done);
 VAR_14->err = 0;

 FUNC_6(0, VAR_14->base + VAR_9);

 for (VAR_16 = 0, VAR_17 = VAR_4; VAR_16 < VAR_13; VAR_16++) {
  VAR_14->bytes_left = VAR_10;
  VAR_14->buf = VAR_12[VAR_16].buf;
  VAR_14->msg = &VAR_12[VAR_16];
  VAR_14->is_last = (VAR_16 == VAR_13 - 1);

  FUNC_6(VAR_5 | VAR_6, VAR_14->base + VAR_8);

  FUNC_6(VAR_17, VAR_14->base + VAR_7);

  VAR_15 = FUNC_5(&VAR_14->msg_done, VAR_14->adapter.timeout);
  if (VAR_15 == 0)
   VAR_14->err = -VAR_1;

  if (VAR_14->err)
   break;

  VAR_17 = VAR_3;
 }

 out:
 FUNC_2(VAR_11->dev.parent);

 return VAR_14->err ?: VAR_13;
}
