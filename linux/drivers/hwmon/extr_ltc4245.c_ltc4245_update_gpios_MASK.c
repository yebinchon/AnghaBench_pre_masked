
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ltc4245_data {int* cregs; int * gpios; int * vregs; scalar_t__ last_updated; int use_extra_gpios; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct ltc4245_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,size_t,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_5)
{
 struct ltc4245_data *VAR_6 = FUNC_1(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 u8 VAR_8, VAR_9, VAR_10;
 int VAR_11;


 if (!VAR_6->use_extra_gpios) {
  VAR_6->gpios[0] = VAR_6->vregs[VAR_3 - 0x10];
  return;
 }





 if (FUNC_3(VAR_4, VAR_6->last_updated + 5 * VAR_1)) {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6->gpios); VAR_11++)
   VAR_6->gpios[VAR_11] = -VAR_0;
 }
 VAR_8 = (VAR_6->cregs[VAR_2] & 0xc0) >> 6;
 if (VAR_8 > 0)
  VAR_8 -= 1;


 VAR_6->gpios[VAR_8] = VAR_6->vregs[VAR_3 - 0x10];


 VAR_9 = (VAR_8 + 1) % FUNC_0(VAR_6->gpios);





 VAR_10 = (VAR_6->cregs[VAR_2] & 0x3f) | ((VAR_9 + 1) << 6);


 FUNC_2(VAR_7, VAR_2, VAR_10);


 VAR_6->cregs[VAR_2] = VAR_10;
}
