
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_option {scalar_t__ nro_status; } ;
struct nmreq_opt_csb {struct nmreq_option nro_opt; } ;
struct nmreq_header {uintptr_t nr_options; uintptr_t nr_body; int nr_reqtype; } ;
struct TestContext {char* ifname_ext; int fd; scalar_t__ nr_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nmreq_option*,struct nmreq_option*) ;
 int FUNC_1 (struct TestContext*) ;
 int FUNC_2 (int ,int ,struct nmreq_header*) ;
 int FUNC_3 (struct nmreq_header*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct TestContext*,struct nmreq_opt_csb*) ;

__attribute__((used)) static int
FUNC_7(struct TestContext *VAR_2)
{
 struct nmreq_option VAR_3;
 struct nmreq_opt_csb VAR_4;
 struct nmreq_header VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_2, &VAR_4);
 if (VAR_6 != 0) {
  return VAR_6;
 }
 VAR_3 = VAR_4.nro_opt;
 VAR_3.nro_status = 0;

 FUNC_3(&VAR_5, VAR_2->ifname_ext);
 VAR_5.nr_reqtype = VAR_0;
 VAR_5.nr_options = (uintptr_t)VAR_2->nr_opt;
 VAR_5.nr_body = (uintptr_t)((void*)0);

 FUNC_5("Testing NETMAP_REQ_CSB_ENABLE on '%s'\n", VAR_2->ifname_ext);

 VAR_6 = FUNC_2(VAR_2->fd, VAR_1, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_4("ioctl(/dev/netmap, NIOCCTRL, CSB_ENABLE)");
  return VAR_6;
 }

 VAR_6 = FUNC_0(&VAR_4.nro_opt, &VAR_3);
 FUNC_1(VAR_2);

 return VAR_6;
}
