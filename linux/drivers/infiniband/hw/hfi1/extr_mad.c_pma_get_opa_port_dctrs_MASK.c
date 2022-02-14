
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct hfi1_devdata {int dummy; } ;
struct _port_dctrs {void* port_multicast_rcv_pkts; void* port_multicast_xmit_pkts; void* port_rcv_pkts; void* port_xmit_pkts; void* port_rcv_data; void* port_xmit_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 struct hfi1_devdata* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ib_device *VAR_7,
       struct _port_dctrs *VAR_8)
{
 struct hfi1_devdata *VAR_9 = FUNC_1(VAR_7);

 VAR_8->port_xmit_data = FUNC_0(FUNC_2(VAR_9, VAR_5,
      VAR_0));
 VAR_8->port_rcv_data = FUNC_0(FUNC_2(VAR_9, VAR_3,
      VAR_0));
 VAR_8->port_xmit_pkts = FUNC_0(FUNC_2(VAR_9, VAR_6,
      VAR_0));
 VAR_8->port_rcv_pkts = FUNC_0(FUNC_2(VAR_9, VAR_4,
      VAR_0));
 VAR_8->port_multicast_xmit_pkts =
  FUNC_0(FUNC_2(VAR_9, VAR_2,
       VAR_0));
 VAR_8->port_multicast_rcv_pkts =
  FUNC_0(FUNC_2(VAR_9, VAR_1,
       VAR_0));
}
