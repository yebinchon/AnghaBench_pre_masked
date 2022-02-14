
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opal_occ_msg {int type; size_t throttle_status; void* chip; } ;
struct opal_msg {int * params; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {int restore; size_t throttle_reason; int throttle; int * reason; void* id; } ;



 size_t VAR_0 ;


 unsigned long VAR_1 ;
 void* FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_6,
       unsigned long VAR_7, void *VAR_8)
{
 struct opal_msg *VAR_9 = VAR_8;
 struct opal_occ_msg VAR_10;
 int VAR_11;

 if (VAR_7 != VAR_1)
  return 0;

 VAR_10.type = FUNC_0(VAR_9->params[0]);

 switch (VAR_10.type) {
 case 129:
  VAR_4 = 1;
  FUNC_1("OCC (On Chip Controller - enforces hard thermal/power limits) Resetting\n");







  if (!VAR_5) {
   VAR_5 = 1;
   FUNC_2("CPU frequency is throttled for duration\n");
  }

  break;
 case 130:
  FUNC_1("OCC Loading, CPU frequency is throttled until OCC is started\n");
  break;
 case 128:
  VAR_10.chip = FUNC_0(VAR_9->params[1]);
  VAR_10.throttle_status = FUNC_0(VAR_9->params[2]);

  if (VAR_4) {
   VAR_4 = 0;
   VAR_5 = 0;
   FUNC_1("OCC Active, CPU frequency is no longer throttled\n");

   for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
    VAR_2[VAR_11].restore = 1;
    FUNC_3(&VAR_2[VAR_11].throttle);
   }

   return 0;
  }

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   if (VAR_2[VAR_11].id == VAR_10.chip)
    break;

  if (VAR_10.throttle_status >= 0 &&
      VAR_10.throttle_status <= VAR_0) {
   VAR_2[VAR_11].throttle_reason = VAR_10.throttle_status;
   VAR_2[VAR_11].reason[VAR_10.throttle_status]++;
  }

  if (!VAR_10.throttle_status)
   VAR_2[VAR_11].restore = 1;

  FUNC_3(&VAR_2[VAR_11].throttle);
 }
 return 0;
}
