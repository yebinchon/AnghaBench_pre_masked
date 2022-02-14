
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_verbs_counters {scalar_t__ vl15_dropped; scalar_t__ excessive_buffer_overrun_errors; scalar_t__ local_link_integrity_errors; scalar_t__ port_rcv_packets; scalar_t__ port_xmit_packets; scalar_t__ port_rcv_data; scalar_t__ port_xmit_data; scalar_t__ port_xmit_discards; scalar_t__ port_rcv_remphys_errors; scalar_t__ port_rcv_errors; scalar_t__ link_downed_counter; scalar_t__ link_error_recovery_counter; scalar_t__ symbol_error_counter; } ;
struct qib_pportdata {TYPE_1__* dd; } ;
struct TYPE_2__ {int flags; scalar_t__ (* f_portcntr ) (struct qib_pportdata*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_0 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_1 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_2 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_3 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_4 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_5 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_6 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_7 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_8 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_9 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_10 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_11 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_12 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_13 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_14 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_15 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_16 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_17 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_18 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_19 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_20 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_21 (struct qib_pportdata*,int ) ;
 scalar_t__ FUNC_22 (struct qib_pportdata*,int ) ;

int FUNC_23(struct qib_pportdata *VAR_25,
       struct qib_verbs_counters *VAR_26)
{
 int VAR_27;

 if (!(VAR_25->dd->flags & VAR_24)) {

  VAR_27 = -VAR_0;
  goto bail;
 }
 VAR_26->symbol_error_counter =
  VAR_25->dd->f_portcntr(VAR_25, VAR_10);
 VAR_26->link_error_recovery_counter =
  VAR_25->dd->f_portcntr(VAR_25, VAR_9);





 VAR_26->link_downed_counter =
  VAR_25->dd->f_portcntr(VAR_25, VAR_8);
 VAR_26->port_rcv_errors =
  VAR_25->dd->f_portcntr(VAR_25, VAR_17) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_16) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_6) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_11) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_3) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_2) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_5) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_4) +
  VAR_25->dd->f_portcntr(VAR_25, VAR_1);
 VAR_26->port_rcv_errors +=
  VAR_25->dd->f_portcntr(VAR_25, VAR_18);
 VAR_26->port_rcv_errors +=
  VAR_25->dd->f_portcntr(VAR_25, VAR_19);
 VAR_26->port_rcv_remphys_errors =
  VAR_25->dd->f_portcntr(VAR_25, VAR_15);
 VAR_26->port_xmit_discards =
  VAR_25->dd->f_portcntr(VAR_25, VAR_20);
 VAR_26->port_xmit_data = VAR_25->dd->f_portcntr(VAR_25,
   VAR_23);
 VAR_26->port_rcv_data = VAR_25->dd->f_portcntr(VAR_25,
   VAR_22);
 VAR_26->port_xmit_packets = VAR_25->dd->f_portcntr(VAR_25,
   VAR_14);
 VAR_26->port_rcv_packets = VAR_25->dd->f_portcntr(VAR_25,
   VAR_13);
 VAR_26->local_link_integrity_errors =
  VAR_25->dd->f_portcntr(VAR_25, VAR_12);
 VAR_26->excessive_buffer_overrun_errors =
  VAR_25->dd->f_portcntr(VAR_25, VAR_7);
 VAR_26->vl15_dropped =
  VAR_25->dd->f_portcntr(VAR_25, VAR_21);

 VAR_27 = 0;

bail:
 return VAR_27;
}
