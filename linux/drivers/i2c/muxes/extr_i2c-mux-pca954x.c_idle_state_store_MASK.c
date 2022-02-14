
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pca954x {scalar_t__ last_chan; int idle_state; TYPE_1__* chip; } ;
struct i2c_mux_core {int parent; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int nchans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 struct i2c_mux_core* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ) ;
 struct pca954x* FUNC_3 (struct i2c_mux_core*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*,int ,int*) ;
 int FUNC_6 (struct i2c_mux_core*,int ) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_7(VAR_4);
 struct i2c_mux_core *VAR_9 = FUNC_1(VAR_8);
 struct pca954x *VAR_10 = FUNC_3(VAR_9);
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_6, 0, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_11 != VAR_2 && VAR_11 != VAR_3 &&
     (VAR_11 < 0 || VAR_11 >= VAR_10->chip->nchans))
  return -VAR_0;

 FUNC_2(VAR_9->parent, VAR_1);

 FUNC_0(VAR_10->idle_state, VAR_11);




 if (VAR_10->last_chan || VAR_11 != VAR_3)
  VAR_12 = FUNC_6(VAR_9, 0);

 FUNC_4(VAR_9->parent, VAR_1);

 return VAR_12 < 0 ? VAR_12 : VAR_7;
}
