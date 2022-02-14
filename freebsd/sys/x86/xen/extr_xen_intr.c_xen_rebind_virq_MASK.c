
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenisrc {int xi_cpu; size_t xi_port; int xi_virq; int xi_intsrc; } ;
struct evtchn_bind_virq {int vcpu; size_t port; int virq; } ;
struct TYPE_2__ {int pc_vcpu_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_bind_virq*) ;
 int * VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*,int ,int,...) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 struct xenisrc** VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct xenisrc *VAR_3)
{
 int VAR_4 = VAR_3->xi_cpu;
 int VAR_5 = FUNC_3(VAR_4)->pc_vcpu_id;
 int VAR_6;
 struct evtchn_bind_virq VAR_7 = { .virq = VAR_3->xi_virq,
                                       .vcpu = VAR_5 };

 VAR_6 = FUNC_0(VAR_0,
                                     &VAR_7);
 if (VAR_6 != 0)
  FUNC_2("unable to rebind xen VIRQ#%d: %d", VAR_3->xi_virq, VAR_6);

 VAR_3->xi_port = VAR_7.port;
 VAR_3->xi_cpu = 0;
 VAR_2[VAR_7.port] = VAR_3;
 FUNC_1(VAR_7.port);
}
