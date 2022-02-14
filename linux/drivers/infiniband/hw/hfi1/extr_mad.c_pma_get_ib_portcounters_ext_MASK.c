
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_pma_portcounters_ext {scalar_t__ port_select; int port_multicast_rcv_packets; int port_multicast_xmit_packets; scalar_t__ port_unicast_rcv_packets; scalar_t__ port_unicast_xmit_packets; int port_rcv_packets; int port_xmit_packets; int port_rcv_data; int port_xmit_data; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct _port_dctrs {int port_multicast_rcv_pkts; int port_multicast_xmit_pkts; int port_rcv_pkts; int port_xmit_pkts; int port_rcv_data; int port_xmit_data; } ;
typedef int rsp ;


 int VAR_0 ;
 int FUNC_0 (struct _port_dctrs*,int ,int) ;
 int FUNC_1 (struct ib_device*,struct _port_dctrs*) ;
 int FUNC_2 (struct ib_mad_hdr*) ;

__attribute__((used)) static int FUNC_3(struct ib_pma_mad *VAR_1,
           struct ib_device *VAR_2, u8 VAR_3)
{
 struct ib_pma_portcounters_ext *VAR_4 = (struct ib_pma_portcounters_ext *)
      VAR_1->data;
 struct _port_dctrs VAR_5;

 if (VAR_1->mad_hdr.attr_mod != 0 || VAR_4->port_select != VAR_3) {
  VAR_1->mad_hdr.status |= VAR_0;
  goto bail;
 }

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(VAR_2, &VAR_5);

 VAR_4->port_xmit_data = VAR_5.port_xmit_data;
 VAR_4->port_rcv_data = VAR_5.port_rcv_data;
 VAR_4->port_xmit_packets = VAR_5.port_xmit_pkts;
 VAR_4->port_rcv_packets = VAR_5.port_rcv_pkts;
 VAR_4->port_unicast_xmit_packets = 0;
 VAR_4->port_unicast_rcv_packets = 0;
 VAR_4->port_multicast_xmit_packets = VAR_5.port_multicast_xmit_pkts;
 VAR_4->port_multicast_rcv_packets = VAR_5.port_multicast_rcv_pkts;

bail:
 return FUNC_2((struct ib_mad_hdr *)VAR_1);
}
