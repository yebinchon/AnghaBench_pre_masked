
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int evtchn_pending_sel; scalar_t__ evtchn_upcall_pending; } ;
typedef TYPE_1__ vcpu_info_t ;
typedef unsigned long u_long ;
typedef scalar_t__ u_int ;
struct xenisrc {scalar_t__ xi_cpu; int xi_intsrc; } ;
struct xen_intr_pcpu_data {scalar_t__ last_processed_l1i; scalar_t__ last_processed_l2i; int * evtchn_intrcnt; } ;
struct trapframe {int dummy; } ;
struct TYPE_7__ {int * evtchn_pending; } ;
typedef TYPE_2__ shared_info_t ;


 TYPE_1__* FUNC_0 (int ) ;
 struct xen_intr_pcpu_data* FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned long FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int *,struct trapframe*) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,int *) ;
 int VAR_3 ;
 int FUNC_12 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_13 () ;
 unsigned long FUNC_14 (struct xen_intr_pcpu_data*,TYPE_2__*,scalar_t__) ;
 int VAR_5 ;
 struct xenisrc** VAR_6 ;
 int VAR_7 ;

void
FUNC_15(struct trapframe *VAR_8)
{
 u_int VAR_9, VAR_10, VAR_11, VAR_12;
 u_long VAR_13, VAR_14;
 struct xenisrc *VAR_15;
 shared_info_t *VAR_16;
 vcpu_info_t *VAR_17;
 struct xen_intr_pcpu_data *VAR_18;
 u_long VAR_19, VAR_20;





 FUNC_6();

 VAR_12 = FUNC_3(VAR_2);
 VAR_18 = FUNC_1(VAR_5);
 VAR_16 = VAR_0;
 VAR_17 = FUNC_0(VAR_3);

 if (FUNC_13() && !VAR_7) {
  FUNC_2((VAR_12 == 0), ("Fired PCI event callback on wrong CPU"));
 }

 VAR_17->evtchn_upcall_pending = 0;
 VAR_19 = FUNC_5(&VAR_17->evtchn_pending_sel);

 VAR_9 = VAR_18->last_processed_l1i;
 VAR_10 = VAR_18->last_processed_l2i;
 (*VAR_18->evtchn_intrcnt)++;

 while (VAR_19 != 0) {

  VAR_9 = (VAR_9 + 1) % VAR_1;
  VAR_13 = VAR_19 & ((~0UL) << VAR_9);

  if (VAR_13 == 0) {




   VAR_9 = VAR_1 - 1;
   VAR_10 = VAR_1 - 1;
   continue;
  }
  VAR_9 = FUNC_8(VAR_13) - 1;

  do {
   VAR_20 = FUNC_14(VAR_18, VAR_16, VAR_9);

   VAR_10 = (VAR_10 + 1) % VAR_1;
   VAR_14 = VAR_20 & ((~0UL) << VAR_10);

   if (VAR_14 == 0) {

    VAR_10 = VAR_1 - 1;
    break;
   }
   VAR_10 = FUNC_8(VAR_14) - 1;


   VAR_11 = (VAR_9 * VAR_1) + VAR_10;
   FUNC_11(VAR_11, &VAR_16->evtchn_pending[0]);

   VAR_15 = VAR_6[VAR_11];
   if (FUNC_4(VAR_15 == ((void*)0)))
    continue;


   FUNC_2((VAR_15->xi_cpu == FUNC_3(VAR_2)),
    ("Received unexpected event on vCPU#%d, event bound to vCPU#%d",
    FUNC_3(VAR_2), VAR_15->xi_cpu));

   FUNC_9(&VAR_15->xi_intsrc, VAR_8);





   VAR_18->last_processed_l1i = VAR_9;
   VAR_18->last_processed_l2i = VAR_10;

  } while (VAR_10 != VAR_1 - 1);

  VAR_20 = FUNC_14(VAR_18, VAR_16, VAR_9);
  if (VAR_20 == 0) {




   VAR_19 &= ~(1UL << VAR_9);
  }
 }

 if (VAR_4)
  FUNC_10();

 FUNC_7();
}
