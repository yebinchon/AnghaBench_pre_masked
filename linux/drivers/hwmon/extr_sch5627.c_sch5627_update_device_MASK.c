
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch5627_data {int control; int valid; int* temp; int* fan; int* in; int update_lock; void* last_updated; int addr; void* last_battery; } ;
struct device {int dummy; } ;


 struct sch5627_data* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 struct sch5627_data* FUNC_1 (struct device*) ;
 void* VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (void*,void*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sch5627_data *FUNC_9(struct device *VAR_13)
{
 struct sch5627_data *VAR_14 = FUNC_1(VAR_13);
 struct sch5627_data *VAR_15 = VAR_14;
 int VAR_16, VAR_17;

 FUNC_2(&VAR_14->update_lock);


 if (FUNC_7(VAR_12, VAR_14->last_battery + 300 * VAR_0)) {
  FUNC_6(VAR_14->addr, VAR_4,
       VAR_14->control | 0x10);
  VAR_14->last_battery = VAR_12;
 }


 if (FUNC_7(VAR_12, VAR_14->last_updated + VAR_0) || !VAR_14->valid) {
  for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
   VAR_17 = FUNC_4(VAR_14->addr,
    VAR_11[VAR_16],
    VAR_10[VAR_16],
    VAR_9[VAR_16]);
   if (FUNC_8(VAR_17 < 0)) {
    VAR_15 = FUNC_0(VAR_17);
    goto abort;
   }
   VAR_14->temp[VAR_16] = VAR_17;
  }

  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
   VAR_17 = FUNC_5(VAR_14->addr,
        VAR_5[VAR_16]);
   if (FUNC_8(VAR_17 < 0)) {
    VAR_15 = FUNC_0(VAR_17);
    goto abort;
   }
   VAR_14->fan[VAR_16] = VAR_17;
  }

  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
   VAR_17 = FUNC_4(VAR_14->addr,
    VAR_8[VAR_16],
    VAR_7[VAR_16],
    VAR_6[VAR_16]);
   if (FUNC_8(VAR_17 < 0)) {
    VAR_15 = FUNC_0(VAR_17);
    goto abort;
   }
   VAR_14->in[VAR_16] = VAR_17;
  }

  VAR_14->last_updated = VAR_12;
  VAR_14->valid = 1;
 }
abort:
 FUNC_3(&VAR_14->update_lock);
 return VAR_15;
}
