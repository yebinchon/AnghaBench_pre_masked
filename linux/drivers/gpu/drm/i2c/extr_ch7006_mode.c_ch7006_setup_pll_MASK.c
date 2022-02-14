
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_3__ {int* regs; } ;
struct ch7006_priv {struct ch7006_mode* mode; TYPE_1__ state; } ;
struct TYPE_4__ {scalar_t__ clock; } ;
struct ch7006_mode {TYPE_2__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct i2c_client*,char*,int,int,int,int) ;
 struct i2c_client* FUNC_3 (struct drm_encoder*) ;
 struct ch7006_priv* FUNC_4 (struct drm_encoder*) ;

void FUNC_5(struct drm_encoder *VAR_12)
{
 struct i2c_client *VAR_13 = FUNC_3(VAR_12);
 struct ch7006_priv *VAR_14 = FUNC_4(VAR_12);
 uint8_t *VAR_15 = VAR_14->state.regs;
 const struct ch7006_mode *VAR_16 = VAR_14->mode;
 int VAR_17, VAR_18 = 0;
 int VAR_19, VAR_20 = 0;
 int VAR_21, VAR_22 = 0;

 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
   VAR_21 = VAR_0*(VAR_17+2)/(VAR_19+2);

   if (FUNC_0(VAR_21 - VAR_16->mode.clock) <
       FUNC_0(VAR_22 - VAR_16->mode.clock)) {
    VAR_22 = VAR_21;
    VAR_18 = VAR_17;
    VAR_20 = VAR_19;
   }
  }
 }

 VAR_15[VAR_7] = FUNC_1(VAR_9, VAR_18) |
  FUNC_1(VAR_8, VAR_20);

 VAR_15[VAR_3] = FUNC_1(VAR_4, VAR_20);
 VAR_15[VAR_5] = FUNC_1(VAR_6, VAR_18);

 if (VAR_18 < 108)
  VAR_15[VAR_10] |= VAR_11;
 else
  VAR_15[VAR_10] &= ~VAR_11;

 FUNC_2(VAR_13, "n=%d m=%d f=%d c=%d\n",
     VAR_18, VAR_20, VAR_22, VAR_18 < 108);
}
