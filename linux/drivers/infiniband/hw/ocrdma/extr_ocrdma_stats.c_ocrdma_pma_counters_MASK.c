
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_dev {int dummy; } ;
struct ib_pma_portcounters {void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; } ;
struct ib_mad {scalar_t__ data; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct ocrdma_dev*) ;
 int FUNC_3 (struct ocrdma_dev*) ;
 int FUNC_4 (struct ocrdma_dev*) ;
 int FUNC_5 (struct ocrdma_dev*) ;
 int FUNC_6 (struct ocrdma_dev*) ;

int FUNC_7(struct ocrdma_dev *VAR_0,
   struct ib_mad *VAR_1)
{
 struct ib_pma_portcounters *VAR_2;

 FUNC_1(VAR_1->data, 0, sizeof VAR_1->data);
 VAR_2 = (void *)(VAR_1->data + 40);
 FUNC_6(VAR_0);

 VAR_2->port_xmit_data = FUNC_0(FUNC_4(VAR_0));
 VAR_2->port_rcv_data = FUNC_0(FUNC_2(VAR_0));
 VAR_2->port_xmit_packets = FUNC_0(FUNC_5(VAR_0));
 VAR_2->port_rcv_packets = FUNC_0(FUNC_3(VAR_0));
 return 0;
}
