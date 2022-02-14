
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {TYPE_1__* funcs; } ;
struct dc_context {int dummy; } ;
struct TYPE_2__ {int (* wait_for_state ) (struct timing_generator*,int ) ;scalar_t__ (* did_triggered_reset_occur ) (struct timing_generator*) ;int (* is_counter_moving ) (struct timing_generator*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct timing_generator*) ;
 scalar_t__ FUNC_3 (struct timing_generator*) ;
 int FUNC_4 (struct timing_generator*,int ) ;
 int FUNC_5 (struct timing_generator*,int ) ;

__attribute__((used)) static bool FUNC_6(
 struct dc_context *VAR_2,
 struct timing_generator *VAR_3)
{
 bool VAR_4 = 0;



 const uint32_t VAR_5 = 10;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

  if (!VAR_3->funcs->is_counter_moving(VAR_3)) {
   FUNC_0("TG counter is not moving!\n");
   break;
  }

  if (VAR_3->funcs->did_triggered_reset_occur(VAR_3)) {
   VAR_4 = 1;

   FUNC_1("GSL: reset occurred at wait count: %d\n",
     VAR_6);
   break;
  }


  VAR_3->funcs->wait_for_state(VAR_3, VAR_0);
  VAR_3->funcs->wait_for_state(VAR_3, VAR_1);
 }

 if (0 == VAR_4)
  FUNC_0("GSL: Timeout on reset trigger!\n");

 return VAR_4;
}
