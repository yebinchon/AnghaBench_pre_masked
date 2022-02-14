
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_intr_handle_t ;
struct xenisrc {int xi_port; } ;
typedef int evtchn_port_t ;


 struct xenisrc* FUNC_0 (int ) ;

evtchn_port_t
FUNC_1(xen_intr_handle_t VAR_0)
{
 struct xenisrc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return (0);

 return (VAR_1->xi_port);
}
