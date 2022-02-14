
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dtv_frontend_properties {scalar_t__ delivery_system; scalar_t__ transmission_mode; scalar_t__ guard_interval; int isdbt_layer_enabled; TYPE_1__* layer; } ;
struct TYPE_2__ {int segment_count; scalar_t__ modulation; scalar_t__ fec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct dtv_frontend_properties *VAR_5)
{
 int VAR_6, VAR_7 = 0;


 if (VAR_5->delivery_system != VAR_3)
  return 0;




 if (VAR_5->transmission_mode == VAR_4) {
  FUNC_0("transmission mode auto\n");
  return 0;
 }




 if (VAR_5->guard_interval == VAR_1) {
  FUNC_0("guard interval auto\n");
  return 0;
 }





 if (!VAR_5->isdbt_layer_enabled) {
  FUNC_0("no layer modulation specified\n");
  return 0;
 }





 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  if (!(VAR_5->isdbt_layer_enabled & 1 << VAR_6))
   continue;

  if ((VAR_5->layer[VAR_6].segment_count > 13) ||
      (VAR_5->layer[VAR_6].segment_count == 0)) {
   VAR_5->isdbt_layer_enabled &= ~(1 << VAR_6);
   continue;
  }

  VAR_7 += VAR_5->layer[VAR_6].segment_count;

  if ((VAR_5->layer[VAR_6].modulation == VAR_2) ||
      (VAR_5->layer[VAR_6].fec == VAR_0)) {
   FUNC_0("layer %c has either modulation or FEC auto\n",
    'A' + VAR_6);
   return 0;
  }
 }





 if (VAR_7 == 0 || VAR_7 > 13) {
  FUNC_0("number of segments is invalid\n");
  return 0;
 }


 return 1;
}
