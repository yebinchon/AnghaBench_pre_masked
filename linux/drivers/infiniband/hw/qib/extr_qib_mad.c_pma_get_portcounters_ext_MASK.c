
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct qib_pportdata {int dummy; } ;
struct qib_pma_counters {scalar_t__ n_multicast_rcv; scalar_t__ n_multicast_xmit; scalar_t__ n_unicast_rcv; scalar_t__ n_unicast_xmit; } ;
struct qib_ibport {scalar_t__ z_multicast_rcv; scalar_t__ z_multicast_xmit; scalar_t__ z_unicast_rcv; scalar_t__ z_unicast_xmit; scalar_t__ z_port_rcv_packets; scalar_t__ z_port_xmit_packets; scalar_t__ z_port_rcv_data; scalar_t__ z_port_xmit_data; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portcounters_ext {scalar_t__ port_select; void* port_multicast_rcv_packets; void* port_multicast_xmit_packets; void* port_unicast_rcv_packets; void* port_unicast_xmit_packets; void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_2 (struct qib_ibport*) ;
 int FUNC_3 (struct qib_pportdata*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct qib_ibport*,struct qib_pma_counters*) ;
 int FUNC_5 (struct ib_smp*) ;
 struct qib_ibport* FUNC_6 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ib_pma_mad *VAR_1,
        struct ib_device *VAR_2, u8 VAR_3)
{
 struct ib_pma_portcounters_ext *VAR_4 =
  (struct ib_pma_portcounters_ext *)VAR_1->data;
 struct qib_ibport *VAR_5 = FUNC_6(VAR_2, VAR_3);
 struct qib_pportdata *VAR_6 = FUNC_2(VAR_5);
 u64 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct qib_pma_counters VAR_12;
 u8 VAR_13 = VAR_4->port_select;

 FUNC_1(VAR_1->data, 0, sizeof(VAR_1->data));

 VAR_4->port_select = VAR_13;
 if (VAR_1->mad_hdr.attr_mod != 0 || VAR_13 != VAR_3) {
  VAR_1->mad_hdr.status |= VAR_0;
  goto bail;
 }

 FUNC_3(VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);


 VAR_7 -= VAR_5->z_port_xmit_data;
 VAR_8 -= VAR_5->z_port_rcv_data;
 VAR_9 -= VAR_5->z_port_xmit_packets;
 VAR_10 -= VAR_5->z_port_rcv_packets;

 VAR_4->port_xmit_data = FUNC_0(VAR_7);
 VAR_4->port_rcv_data = FUNC_0(VAR_8);
 VAR_4->port_xmit_packets = FUNC_0(VAR_9);
 VAR_4->port_rcv_packets = FUNC_0(VAR_10);

 FUNC_4(VAR_5, &VAR_12);

 VAR_4->port_unicast_xmit_packets = FUNC_0(VAR_12.n_unicast_xmit
  - VAR_5->z_unicast_xmit);
 VAR_4->port_unicast_rcv_packets = FUNC_0(VAR_12.n_unicast_rcv
  - VAR_5->z_unicast_rcv);
 VAR_4->port_multicast_xmit_packets = FUNC_0(VAR_12.n_multicast_xmit
  - VAR_5->z_multicast_xmit);
 VAR_4->port_multicast_rcv_packets = FUNC_0(VAR_12.n_multicast_rcv
  - VAR_5->z_multicast_rcv);

bail:
 return FUNC_5((struct ib_smp *) VAR_1);
}
