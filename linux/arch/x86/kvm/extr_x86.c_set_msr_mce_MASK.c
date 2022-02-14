
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct msr_data {int index; int data; int host_initiated; } ;
struct TYPE_2__ {int mcg_cap; int mcg_status; int mcg_ctl; int* mce_banks; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, struct msr_data *VAR_3)
{
 u64 VAR_4 = VAR_2->arch.mcg_cap;
 unsigned VAR_5 = VAR_4 & 0xff;
 u32 VAR_6 = VAR_3->index;
 u64 VAR_7 = VAR_3->data;

 switch (VAR_6) {
 case 128:
  VAR_2->arch.mcg_status = VAR_7;
  break;
 case 129:
  if (!(VAR_4 & VAR_0) &&
      (VAR_7 || !VAR_3->host_initiated))
   return 1;
  if (VAR_7 != 0 && VAR_7 != ~(u64)0)
   return 1;
  VAR_2->arch.mcg_ctl = VAR_7;
  break;
 default:
  if (VAR_6 >= VAR_1 &&
      VAR_6 < FUNC_0(VAR_5)) {
   u32 VAR_8 = VAR_6 - VAR_1;





   if ((VAR_8 & 0x3) == 0 &&
       VAR_7 != 0 && (VAR_7 | (1 << 10)) != ~(u64)0)
    return -1;


   if (!VAR_3->host_initiated &&
       (VAR_8 & 0x3) == 1 && VAR_7 != 0) {
    if (!FUNC_1(VAR_2))
     return -1;
   }

   VAR_2->arch.mce_banks[VAR_8] = VAR_7;
   break;
  }
  return 1;
 }
 return 0;
}
