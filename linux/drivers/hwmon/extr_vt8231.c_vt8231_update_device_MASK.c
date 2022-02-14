
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vt8231_data {int valid; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int* temp; int* temp_max; int* temp_min; int* fan_div; int alarms; int update_lock; scalar_t__ last_updated; int uch_config; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct vt8231_data* FUNC_4 (struct device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (struct vt8231_data*,int ) ;

__attribute__((used)) static struct vt8231_data *FUNC_9(struct device *VAR_13)
{
 struct vt8231_data *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;
 u16 VAR_16;

 FUNC_5(&VAR_14->update_lock);

 if (FUNC_7(VAR_6, VAR_14->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_14->valid) {
  for (VAR_15 = 0; VAR_15 < 6; VAR_15++) {
   if (FUNC_1(VAR_15, VAR_14->uch_config)) {
    VAR_14->in[VAR_15] = FUNC_8(VAR_14,
      VAR_10[VAR_15]);
    VAR_14->in_min[VAR_15] = FUNC_8(VAR_14,
      VAR_12[VAR_15]);
    VAR_14->in_max[VAR_15] = FUNC_8(VAR_14,
      VAR_11[VAR_15]);
   }
  }
  for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
   VAR_14->fan[VAR_15] = FUNC_8(VAR_14,
      FUNC_2(VAR_15));
   VAR_14->fan_min[VAR_15] = FUNC_8(VAR_14,
      FUNC_3(VAR_15));
  }

  VAR_16 = FUNC_8(VAR_14, VAR_4);
  VAR_16 = (VAR_16 >> 6) | ((VAR_16 & 0x30) >> 2)
      | (FUNC_8(VAR_14, VAR_5) << 4);
  for (VAR_15 = 0; VAR_15 < 6; VAR_15++) {
   if (FUNC_0(VAR_15, VAR_14->uch_config)) {
    VAR_14->temp[VAR_15] = (FUNC_8(VAR_14,
             VAR_7[VAR_15]) << 2)
      | ((VAR_16 >> (2 * VAR_15)) & 0x03);
    VAR_14->temp_max[VAR_15] = FUNC_8(VAR_14,
            VAR_8[VAR_15]);
    VAR_14->temp_min[VAR_15] = FUNC_8(VAR_14,
            VAR_9[VAR_15]);
   }
  }

  VAR_15 = FUNC_8(VAR_14, VAR_3);
  VAR_14->fan_div[0] = (VAR_15 >> 4) & 0x03;
  VAR_14->fan_div[1] = VAR_15 >> 6;
  VAR_14->alarms = FUNC_8(VAR_14, VAR_1) |
   (FUNC_8(VAR_14, VAR_2) << 8);


  if (!VAR_14->fan[0] && VAR_14->fan_min[0])
   VAR_14->alarms |= 0x40;
  else if (VAR_14->fan[0] && !VAR_14->fan_min[0])
   VAR_14->alarms &= ~0x40;

  if (!VAR_14->fan[1] && VAR_14->fan_min[1])
   VAR_14->alarms |= 0x80;
  else if (VAR_14->fan[1] && !VAR_14->fan_min[1])
   VAR_14->alarms &= ~0x80;

  VAR_14->last_updated = VAR_6;
  VAR_14->valid = 1;
 }

 FUNC_6(&VAR_14->update_lock);

 return VAR_14;
}
