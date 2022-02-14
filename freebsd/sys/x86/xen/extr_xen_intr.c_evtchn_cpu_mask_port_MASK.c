
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xen_intr_pcpu_data {int evtchn_enabled; } ;
typedef int evtchn_port_t ;


 struct xen_intr_pcpu_data* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_2(u_int VAR_1, evtchn_port_t VAR_2)
{
 struct xen_intr_pcpu_data *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_2, VAR_3->evtchn_enabled);
}
