
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xen_intr_handle_t ;
typedef size_t u_int ;
struct TYPE_3__ {int is_event; } ;
struct xenisrc {size_t xi_cpu; int xi_close; size_t xi_virq; TYPE_1__ xi_intsrc; } ;
struct evtchn_bind_virq {size_t virq; int vcpu; int port; } ;
typedef struct evtchn_bind_virq evtchn_close_t ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_4__ {int pc_vcpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct evtchn_bind_virq*) ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct xenisrc**,int ,int ,int ,int ,int ,void*,int,int *) ;
 int FUNC_7 (int ) ;

int
FUNC_8(device_t VAR_4, u_int VAR_5, u_int VAR_6,
    driver_filter_t VAR_7, driver_intr_t VAR_8, void *VAR_9,
    enum intr_type VAR_10, xen_intr_handle_t *VAR_11)
{
 int VAR_12 = FUNC_4(VAR_6)->pc_vcpu_id;
 struct xenisrc *VAR_13;
 struct evtchn_bind_virq VAR_14 = { .virq = VAR_5, .vcpu = VAR_12 };
 int VAR_15;

 VAR_13 = ((void*)0);
 VAR_15 = FUNC_0(VAR_0, &VAR_14);
 if (VAR_15 != 0) {




  return (-VAR_15);
 }

 VAR_15 = FUNC_6(&VAR_13, VAR_14.port, VAR_2,
     FUNC_1(VAR_4), VAR_7, VAR_8, VAR_9, VAR_10,
     VAR_11);






 if (VAR_15 != 0) {
  evtchn_close_t VAR_16 = { .port = VAR_14.port };

  FUNC_7(*VAR_11);
  if (FUNC_0(VAR_1, &VAR_16))
   FUNC_3("EVTCHNOP_close failed");
  return (VAR_15);
 }
 VAR_13->xi_close = 1;
 VAR_13->xi_virq = VAR_5;

 return (0);
}
