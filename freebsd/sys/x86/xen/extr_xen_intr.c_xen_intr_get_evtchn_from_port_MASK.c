
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xen_intr_handle_t ;
typedef size_t evtchn_port_t ;
struct TYPE_2__ {int xi_vector; int xi_refcount; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;

int
FUNC_4(evtchn_port_t VAR_4, xen_intr_handle_t *VAR_5)
{

 if (!FUNC_0(VAR_4) || VAR_4 >= VAR_1)
  return (VAR_0);

 if (VAR_5 == ((void*)0)) {
  return (VAR_0);
 }

 FUNC_1(&VAR_2);
 if (VAR_3[VAR_4] == ((void*)0)) {
  FUNC_2(&VAR_2);
  return (VAR_0);
 }
 FUNC_3(&VAR_3[VAR_4]->xi_refcount);
 FUNC_2(&VAR_2);


 *VAR_5 = &VAR_3[VAR_4]->xi_vector;

 return (0);
}
