
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifdrv {int ifd_len; int ifd_cmd; struct ifbropreq* ifd_data; int ifd_name; } ;
struct TYPE_4__ {scalar_t__ tv_sec; int tv_usec; } ;
struct ifbropreq {int ifbop_maxage; int ifbop_hellotime; int ifbop_fwddelay; scalar_t__ ifbop_root_port; TYPE_2__ ifbop_last_tc_time; int ifbop_designated_root; int ifbop_root_path_cost; int ifbop_holdcount; int ifbop_protocol; } ;
struct TYPE_3__ {scalar_t__ tv_sec; int tv_usec; } ;
struct bridge_if {int max_age; int hello_time; int fwd_delay; scalar_t__ root_port; TYPE_1__ last_tc_time; int top_changes; int design_root; int root_cost; int tx_hold_count; int stp_version; int bif_name; } ;
typedef int b_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifdrv*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(struct bridge_if *VAR_6)
{
 int VAR_7;
 struct ifdrv VAR_8;
 struct ifbropreq VAR_9;

 FUNC_3(VAR_8.ifd_name, VAR_6->bif_name, VAR_1);
 VAR_8.ifd_len = sizeof(VAR_9);
 VAR_8.ifd_data = &VAR_9;
 VAR_8.ifd_cmd = VAR_0;

 if (FUNC_0(VAR_5, VAR_3, &VAR_8) < 0) {
  FUNC_4(VAR_2, "update bridge: ioctl(BRDGPARAM) failed: %s",
      FUNC_2(VAR_4));
  return (-1);
 }

 VAR_6->max_age = 100 * VAR_9.ifbop_maxage;
 VAR_6->hello_time = 100 * VAR_9.ifbop_hellotime;
 VAR_6->fwd_delay = 100 * VAR_9.ifbop_fwddelay;
 VAR_6->stp_version = VAR_9.ifbop_protocol;
 VAR_6->tx_hold_count = VAR_9.ifbop_holdcount;

 if (VAR_9.ifbop_root_port == 0 &&
     VAR_6->root_port != VAR_9.ifbop_root_port)
  VAR_7 = 2;
 else
  VAR_7 = 0;

 VAR_6->root_port = VAR_9.ifbop_root_port;
 VAR_6->root_cost = VAR_9.ifbop_root_path_cost;
 FUNC_1(VAR_9.ifbop_designated_root,
     VAR_6->design_root);

 if (VAR_6->last_tc_time.tv_sec != VAR_9.ifbop_last_tc_time.tv_sec) {
  VAR_6->top_changes++;
  VAR_6->last_tc_time.tv_sec = VAR_9.ifbop_last_tc_time.tv_sec;
  VAR_6->last_tc_time.tv_usec = VAR_9.ifbop_last_tc_time.tv_usec;





  if (VAR_7 == 0)
   return (1);
 }

 return (VAR_7);
}
