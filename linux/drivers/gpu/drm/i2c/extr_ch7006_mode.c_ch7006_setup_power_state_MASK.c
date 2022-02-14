
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int* regs; } ;
struct ch7006_priv {int select_subconnector; int subconnector; scalar_t__ last_dpms; int chip_version; TYPE_1__ state; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 struct ch7006_priv* FUNC_1 (struct drm_encoder*) ;

void FUNC_2(struct drm_encoder *VAR_10)
{
 struct ch7006_priv *VAR_11 = FUNC_1(VAR_10);
 uint8_t *VAR_12 = &VAR_11->state.regs[VAR_0];
 int VAR_13;

 VAR_13 = VAR_11->select_subconnector ? VAR_11->select_subconnector :
       VAR_11->subconnector;

 *VAR_12 = VAR_2;

 if (VAR_11->last_dpms == VAR_5) {
  switch (VAR_13) {
  case 128:
   *VAR_12 |= FUNC_0(VAR_1, VAR_4);
   break;
  case 130:
   *VAR_12 |= FUNC_0(VAR_1, VAR_9);
   break;
  case 129:
   *VAR_12 |= FUNC_0(VAR_1, VAR_7) |
    VAR_3;
   break;
  }

 } else {
  if (VAR_11->chip_version >= 0x20)
   *VAR_12 |= FUNC_0(VAR_1, VAR_6);
  else
   *VAR_12 |= FUNC_0(VAR_1, VAR_8);
 }
}
