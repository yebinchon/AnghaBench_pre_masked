
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osif_priv {scalar_t__ status; } ;
struct i2c_msg {int flags; scalar_t__* buf; int len; int addr; } ;
struct i2c_adapter {int dev; struct osif_priv* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*,int ,int,int ,scalar_t__*,int) ;
 int FUNC_3 (struct i2c_adapter*,int ,int,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_7, struct i2c_msg *VAR_8,
    int VAR_9)
{
 struct osif_priv *VAR_10 = VAR_7->algo_data;
 struct i2c_msg *VAR_11;
 int VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_11 = &VAR_8[VAR_13];

  if (VAR_11->flags & VAR_1) {
   VAR_12 = FUNC_2(VAR_7, VAR_2,
         VAR_11->flags, VAR_11->addr,
         VAR_11->buf, VAR_11->len);
   if (VAR_12 != VAR_11->len) {
    FUNC_1(&VAR_7->dev, "failure reading data\n");
    return -VAR_0;
   }
  } else {
   VAR_12 = FUNC_3(VAR_7, VAR_5,
          VAR_11->flags, VAR_11->addr,
          VAR_11->buf, VAR_11->len);
   if (VAR_12 != VAR_11->len) {
    FUNC_1(&VAR_7->dev, "failure writing data\n");
    return -VAR_0;
   }
  }

  VAR_12 = FUNC_2(VAR_7, VAR_4, 0, 0, ((void*)0), 0);
  if (VAR_12) {
   FUNC_1(&VAR_7->dev, "failure sending STOP\n");
   return -VAR_0;
  }


  VAR_12 = FUNC_2(VAR_7, VAR_3, 0, 0,
        &VAR_10->status, 1);
  if (VAR_12 != 1) {
   FUNC_1(&VAR_7->dev, "failure reading status\n");
   return -VAR_0;
  }

  if (VAR_10->status != VAR_6) {
   FUNC_0(&VAR_7->dev, "status = %d\n", VAR_10->status);
   return -VAR_0;
  }
 }

 return VAR_13;
}
