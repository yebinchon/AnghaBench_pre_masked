
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor {int reg; int page; int data; scalar_t__ update; struct pmbus_sensor* next; } ;
struct pmbus_driver_info {int pages; int* func; } ;
struct pmbus_data {int valid; int update_lock; scalar_t__ last_updated; struct pmbus_sensor* sensors; void** status; void* (* read_status ) (struct i2c_client*,int) ;struct pmbus_driver_info* info; } ;
struct i2c_client {int dummy; } ;
struct device {int parent; } ;
struct _pmbus_status {int func; int base; int reg; } ;


 int FUNC_0 (struct _pmbus_status*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (struct i2c_client*,int,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 struct pmbus_data* FUNC_3 (struct i2c_client*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_client*) ;
 struct _pmbus_status* VAR_9 ;
 void* FUNC_7 (struct i2c_client*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_9 (int ) ;

__attribute__((used)) static struct pmbus_data *FUNC_10(struct device *VAR_10)
{
 struct i2c_client *VAR_11 = FUNC_9(VAR_10->parent);
 struct pmbus_data *VAR_12 = FUNC_3(VAR_11);
 const struct pmbus_driver_info *VAR_13 = VAR_12->info;
 struct pmbus_sensor *VAR_14;

 FUNC_4(&VAR_12->update_lock);
 if (FUNC_8(VAR_8, VAR_12->last_updated + VAR_0) || !VAR_12->valid) {
  int VAR_15, VAR_16;

  for (VAR_15 = 0; VAR_15 < VAR_13->pages; VAR_15++) {
   VAR_12->status[VAR_1 + VAR_15]
       = VAR_12->read_status(VAR_11, VAR_15);
   for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_9); VAR_16++) {
    struct _pmbus_status *VAR_17 = &VAR_9[VAR_16];

    if (!(VAR_13->func[VAR_15] & VAR_17->func))
     continue;
    VAR_12->status[VAR_17->base + VAR_15]
     = FUNC_1(VAR_11, VAR_15,
        VAR_17->reg);
   }
  }

  if (VAR_13->func[0] & VAR_4)
   VAR_12->status[VAR_2]
     = FUNC_1(VAR_11, 0,
        VAR_6);

  if (VAR_13->func[0] & VAR_5)
   VAR_12->status[VAR_3]
     = FUNC_1(VAR_11, 0,
        VAR_7);

  for (VAR_14 = VAR_12->sensors; VAR_14; VAR_14 = VAR_14->next) {
   if (!VAR_12->valid || VAR_14->update)
    VAR_14->data
        = FUNC_2(VAR_11,
           VAR_14->page,
           VAR_14->reg);
  }
  FUNC_6(VAR_11);
  VAR_12->last_updated = VAR_8;
  VAR_12->valid = 1;
 }
 FUNC_5(&VAR_12->update_lock);
 return VAR_12;
}
