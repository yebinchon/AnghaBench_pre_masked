
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int ;
struct xen_intr_pcpu_data {int* evtchn_enabled; } ;
struct TYPE_3__ {int* evtchn_pending; int* evtchn_mask; } ;
typedef TYPE_1__ shared_info_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline u_long
FUNC_1(struct xen_intr_pcpu_data *VAR_0, shared_info_t *VAR_1,
    u_int VAR_2)
{

 FUNC_0(sizeof(VAR_1->evtchn_mask[0]) == sizeof(VAR_1->evtchn_pending[0]));
 FUNC_0(sizeof(VAR_1->evtchn_mask[0]) == sizeof(VAR_0->evtchn_enabled[0]));
 FUNC_0(sizeof(VAR_1->evtchn_mask) == sizeof(VAR_1->evtchn_pending));
 FUNC_0(sizeof(VAR_1->evtchn_mask) == sizeof(VAR_0->evtchn_enabled));
 return (VAR_1->evtchn_pending[VAR_2]
       & ~VAR_1->evtchn_mask[VAR_2]
       & VAR_0->evtchn_enabled[VAR_2]);
}
