
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch5636_data {int valid; int* in; int* temp_ctrl; int* temp_val; int* fan_ctrl; int* fan_val; int update_lock; scalar_t__ last_updated; int addr; } ;
struct device {int dummy; } ;


 struct sch5636_data* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (int) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sch5636_data* FUNC_3 (struct device*) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct sch5636_data *FUNC_11(struct device *VAR_12)
{
 struct sch5636_data *VAR_13 = FUNC_3(VAR_12);
 struct sch5636_data *VAR_14 = VAR_13;
 int VAR_15, VAR_16;

 FUNC_4(&VAR_13->update_lock);


 if (VAR_13->valid && !FUNC_9(VAR_11, VAR_13->last_updated + VAR_0))
  goto abort;

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_16 = FUNC_6(VAR_13->addr,
            VAR_7[VAR_15]);
  if (FUNC_10(VAR_16 < 0)) {
   VAR_14 = FUNC_0(VAR_16);
   goto abort;
  }
  VAR_13->in[VAR_15] = VAR_16;
 }

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  if (VAR_13->temp_ctrl[VAR_15] & VAR_10)
   continue;

  VAR_16 = FUNC_6(VAR_13->addr,
            VAR_8[VAR_15]);
  if (FUNC_10(VAR_16 < 0)) {
   VAR_14 = FUNC_0(VAR_16);
   goto abort;
  }
  VAR_13->temp_val[VAR_15] = VAR_16;

  VAR_16 = FUNC_6(VAR_13->addr,
            FUNC_2(VAR_15));
  if (FUNC_10(VAR_16 < 0)) {
   VAR_14 = FUNC_0(VAR_16);
   goto abort;
  }
  VAR_13->temp_ctrl[VAR_15] = VAR_16;

  if (VAR_16 & VAR_9) {
   FUNC_8(VAR_13->addr,
      FUNC_2(VAR_15), VAR_16);
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (VAR_13->fan_ctrl[VAR_15] & VAR_2)
   continue;

  VAR_16 = FUNC_7(VAR_13->addr,
       VAR_6[VAR_15]);
  if (FUNC_10(VAR_16 < 0)) {
   VAR_14 = FUNC_0(VAR_16);
   goto abort;
  }
  VAR_13->fan_val[VAR_15] = VAR_16;

  VAR_16 = FUNC_6(VAR_13->addr,
            FUNC_1(VAR_15));
  if (FUNC_10(VAR_16 < 0)) {
   VAR_14 = FUNC_0(VAR_16);
   goto abort;
  }
  VAR_13->fan_ctrl[VAR_15] = VAR_16;

  if (VAR_16 & VAR_1) {
   FUNC_8(VAR_13->addr,
      FUNC_1(VAR_15), VAR_16);
  }
 }

 VAR_13->last_updated = VAR_11;
 VAR_13->valid = 1;
abort:
 FUNC_5(&VAR_13->update_lock);
 return VAR_14;
}
