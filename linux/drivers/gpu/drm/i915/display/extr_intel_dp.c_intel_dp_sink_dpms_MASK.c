
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lspcon {scalar_t__ active; } ;
struct intel_dp {int* dpcd; int aux; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct intel_dp*) ;
 struct intel_lspcon* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct intel_lspcon*) ;
 int FUNC_5 (int) ;

void FUNC_6(struct intel_dp *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;


 if (VAR_5->dpcd[VAR_0] < 0x11)
  return;

 if (VAR_6 != VAR_4) {
  if (FUNC_1(VAR_5))
   return;

  VAR_7 = FUNC_3(&VAR_5->aux, VAR_1,
      VAR_3);
 } else {
  struct intel_lspcon *VAR_9 = FUNC_2(VAR_5);





  for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
   VAR_7 = FUNC_3(&VAR_5->aux, VAR_1,
       VAR_2);
   if (VAR_7 == 1)
    break;
   FUNC_5(1);
  }

  if (VAR_7 == 1 && VAR_9->active)
   FUNC_4(VAR_9);
 }

 if (VAR_7 != 1)
  FUNC_0("failed to %s sink power state\n",
         VAR_6 == VAR_4 ? "enable" : "disable");
}
