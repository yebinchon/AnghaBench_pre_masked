
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xen_intr_handle_t ;
typedef int u_int ;
struct xenisrc {int xi_cpu; int xi_close; int xi_intsrc; } ;
struct evtchn_bind_ipi {int vcpu; int port; } ;
typedef int name ;
typedef struct evtchn_bind_ipi evtchn_close_t ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_filter_t ;
struct TYPE_2__ {int pc_vcpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct evtchn_bind_ipi*) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct xenisrc**,int ,int ,char*,int ,int *,int *,int,int *) ;
 int FUNC_6 (int ) ;

int
FUNC_7(u_int VAR_6, driver_filter_t VAR_7,
    enum intr_type VAR_8, xen_intr_handle_t *VAR_9)
{
 return (VAR_0);

}
