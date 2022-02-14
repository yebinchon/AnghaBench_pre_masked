
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_header {int nr_reqtype; } ;
struct TestContext {char* ifname_ext; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct nmreq_header*) ;
 int FUNC_1 (struct nmreq_header*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct TestContext *VAR_2)
{
 struct nmreq_header VAR_3;
 int VAR_4;

 FUNC_3("Testing NETMAP_REQ_SYNC_KLOOP_STOP on '%s'\n", VAR_2->ifname_ext);

 FUNC_1(&VAR_3, VAR_2->ifname_ext);
 VAR_3.nr_reqtype = VAR_0;
 VAR_4 = FUNC_0(VAR_2->fd, VAR_1, &VAR_3);
 if (VAR_4 != 0) {
  FUNC_2("ioctl(/dev/netmap, NIOCCTRL, SYNC_KLOOP_STOP)");
 }

 return VAR_4;
}
