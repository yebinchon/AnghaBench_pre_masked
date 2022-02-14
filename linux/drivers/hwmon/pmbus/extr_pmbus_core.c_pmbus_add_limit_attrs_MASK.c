
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor_attr {int nlimit; int sfunc; scalar_t__ sbase; scalar_t__ compare; scalar_t__ update; int class; struct pmbus_limit_attr* limit; } ;
struct pmbus_sensor {int dummy; } ;
struct pmbus_limit_attr {scalar_t__ sbit; scalar_t__ low; int alarm; scalar_t__ update; int reg; int attr; } ;
struct pmbus_driver_info {int* func; } ;
struct pmbus_data {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pmbus_data*,char const*,int ,int,struct pmbus_sensor*,struct pmbus_sensor*,scalar_t__,scalar_t__) ;
 struct pmbus_sensor* FUNC_1 (struct pmbus_data*,char const*,int ,int,int,int ,int ,int,int,int) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1,
     struct pmbus_data *VAR_2,
     const struct pmbus_driver_info *VAR_3,
     const char *VAR_4, int VAR_5, int VAR_6,
     struct pmbus_sensor *VAR_7,
     const struct pmbus_sensor_attr *VAR_8)
{
 const struct pmbus_limit_attr *VAR_9 = VAR_8->limit;
 int VAR_10 = VAR_8->nlimit;
 int VAR_11 = 0;
 int VAR_12, VAR_13;
 struct pmbus_sensor *VAR_14;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if (FUNC_2(VAR_1, VAR_6, VAR_9->reg)) {
   VAR_14 = FUNC_1(VAR_2, VAR_4, VAR_9->attr, VAR_5,
      VAR_6, VAR_9->reg, VAR_8->class,
      VAR_8->update || VAR_9->update,
      0, 1);
   if (!VAR_14)
    return -VAR_0;
   if (VAR_9->sbit && (VAR_3->func[VAR_6] & VAR_8->sfunc)) {
    VAR_13 = FUNC_0(VAR_2, VAR_4,
     VAR_9->alarm, VAR_5,
     VAR_8->compare ? VAR_9->low ? VAR_14 : VAR_7
            : ((void*)0),
     VAR_8->compare ? VAR_9->low ? VAR_7 : VAR_14
            : ((void*)0),
     VAR_8->sbase + VAR_6, VAR_9->sbit);
    if (VAR_13)
     return VAR_13;
    VAR_11 = 1;
   }
  }
  VAR_9++;
 }
 return VAR_11;
}
