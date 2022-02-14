
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_port_hdr {scalar_t__ nr_hdr_len; } ;
struct nmreq_header {uintptr_t nr_body; int nr_reqtype; } ;
struct TestContext {scalar_t__ ifname_ext; scalar_t__ nr_hdr_len; int fd; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct nmreq_header*) ;
 int FUNC_1 (struct nmreq_port_hdr*,int ,int) ;
 int FUNC_2 (struct nmreq_header*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct TestContext *VAR_3)
{
 struct nmreq_port_hdr VAR_4;
 struct nmreq_header VAR_5;
 int VAR_6;

 FUNC_4("Testing NETMAP_REQ_PORT_HDR_SET on '%s'\n", VAR_3->ifname_ext);

 FUNC_2(&VAR_5, VAR_3->ifname_ext);
 VAR_5.nr_reqtype = VAR_1;
 VAR_5.nr_body = (uintptr_t)&VAR_4;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.nr_hdr_len = VAR_3->nr_hdr_len;
 VAR_6 = FUNC_0(VAR_3->fd, VAR_2, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_3("ioctl(/dev/netmap, NIOCCTRL, PORT_HDR_SET)");
  return VAR_6;
 }

 if (VAR_4.nr_hdr_len != VAR_3->nr_hdr_len) {
  return -1;
 }

 FUNC_4("Testing NETMAP_REQ_PORT_HDR_GET on '%s'\n", VAR_3->ifname_ext);
 VAR_5.nr_reqtype = VAR_0;
 VAR_4.nr_hdr_len = 0;
 VAR_6 = FUNC_0(VAR_3->fd, VAR_2, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_3("ioctl(/dev/netmap, NIOCCTRL, PORT_HDR_SET)");
  return VAR_6;
 }
 FUNC_4("nr_hdr_len %u\n", VAR_4.nr_hdr_len);

 return (VAR_4.nr_hdr_len == VAR_3->nr_hdr_len) ? 0 : -1;
}
