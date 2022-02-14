
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ppc_rmmu_info {int* ap_encodings; } ;
struct TYPE_2__ {int shift; int ap; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_ppc_rmmu_info *VAR_1,
     int VAR_2, int *VAR_3)
{
 if (!VAR_0[VAR_2].shift)
  return;
 VAR_1->ap_encodings[*VAR_3] = VAR_0[VAR_2].shift |
  (VAR_0[VAR_2].ap << 29);
 ++(*VAR_3);
}
