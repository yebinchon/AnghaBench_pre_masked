
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nmi_window_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3)
{
 FUNC_0(!VAR_2);
 FUNC_1(FUNC_3(VAR_3), VAR_0);
 ++VAR_3->stat.nmi_window_exits;
 FUNC_2(VAR_1, VAR_3);

 return 1;
}
