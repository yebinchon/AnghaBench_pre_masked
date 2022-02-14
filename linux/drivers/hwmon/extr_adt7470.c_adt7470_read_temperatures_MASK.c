
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct adt7470_data {int num_temp_sensors; int temperatures_probed; void** temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6,
         struct adt7470_data *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 u8 VAR_10, VAR_11[4], VAR_12[2];


 VAR_12[0] = FUNC_3(VAR_6, FUNC_1(0));
 VAR_12[1] = FUNC_3(VAR_6, FUNC_1(2));


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_11[VAR_9] = FUNC_3(VAR_6, FUNC_0(VAR_9));


 FUNC_4(VAR_6, FUNC_1(0),
  VAR_12[0] & ~(VAR_1));
 FUNC_4(VAR_6, FUNC_1(2),
  VAR_12[1] & ~(VAR_1));


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_4(VAR_6, FUNC_0(VAR_9), VAR_11[VAR_9]);


 VAR_10 = FUNC_3(VAR_6, VAR_2);
 VAR_10 |= 0x80;
 FUNC_4(VAR_6, VAR_2, VAR_10);


 VAR_8 = FUNC_5((VAR_7->num_temp_sensors >= 0 ?
        VAR_7->num_temp_sensors * 200 :
        VAR_5));


 VAR_10 = FUNC_3(VAR_6, VAR_2);
 VAR_10 &= ~0x80;
 FUNC_4(VAR_6, VAR_2, VAR_10);


 FUNC_4(VAR_6, FUNC_1(0), VAR_12[0]);
 FUNC_4(VAR_6, FUNC_1(2), VAR_12[1]);

 if (VAR_8) {
  FUNC_6("ha ha, interrupted\n");
  return -VAR_4;
 }


 if (VAR_7->num_temp_sensors >= 0)
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7->temp[VAR_9] = FUNC_3(VAR_6,
      FUNC_2(VAR_9));
  if (VAR_7->temp[VAR_9])
   VAR_7->num_temp_sensors = VAR_9 + 1;
 }
 VAR_7->temperatures_probed = 1;
 return 0;
}
