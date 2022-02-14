
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int* dpcd; int attached_connector; int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_dp *VAR_5)
{
 u8 VAR_6;

 if (VAR_5->dpcd[VAR_3] < 0x11)
  return;

 if (FUNC_1(&VAR_5->aux,
         VAR_2, &VAR_6) != 1 || !VAR_6)
  return;

 FUNC_2(&VAR_5->aux, VAR_2, VAR_6);

 if (VAR_6 & VAR_0)
  FUNC_3(VAR_5);

 if (VAR_6 & VAR_1)
  FUNC_4(VAR_5->attached_connector);

 if (VAR_6 & VAR_4)
  FUNC_0("Sink specific irq unhandled\n");
}
