
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int* dpcd; int downstream_ports; int aux; int sink_count; int desc; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*) ;

__attribute__((used)) static bool
FUNC_10(struct intel_dp *VAR_5)
{
 if (!FUNC_7(VAR_5))
  return 0;





 if (!FUNC_6(VAR_5)) {
  FUNC_5(&VAR_5->aux, &VAR_5->desc,
     FUNC_4(VAR_5->dpcd));

  FUNC_9(VAR_5);
  FUNC_8(VAR_5);
 }





 if (!FUNC_6(VAR_5) &&
     !FUNC_3(&VAR_5->desc, VAR_1)) {
  u8 VAR_6;
  ssize_t VAR_7;

  VAR_7 = FUNC_2(&VAR_5->aux, VAR_4, &VAR_6);
  if (VAR_7 < 1)
   return 0;






  VAR_5->sink_count = FUNC_0(VAR_6);
  if (!VAR_5->sink_count)
   return 0;
 }

 if (!FUNC_4(VAR_5->dpcd))
  return 1;

 if (VAR_5->dpcd[VAR_2] == 0x10)
  return 1;

 if (FUNC_1(&VAR_5->aux, VAR_0,
        VAR_5->downstream_ports,
        VAR_3) < 0)
  return 0;

 return 1;
}
