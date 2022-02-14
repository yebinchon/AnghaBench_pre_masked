
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct stv090x_state {scalar_t__* verbose; int i2c; struct stv090x_config* config; } ;
struct stv090x_config {int address; } ;
struct i2c_msg {unsigned int* buf; int len; int flags; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct stv090x_state *VAR_5, unsigned int VAR_6)
{
 const struct stv090x_config *VAR_7 = VAR_5->config;
 int VAR_8;

 u8 VAR_9[] = { VAR_6 >> 8, VAR_6 & 0xff };
 u8 VAR_10;

 struct i2c_msg VAR_11[] = {
  { .addr = VAR_7->address, .flags = 0, .buf = VAR_9, .len = 2 },
  { .addr = VAR_7->address, .flags = VAR_4, .buf = &VAR_10, .len = 1 }
 };

 VAR_8 = FUNC_1(VAR_5->i2c, VAR_11, 2);
 if (VAR_8 != 2) {
  if (VAR_8 != -VAR_1)
   FUNC_0(VAR_3, 1,
    "Read error, Reg=[0x%02x], Status=%d",
    VAR_6, VAR_8);

  return VAR_8 < 0 ? VAR_8 : -VAR_0;
 }
 if (FUNC_2(*VAR_5->verbose >= VAR_2))
  FUNC_0(VAR_3, 1, "Reg=[0x%02x], data=%02x",
   VAR_6, VAR_10);

 return (unsigned int) VAR_10;
}
