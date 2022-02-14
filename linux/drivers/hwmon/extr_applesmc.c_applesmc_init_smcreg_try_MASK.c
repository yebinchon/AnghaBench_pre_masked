
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct applesmc_registers {int init_complete; unsigned int key_count; int fan_count; int has_accelerometer; int has_key_backlight; int num_light_sensors; int index_count; scalar_t__ temp_count; scalar_t__ temp_begin; scalar_t__ temp_end; int * cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,char*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (struct applesmc_registers*) ;
 int FUNC_3 (int ,int*,int) ;
 int * FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,unsigned int,int,scalar_t__,int ,int,int,int) ;
 int FUNC_7 (char*,unsigned int,unsigned int) ;
 int FUNC_8 (unsigned int*) ;
 struct applesmc_registers VAR_7 ;

__attribute__((used)) static int FUNC_9(void)
{
 struct applesmc_registers *VAR_8 = &VAR_7;
 bool VAR_9 = 0, VAR_10 = 0;
 unsigned int VAR_11;
 u8 VAR_12[1];
 int VAR_13;

 if (VAR_8->init_complete)
  return 0;

 VAR_13 = FUNC_8(&VAR_11);
 if (VAR_13)
  return VAR_13;

 if (VAR_8->cache && VAR_8->key_count != VAR_11) {
  FUNC_7("key count changed from %d to %d\n",
   VAR_8->key_count, VAR_11);
  FUNC_5(VAR_8->cache);
  VAR_8->cache = ((void*)0);
 }
 VAR_8->key_count = VAR_11;

 if (!VAR_8->cache)
  VAR_8->cache = FUNC_4(VAR_8->key_count, sizeof(*VAR_8->cache), VAR_3);
 if (!VAR_8->cache)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_2, VAR_12, 1);
 if (VAR_13)
  return VAR_13;
 VAR_8->fan_count = VAR_12[0];
 if (VAR_8->fan_count > 10)
  VAR_8->fan_count = 10;

 VAR_13 = FUNC_0(&VAR_8->temp_begin, "T");
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_0(&VAR_8->temp_end, "U");
 if (VAR_13)
  return VAR_13;
 VAR_8->temp_count = VAR_8->temp_end - VAR_8->temp_begin;

 VAR_13 = FUNC_2(VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_4, &VAR_9);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_1(VAR_5, &VAR_10);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_1(VAR_6, &VAR_8->has_accelerometer);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_1(VAR_0, &VAR_8->has_key_backlight);
 if (VAR_13)
  return VAR_13;

 VAR_8->num_light_sensors = VAR_9 + VAR_10;
 VAR_8->init_complete = 1;

 FUNC_6("key=%d fan=%d temp=%d index=%d acc=%d lux=%d kbd=%d\n",
        VAR_8->key_count, VAR_8->fan_count, VAR_8->temp_count, VAR_8->index_count,
        VAR_8->has_accelerometer,
        VAR_8->num_light_sensors,
        VAR_8->has_key_backlight);

 return 0;
}
