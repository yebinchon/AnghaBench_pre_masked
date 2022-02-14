
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_intr_handle_t ;
struct xenisrc {scalar_t__ xi_close; } ;
typedef int evtchn_port_t ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xenisrc**,int ,int ,int ,int ,int ,void*,int,int *) ;

int
FUNC_2(device_t VAR_1, evtchn_port_t VAR_2,
    driver_filter_t VAR_3, driver_intr_t VAR_4, void *VAR_5,
    enum intr_type VAR_6, xen_intr_handle_t *VAR_7)
{
 struct xenisrc *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(&VAR_8, VAR_2, VAR_0,
     FUNC_0(VAR_1), VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);





 VAR_8->xi_close = 0;
 return (0);
}
