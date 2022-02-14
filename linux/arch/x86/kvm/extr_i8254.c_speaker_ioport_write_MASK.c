
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_kpit_state {int speaker_data_on; int lock; } ;
struct kvm_pit {struct kvm_kpit_state pit_state; } ;
struct kvm_io_device {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm_pit*,int,int) ;
 struct kvm_pit* FUNC_3 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2,
    struct kvm_io_device *VAR_3,
    gpa_t VAR_4, int VAR_5, const void *VAR_6)
{
 struct kvm_pit *VAR_7 = FUNC_3(VAR_3);
 struct kvm_kpit_state *VAR_8 = &VAR_7->pit_state;
 u32 VAR_9 = *(u32 *) VAR_6;
 if (VAR_4 != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_8->lock);
 VAR_8->speaker_data_on = (VAR_9 >> 1) & 1;
 FUNC_2(VAR_7, 2, VAR_9 & 1);
 FUNC_1(&VAR_8->lock);
 return 0;
}
