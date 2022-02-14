
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hflags; } ;
struct TYPE_5__ {int nmi_window_exits; } ;
struct TYPE_7__ {TYPE_2__ arch; TYPE_1__ stat; } ;
struct vcpu_svm {TYPE_3__ vcpu; int nmi_iret_rip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_3)
{
 ++VAR_3->vcpu.stat.nmi_window_exits;
 FUNC_0(VAR_3, VAR_1);
 VAR_3->vcpu.arch.hflags |= VAR_0;
 VAR_3->nmi_iret_rip = FUNC_2(&VAR_3->vcpu);
 FUNC_1(VAR_2, &VAR_3->vcpu);
 return 1;
}
