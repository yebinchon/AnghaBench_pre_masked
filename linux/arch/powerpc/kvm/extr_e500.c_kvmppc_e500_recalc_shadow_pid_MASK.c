
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* shadow_pid1; void* shadow_pid; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;
struct kvmppc_vcpu_e500 {TYPE_2__ vcpu; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (struct kvmppc_vcpu_e500*,int ,int ,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct kvmppc_vcpu_e500 *VAR_0)
{
 FUNC_4();
 VAR_0->vcpu.arch.shadow_pid = FUNC_3(VAR_0,
   FUNC_0(&VAR_0->vcpu),
   FUNC_1(&VAR_0->vcpu),
   FUNC_2(&VAR_0->vcpu), 1);
 VAR_0->vcpu.arch.shadow_pid1 = FUNC_3(VAR_0,
   FUNC_0(&VAR_0->vcpu), 0,
   FUNC_2(&VAR_0->vcpu), 1);
 FUNC_5();
}
