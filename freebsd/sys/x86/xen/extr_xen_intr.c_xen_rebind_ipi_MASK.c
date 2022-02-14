
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenisrc {int xi_cpu; size_t xi_port; int xi_intsrc; } ;
struct evtchn_bind_ipi {int vcpu; size_t port; } ;
struct TYPE_2__ {int pc_vcpu_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_bind_ipi*) ;
 int * VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 struct xenisrc** VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct xenisrc *VAR_3)
{
 FUNC_2("Resume IPI event channel on UP");

}
