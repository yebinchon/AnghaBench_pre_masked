
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu_hv_synic {int * sint; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u64 FUNC_1(struct kvm_vcpu_hv_synic *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->sint[VAR_1]);
}
