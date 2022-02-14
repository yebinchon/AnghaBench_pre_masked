
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stb6100_state {TYPE_1__* config; int i2c; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int tuner_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,char*,int ,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int * VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_3(struct stb6100_state *VAR_7, u8 VAR_8[])
{
 int VAR_9;
 struct i2c_msg VAR_10 = {
  .addr = VAR_7->config->tuner_address,
  .flags = VAR_3,
  .buf = VAR_8,
  .len = VAR_4
 };

 VAR_9 = FUNC_1(VAR_7->i2c, &VAR_10, 1);
 if (FUNC_2(VAR_9 != 1)) {
  FUNC_0(VAR_6, VAR_2, 1, "Read (0x%x) err, rc=[%d]",
   VAR_7->config->tuner_address, VAR_9);

  return -VAR_0;
 }
 if (FUNC_2(VAR_6 > VAR_1)) {
  int VAR_11;

  FUNC_0(VAR_6, VAR_1, 1, "    Read from 0x%02x", VAR_7->config->tuner_address);
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   FUNC_0(VAR_6, VAR_1, 1, "        %s: 0x%02x", VAR_5[VAR_11], VAR_8[VAR_11]);
 }
 return 0;
}
