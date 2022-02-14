
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int flags; int buf; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {int mem_mbx_lock; struct dib9000_fe_memory_map* fe_mm; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {int component_bus_speed; TYPE_2__ platform; } ;
struct dib9000_fe_memory_map {int addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int ) ;
 int FUNC_1 (struct dib9000_state*,size_t,int ,int) ;
 int FUNC_2 (struct dib9000_state*,int ,int,int ) ;
 int FUNC_3 (struct dib9000_state*,int ,int*) ;
 int FUNC_4 (struct dib9000_state*,int ,int) ;
 int FUNC_5 (char*) ;
 struct dib9000_state* FUNC_6 (struct i2c_adapter*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_5, struct i2c_msg VAR_6[], int VAR_7)
{
 struct dib9000_state *VAR_8 = FUNC_6(VAR_5);
 u8 VAR_9 = 0;
 u8 VAR_10 = VAR_0;
 u16 VAR_11 = VAR_8->component_bus_speed;
 struct dib9000_fe_memory_map *VAR_12 = &VAR_8->platform.risc.fe_mm[VAR_1];
 u8 VAR_13[13] = { 0 };

 VAR_13[0] = VAR_9;
 VAR_13[1] = VAR_10;
 VAR_13[2] = VAR_6[0].addr << 1;

 VAR_13[3] = (u8) VAR_11 & 0xff;
 VAR_13[4] = (u8) (VAR_11 >> 8);

 VAR_13[7] = 0;
 VAR_13[8] = 0;

 VAR_13[9] = (u8) (VAR_6[0].len);
 VAR_13[10] = (u8) (VAR_6[0].len >> 8);
 if ((VAR_7 > 1) && (VAR_6[1].flags & VAR_4)) {
  VAR_13[11] = (u8) (VAR_6[1].len);
  VAR_13[12] = (u8) (VAR_6[1].len >> 8);
 } else {
  VAR_13[11] = 0;
  VAR_13[12] = 0;
 }

 if (FUNC_7(&VAR_8->platform.risc.mem_mbx_lock) < 0) {
  FUNC_5("could not get the lock\n");
  return 0;
 }

 FUNC_3(VAR_8, VAR_2, VAR_13);

 {
  FUNC_2(VAR_8, VAR_12->addr, VAR_6[0].len, 0);
  FUNC_4(VAR_8, VAR_6[0].buf, VAR_6[0].len);
 }


 if (FUNC_0(VAR_8, VAR_3) < 0) {
  FUNC_8(&VAR_8->platform.risc.mem_mbx_lock);
  return 0;
 }


 if ((VAR_7 > 1) && (VAR_6[1].flags & VAR_4))
  FUNC_1(VAR_8, VAR_1, VAR_6[1].buf, VAR_6[1].len);

 FUNC_8(&VAR_8->platform.risc.mem_mbx_lock);

 return VAR_7;
}
