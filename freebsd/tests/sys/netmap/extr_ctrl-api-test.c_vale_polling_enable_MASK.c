
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpname ;
struct nmreq_vale_polling {scalar_t__ nr_mode; scalar_t__ nr_first_cpu_id; scalar_t__ nr_num_polling_cpus; } ;
struct nmreq_header {uintptr_t nr_body; int nr_reqtype; } ;
struct TestContext {char* bdgname; char* ifname_ext; scalar_t__ nr_mode; scalar_t__ nr_first_cpu_id; scalar_t__ nr_num_polling_cpus; int fd; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct nmreq_header*) ;
 int FUNC_1 (struct nmreq_vale_polling*,int ,int) ;
 int FUNC_2 (struct nmreq_header*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_6(struct TestContext *VAR_2)
{
 struct nmreq_vale_polling VAR_3;
 struct nmreq_header VAR_4;
 char VAR_5[256];
 int VAR_6;

 FUNC_5(VAR_5, sizeof(VAR_5), "%s:%s", VAR_2->bdgname, VAR_2->ifname_ext);
 FUNC_4("Testing NETMAP_REQ_VALE_POLLING_ENABLE on '%s'\n", VAR_5);

 FUNC_2(&VAR_4, VAR_5);
 VAR_4.nr_reqtype = VAR_0;
 VAR_4.nr_body = (uintptr_t)&VAR_3;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.nr_mode = VAR_2->nr_mode;
 VAR_3.nr_first_cpu_id = VAR_2->nr_first_cpu_id;
 VAR_3.nr_num_polling_cpus = VAR_2->nr_num_polling_cpus;
 VAR_6 = FUNC_0(VAR_2->fd, VAR_1, &VAR_4);
 if (VAR_6 != 0) {
  FUNC_3("ioctl(/dev/netmap, NIOCCTRL, VALE_POLLING_ENABLE)");
  return VAR_6;
 }

 return (VAR_3.nr_mode == VAR_2->nr_mode &&
         VAR_3.nr_first_cpu_id == VAR_2->nr_first_cpu_id &&
         VAR_3.nr_num_polling_cpus == VAR_2->nr_num_polling_cpus)
                ? 0
                : -1;
}
