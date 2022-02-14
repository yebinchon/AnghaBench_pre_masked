
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_kpit_state {int speaker_data_on; int lock; } ;
struct kvm_pit {struct kvm_kpit_state pit_state; } ;
struct kvm_io_device {int dummy; } ;
typedef int ret ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm_pit*,int) ;
 int FUNC_6 (struct kvm_pit*,int) ;
 struct kvm_pit* FUNC_7 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_2,
       struct kvm_io_device *VAR_3,
       gpa_t VAR_4, int VAR_5, void *VAR_6)
{
 struct kvm_pit *VAR_7 = FUNC_7(VAR_3);
 struct kvm_kpit_state *VAR_8 = &VAR_7->pit_state;
 unsigned int VAR_9;
 int VAR_10;
 if (VAR_4 != VAR_1)
  return -VAR_0;


 VAR_9 = ((unsigned int)FUNC_1(FUNC_0()) >> 14) & 1;

 FUNC_3(&VAR_8->lock);
 VAR_10 = ((VAR_8->speaker_data_on << 1) | FUNC_5(VAR_7, 2) |
  (FUNC_6(VAR_7, 2) << 5) | (VAR_9 << 4));
 if (VAR_5 > sizeof(VAR_10))
  VAR_5 = sizeof(VAR_10);
 FUNC_2(VAR_6, (char *)&VAR_10, VAR_5);
 FUNC_4(&VAR_8->lock);
 return 0;
}
