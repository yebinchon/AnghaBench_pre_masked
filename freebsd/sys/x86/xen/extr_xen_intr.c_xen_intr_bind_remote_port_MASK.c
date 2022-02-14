
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_intr_handle_t ;
typedef void* u_int ;
struct xenisrc {int xi_close; } ;
struct evtchn_bind_interdomain {int port; int local_port; void* remote_port; void* remote_dom; } ;
typedef struct evtchn_bind_interdomain evtchn_close_t ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct evtchn_bind_interdomain*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct xenisrc**,int ,int ,int ,int ,int ,void*,int,int *) ;

int
FUNC_4(device_t VAR_3, u_int VAR_4,
    u_int VAR_5, driver_filter_t VAR_6, driver_intr_t VAR_7,
    void *VAR_8, enum intr_type VAR_9, xen_intr_handle_t *VAR_10)
{
 struct xenisrc *VAR_11;
 struct evtchn_bind_interdomain VAR_12;
 int VAR_13;

 VAR_12.remote_dom = VAR_4;
 VAR_12.remote_port = VAR_5;
 VAR_13 = FUNC_0(VAR_0,
         &VAR_12);
 if (VAR_13 != 0) {




  return (-VAR_13);
 }

 VAR_13 = FUNC_3(&VAR_11, VAR_12.local_port,
     VAR_2, FUNC_1(VAR_3), VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10);
 if (VAR_13) {
  evtchn_close_t VAR_14 = { .port = VAR_12.local_port };
  if (FUNC_0(VAR_1, &VAR_14))
   FUNC_2("EVTCHNOP_close failed");
  return (VAR_13);
 }





 VAR_11->xi_close = 1;
 return (0);
}
