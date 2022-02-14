
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int*) ;

__attribute__((used)) static u8 FUNC_2(struct intel_dp *VAR_2)
{
 u8 VAR_3 = 8;

 if (FUNC_1(&VAR_2->aux,
         VAR_1, &VAR_3) == 1)
  VAR_3 &= VAR_0;
 else
  FUNC_0("Unable to get sink synchronization latency, assuming 8 frames\n");
 return VAR_3;
}
