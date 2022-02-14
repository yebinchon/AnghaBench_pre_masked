
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int limit; int base; int selector; } ;


 int FUNC_0 (struct kvm_segment*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_segment*,int) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1, char *VAR_2, int VAR_3)
{
 struct kvm_segment VAR_4;
 int VAR_5;

 FUNC_1(VAR_1, &VAR_4, VAR_3);
 FUNC_2(VAR_0, VAR_2, 0x7fa8 + VAR_3 * 4, VAR_4.selector);

 if (VAR_3 < 3)
  VAR_5 = 0x7f84 + VAR_3 * 12;
 else
  VAR_5 = 0x7f2c + (VAR_3 - 3) * 12;

 FUNC_2(VAR_0, VAR_2, VAR_5 + 8, VAR_4.base);
 FUNC_2(VAR_0, VAR_2, VAR_5 + 4, VAR_4.limit);
 FUNC_2(VAR_0, VAR_2, VAR_5, FUNC_0(&VAR_4));
}
