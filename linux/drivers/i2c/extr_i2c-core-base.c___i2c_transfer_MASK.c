
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int flags; } ;
struct i2c_adapter {int retries; scalar_t__ timeout; TYPE_1__* algo; scalar_t__ quirks; } ;
struct TYPE_2__ {int (* master_xfer_atomic ) (struct i2c_adapter*,struct i2c_msg*,int) ;int (* master_xfer ) (struct i2c_adapter*,struct i2c_msg*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_6 (struct i2c_adapter*,struct i2c_msg*,int) ;
 scalar_t__ FUNC_7 (unsigned long,scalar_t__) ;
 int FUNC_8 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_9 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_10 (struct i2c_adapter*,int,int) ;
 int FUNC_11 (struct i2c_adapter*,struct i2c_msg*,int) ;

int FUNC_12(struct i2c_adapter *VAR_6, struct i2c_msg *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_0(!VAR_7 || VAR_8 < 1))
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10)
  return VAR_10;

 if (VAR_6->quirks && FUNC_2(VAR_6, VAR_7, VAR_8))
  return -VAR_2;






 if (FUNC_4(&VAR_4)) {
  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
   if (VAR_7[VAR_12].flags & VAR_3)
    FUNC_8(VAR_6, &VAR_7[VAR_12], VAR_12);
   else
    FUNC_11(VAR_6, &VAR_7[VAR_12], VAR_12);
 }


 VAR_9 = VAR_5;
 for (VAR_10 = 0, VAR_11 = 0; VAR_11 <= VAR_6->retries; VAR_11++) {
  if (FUNC_3() && VAR_6->algo->master_xfer_atomic)
   VAR_10 = VAR_6->algo->master_xfer_atomic(VAR_6, VAR_7, VAR_8);
  else
   VAR_10 = VAR_6->algo->master_xfer(VAR_6, VAR_7, VAR_8);

  if (VAR_10 != -VAR_0)
   break;
  if (FUNC_7(VAR_5, VAR_9 + VAR_6->timeout))
   break;
 }

 if (FUNC_4(&VAR_4)) {
  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
   if (VAR_7[VAR_13].flags & VAR_3)
    FUNC_9(VAR_6, &VAR_7[VAR_13], VAR_13);
  FUNC_10(VAR_6, VAR_8, VAR_10);
 }

 return VAR_10;
}
