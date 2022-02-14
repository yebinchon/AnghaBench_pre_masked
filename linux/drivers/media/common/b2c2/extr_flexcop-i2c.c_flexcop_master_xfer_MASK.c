
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {scalar_t__ flags; int len; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct flexcop_i2c_adapter {TYPE_1__* fc; } ;
struct TYPE_2__ {int (* i2c_request ) (struct flexcop_i2c_adapter*,int ,int ,int ,int *,int) ;int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 struct flexcop_i2c_adapter* FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct flexcop_i2c_adapter*,int ,int ,int ,int *,int) ;
 int FUNC_5 (struct flexcop_i2c_adapter*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_4,
  struct i2c_msg VAR_5[], int VAR_6)
{
 struct flexcop_i2c_adapter *VAR_7 = FUNC_1(VAR_4);
 int VAR_8, VAR_9 = 0;





 if (VAR_6 == 1 && VAR_5[0].flags == VAR_3 && VAR_5[0].len <= 1)
  return 1;

 if (FUNC_2(&VAR_7->fc->i2c_mutex))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

  if (VAR_8+1 < VAR_6 && (VAR_5[VAR_8+1].flags == VAR_3)) {
   VAR_9 = VAR_7->fc->i2c_request(VAR_7, VAR_1, VAR_5[VAR_8].addr,
     VAR_5[VAR_8].buf[0], VAR_5[VAR_8+1].buf,
     VAR_5[VAR_8+1].len);
   VAR_8++;
  } else
   VAR_9 = VAR_7->fc->i2c_request(VAR_7, VAR_2, VAR_5[VAR_8].addr,
     VAR_5[VAR_8].buf[0], &VAR_5[VAR_8].buf[1],
     VAR_5[VAR_8].len - 1);
  if (VAR_9 < 0) {
   FUNC_0("i2c master_xfer failed");
   break;
  }
 }

 FUNC_3(&VAR_7->fc->i2c_mutex);

 if (VAR_9 == 0)
  VAR_9 = VAR_6;
 return VAR_9;
}
