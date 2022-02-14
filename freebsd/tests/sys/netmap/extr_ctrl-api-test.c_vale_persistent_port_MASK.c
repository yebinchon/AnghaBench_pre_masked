
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_vale_newif {int nr_rx_rings; int nr_tx_rings; int nr_rx_slots; int nr_tx_slots; int nr_mem_id; } ;
struct nmreq_header {uintptr_t nr_body; int nr_reqtype; } ;
struct TestContext {char* ifname_ext; int fd; int nr_rx_rings; int nr_tx_rings; int nr_rx_slots; int nr_tx_slots; int nr_mem_id; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct nmreq_header*) ;
 int FUNC_1 (struct nmreq_vale_newif*,int ,int) ;
 int FUNC_2 (struct nmreq_header*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_7(struct TestContext *VAR_3)
{
 struct nmreq_vale_newif VAR_4;
 struct nmreq_header VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_5(VAR_3->ifname_ext, "per4", sizeof(VAR_3->ifname_ext));

 FUNC_4("Testing NETMAP_REQ_VALE_NEWIF on '%s'\n", VAR_3->ifname_ext);

 FUNC_2(&VAR_5, VAR_3->ifname_ext);
 VAR_5.nr_reqtype = VAR_1;
 VAR_5.nr_body = (uintptr_t)&VAR_4;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.nr_mem_id = VAR_3->nr_mem_id;
 VAR_4.nr_tx_slots = VAR_3->nr_tx_slots;
 VAR_4.nr_rx_slots = VAR_3->nr_rx_slots;
 VAR_4.nr_tx_rings = VAR_3->nr_tx_rings;
 VAR_4.nr_rx_rings = VAR_3->nr_rx_rings;
 VAR_7 = FUNC_0(VAR_3->fd, VAR_2, &VAR_5);
 if (VAR_7 != 0) {
  FUNC_3("ioctl(/dev/netmap, NIOCCTRL, VALE_NEWIF)");
  return VAR_7;
 }


 VAR_6 = FUNC_6(VAR_3);

 FUNC_4("Testing NETMAP_REQ_VALE_DELIF on '%s'\n", VAR_3->ifname_ext);
 VAR_5.nr_reqtype = VAR_0;
 VAR_5.nr_body = (uintptr_t)((void*)0);
 VAR_7 = FUNC_0(VAR_3->fd, VAR_2, &VAR_5);
 if (VAR_7 != 0) {
  FUNC_3("ioctl(/dev/netmap, NIOCCTRL, VALE_NEWIF)");
  if (VAR_6 == 0) {
   VAR_6 = VAR_7;
  }
 }

 return VAR_6;
}
