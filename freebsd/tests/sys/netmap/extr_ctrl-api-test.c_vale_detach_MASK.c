
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpname ;
struct nmreq_vale_detach {int dummy; } ;
struct nmreq_header {uintptr_t nr_body; int nr_reqtype; } ;
struct TestContext {char* bdgname; char* ifname_ext; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct nmreq_header*) ;
 int FUNC_1 (struct nmreq_header*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct TestContext *VAR_2)
{
 struct nmreq_header VAR_3;
 struct nmreq_vale_detach VAR_4;
 char VAR_5[256];
 int VAR_6;

 FUNC_4(VAR_5, sizeof(VAR_5), "%s:%s", VAR_2->bdgname, VAR_2->ifname_ext);

 FUNC_3("Testing NETMAP_REQ_VALE_DETACH on '%s'\n", VAR_5);
 FUNC_1(&VAR_3, VAR_5);
 VAR_3.nr_reqtype = VAR_0;
 VAR_3.nr_body = (uintptr_t)&VAR_4;
 VAR_6 = FUNC_0(VAR_2->fd, VAR_1, &VAR_3);
 if (VAR_6 != 0) {
  FUNC_2("ioctl(/dev/netmap, NIOCCTRL, VALE_DETACH)");
  return VAR_6;
 }

 return 0;
}
