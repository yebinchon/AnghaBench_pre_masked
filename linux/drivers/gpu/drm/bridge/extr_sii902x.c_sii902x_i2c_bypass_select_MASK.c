
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sii902x {TYPE_1__* i2c; } ;
struct i2c_mux_core {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct sii902x* FUNC_1 (struct i2c_mux_core*) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct i2c_mux_core *VAR_6, u32 VAR_7)
{
 struct sii902x *VAR_8 = FUNC_1(VAR_6);
 struct device *VAR_9 = &VAR_8->i2c->dev;
 unsigned long VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_8->i2c, VAR_2,
        VAR_4,
        VAR_4);
 if (VAR_12)
  return VAR_12;

 VAR_10 = VAR_5 +
    FUNC_2(VAR_1);
 do {
  VAR_12 = FUNC_3(VAR_8->i2c, VAR_2,
         &VAR_11);
  if (VAR_12)
   return VAR_12;
 } while (!(VAR_11 & VAR_3) &&
   FUNC_6(VAR_5, VAR_10));

 if (!(VAR_11 & VAR_3)) {
  FUNC_0(VAR_9, "Failed to acquire the i2c bus\n");
  return -VAR_0;
 }

 return FUNC_5(VAR_8->i2c, VAR_2,
          VAR_11);
}
