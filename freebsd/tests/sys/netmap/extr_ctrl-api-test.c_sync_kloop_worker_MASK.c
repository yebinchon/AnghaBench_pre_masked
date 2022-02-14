
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_sync_kloop_start {int sleep_us; } ;
struct nmreq_header {uintptr_t nr_body; uintptr_t nr_options; int nr_reqtype; } ;
struct TestContext {char* ifname_ext; scalar_t__ sem; int fd; scalar_t__ nr_opt; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,struct nmreq_header*) ;
 int FUNC_1 (struct nmreq_sync_kloop_start*,int ,int) ;
 int FUNC_2 (struct nmreq_header*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_7(void *VAR_4)
{
 struct TestContext *VAR_5 = VAR_4;
 struct nmreq_sync_kloop_start VAR_6;
 struct nmreq_header VAR_7;
 int VAR_8;

 FUNC_4("Testing NETMAP_REQ_SYNC_KLOOP_START on '%s'\n", VAR_5->ifname_ext);

 FUNC_2(&VAR_7, VAR_5->ifname_ext);
 VAR_7.nr_reqtype = VAR_0;
 VAR_7.nr_body = (uintptr_t)&VAR_6;
 VAR_7.nr_options = (uintptr_t)VAR_5->nr_opt;
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.sleep_us = 500;
 VAR_8 = FUNC_0(VAR_5->fd, VAR_1, &VAR_7);
 if (VAR_8 != 0) {
  FUNC_3("ioctl(/dev/netmap, NIOCCTRL, SYNC_KLOOP_START)");
 }

 if (VAR_5->sem) {
  FUNC_6(VAR_5->sem);
 }

 FUNC_5(VAR_8 ? (void *)VAR_2 : (void *)VAR_3);
}
