
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ppc_rmmu_info {TYPE_1__* geometries; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int page_shift; int* level_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_ppc_rmmu_info*,int ,int*) ;
 int FUNC_1 (struct kvm_ppc_rmmu_info*,int ,int) ;
 void** VAR_5 ;
 int FUNC_2 () ;

int FUNC_3(struct kvm *VAR_6, struct kvm_ppc_rmmu_info *VAR_7)
{
 int VAR_8;

 if (!FUNC_2())
  return -VAR_0;
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));


 VAR_7->geometries[0].page_shift = 12;
 VAR_7->geometries[0].level_bits[0] = 9;
 for (VAR_8 = 1; VAR_8 < 4; ++VAR_8)
  VAR_7->geometries[0].level_bits[VAR_8] = VAR_5[VAR_8];

 VAR_7->geometries[1].page_shift = 16;
 for (VAR_8 = 0; VAR_8 < 4; ++VAR_8)
  VAR_7->geometries[1].level_bits[VAR_8] = VAR_5[VAR_8];

 VAR_8 = 0;
 FUNC_0(VAR_7, VAR_3, &VAR_8);
 FUNC_0(VAR_7, VAR_4, &VAR_8);
 FUNC_0(VAR_7, VAR_2, &VAR_8);
 FUNC_0(VAR_7, VAR_1, &VAR_8);

 return 0;
}
