
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_msg {int addr; int flags; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct geni_i2c_dev {scalar_t__ err; struct i2c_msg* cur; TYPE_1__ se; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct geni_i2c_dev*,struct i2c_msg*,int) ;
 int FUNC_2 (struct geni_i2c_dev*,struct i2c_msg*,int) ;
 struct geni_i2c_dev* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct geni_i2c_dev*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_4,
    struct i2c_msg VAR_5[],
    int VAR_6)
{
 struct geni_i2c_dev *VAR_7 = FUNC_3(VAR_4);
 int VAR_8, VAR_9;

 VAR_7->err = 0;
 FUNC_10(&VAR_7->done);
 VAR_9 = FUNC_4(VAR_7->se.dev);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->se.dev, "error turning SE resources:%d\n", VAR_9);
  FUNC_7(VAR_7->se.dev);

  FUNC_8(VAR_7->se.dev);
  return VAR_9;
 }

 FUNC_9(VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  u32 VAR_10 = VAR_8 < (VAR_6 - 1) ? VAR_3 : 0;

  VAR_10 |= ((VAR_5[VAR_8].addr << VAR_2) & VAR_1);

  VAR_7->cur = &VAR_5[VAR_8];
  if (VAR_5[VAR_8].flags & VAR_0)
   VAR_9 = FUNC_1(VAR_7, &VAR_5[VAR_8], VAR_10);
  else
   VAR_9 = FUNC_2(VAR_7, &VAR_5[VAR_8], VAR_10);

  if (VAR_9)
   break;
 }
 if (VAR_9 == 0)
  VAR_9 = VAR_6;

 FUNC_5(VAR_7->se.dev);
 FUNC_6(VAR_7->se.dev);
 VAR_7->cur = ((void*)0);
 VAR_7->err = 0;
 return VAR_9;
}
