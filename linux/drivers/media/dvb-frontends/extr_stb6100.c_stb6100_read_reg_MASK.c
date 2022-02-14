
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stb6100_state {TYPE_1__* config; int i2c; } ;
struct i2c_msg {int* buf; int len; int flags; scalar_t__ addr; } ;
struct TYPE_2__ {scalar_t__ tuner_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,char*,int,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int * VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_3(struct stb6100_state *VAR_7, u8 VAR_8)
{
 u8 VAR_9[VAR_4];

 struct i2c_msg VAR_10 = {
  .addr = VAR_7->config->tuner_address + VAR_8,
  .flags = VAR_3,
  .buf = VAR_9,
  .len = 1
 };

 FUNC_1(VAR_7->i2c, &VAR_10, 1);

 if (FUNC_2(VAR_8 >= VAR_4)) {
  FUNC_0(VAR_6, VAR_2, 1, "Invalid register offset 0x%x", VAR_8);
  return -VAR_0;
 }
 if (FUNC_2(VAR_6 > VAR_1)) {
  FUNC_0(VAR_6, VAR_1, 1, "    Read from 0x%02x", VAR_7->config->tuner_address);
  FUNC_0(VAR_6, VAR_1, 1, "        %s: 0x%02x", VAR_5[VAR_8], VAR_9[0]);
 }

 return (unsigned int)VAR_9[0];
}
