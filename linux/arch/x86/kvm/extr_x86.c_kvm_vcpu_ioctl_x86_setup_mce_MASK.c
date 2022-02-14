
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mcg_cap; int mcg_ctl; int* mce_banks; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* setup_mce ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_5,
     u64 VAR_6)
{
 int VAR_7;
 unsigned VAR_8 = VAR_6 & 0xff, VAR_9;

 VAR_7 = -VAR_0;
 if (!VAR_8 || VAR_8 >= VAR_1)
  goto out;
 if (VAR_6 & ~(VAR_3 | 0xff | 0xff0000))
  goto out;
 VAR_7 = 0;
 VAR_5->arch.mcg_cap = VAR_6;

 if (VAR_6 & VAR_2)
  VAR_5->arch.mcg_ctl = ~(u64)0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  VAR_5->arch.mce_banks[VAR_9*4] = ~(u64)0;

 VAR_4->setup_mce(VAR_5);
out:
 return VAR_7;
}
