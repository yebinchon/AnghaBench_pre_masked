
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int debugfs_dentry; } ;


 int FUNC_0 (char*,int,int ,struct kvm_vcpu*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2(struct kvm_vcpu *VAR_5)
{
 FUNC_0("tsc-offset", 0444, VAR_5->debugfs_dentry, VAR_5,
       &VAR_2);

 if (FUNC_1(VAR_5))
  FUNC_0("lapic_timer_advance_ns", 0444,
        VAR_5->debugfs_dentry, VAR_5,
        &VAR_1);

 if (VAR_0) {
  FUNC_0("tsc-scaling-ratio", 0444,
        VAR_5->debugfs_dentry, VAR_5,
        &VAR_3);
  FUNC_0("tsc-scaling-ratio-frac-bits", 0444,
        VAR_5->debugfs_dentry, VAR_5,
        &VAR_4);
 }
}
