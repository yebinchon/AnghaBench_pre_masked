
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct psb_intel_sdvo {int i2c; int slave_addr; } ;
struct i2c_msg {int len; scalar_t__* buf; scalar_t__ flags; int addr; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (struct psb_intel_sdvo*,scalar_t__,void const*,int) ;

__attribute__((used)) static bool FUNC_4(struct psb_intel_sdvo *VAR_5, u8 VAR_6,
     const void *VAR_7, int VAR_8)
{
 u8 VAR_9[VAR_1*2 + 2], VAR_10;
 struct i2c_msg VAR_11[VAR_1 + 3];
 int VAR_12, VAR_13;

 if (VAR_8 > VAR_1) {
  FUNC_1("Need to increase arg length\n");
  return 0;
 }

 FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_11[VAR_12].addr = VAR_5->slave_addr;
  VAR_11[VAR_12].flags = 0;
  VAR_11[VAR_12].len = 2;
  VAR_11[VAR_12].buf = VAR_9 + 2 *VAR_12;
  VAR_9[2*VAR_12 + 0] = VAR_2 - VAR_12;
  VAR_9[2*VAR_12 + 1] = ((u8*)VAR_7)[VAR_12];
 }
 VAR_11[VAR_12].addr = VAR_5->slave_addr;
 VAR_11[VAR_12].flags = 0;
 VAR_11[VAR_12].len = 2;
 VAR_11[VAR_12].buf = VAR_9 + 2*VAR_12;
 VAR_9[2*VAR_12 + 0] = VAR_4;
 VAR_9[2*VAR_12 + 1] = VAR_6;


 VAR_10 = VAR_3;
 VAR_11[VAR_12+1].addr = VAR_5->slave_addr;
 VAR_11[VAR_12+1].flags = 0;
 VAR_11[VAR_12+1].len = 1;
 VAR_11[VAR_12+1].buf = &VAR_10;

 VAR_11[VAR_12+2].addr = VAR_5->slave_addr;
 VAR_11[VAR_12+2].flags = VAR_0;
 VAR_11[VAR_12+2].len = 1;
 VAR_11[VAR_12+2].buf = &VAR_10;

 VAR_13 = FUNC_2(VAR_5->i2c, VAR_11, VAR_12+3);
 if (VAR_13 < 0) {
  FUNC_0("I2c transfer returned %d\n", VAR_13);
  return 0;
 }
 if (VAR_13 != VAR_12+3) {

  FUNC_0("I2c transfer returned %d/%d\n", VAR_13, VAR_12+3);
  return 0;
 }

 return 1;
}
