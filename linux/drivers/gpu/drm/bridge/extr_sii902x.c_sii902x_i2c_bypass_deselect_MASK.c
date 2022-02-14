
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sii902x {TYPE_1__* i2c; } ;
struct i2c_mux_core {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct sii902x* FUNC_1 (struct i2c_mux_core*) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct i2c_mux_core *VAR_6, u32 VAR_7)
{
 struct sii902x *VAR_8 = FUNC_1(VAR_6);
 struct device *VAR_9 = &VAR_8->i2c->dev;
 unsigned long VAR_10;
 unsigned int VAR_11;
 u8 VAR_12;
 int VAR_13;






 FUNC_6(30);






 VAR_11 = 5;
 do {
  VAR_13 = FUNC_3(VAR_8->i2c, VAR_2,
         &VAR_12);
  VAR_11--;
 } while (VAR_13 && VAR_11);
 if (VAR_13) {
  FUNC_0(VAR_9, "failed to read status (%d)\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_8->i2c, VAR_2,
        VAR_4 |
        VAR_3, 0);
 if (VAR_13)
  return VAR_13;

 VAR_10 = VAR_5 +
    FUNC_2(VAR_1);
 do {
  VAR_13 = FUNC_3(VAR_8->i2c, VAR_2,
         &VAR_12);
  if (VAR_13)
   return VAR_13;
 } while (VAR_12 & (VAR_4 |
      VAR_3) &&
   FUNC_5(VAR_5, VAR_10));

 if (VAR_12 & (VAR_4 |
        VAR_3)) {
  FUNC_0(VAR_9, "failed to release the i2c bus\n");
  return -VAR_0;
 }

 return 0;
}
