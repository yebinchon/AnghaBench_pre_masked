
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_10__ {int sc_cqp; } ;
struct i40iw_device {TYPE_5__ cqp; } ;
struct i40iw_add_arp_cache_entry_info {int permanent; int mac_addr; int arp_index; } ;
struct TYPE_7__ {uintptr_t scratch; int * cqp; struct i40iw_add_arp_cache_entry_info info; } ;
struct TYPE_6__ {uintptr_t scratch; int arp_index; int * cqp; } ;
struct TYPE_8__ {TYPE_2__ add_arp_cache_entry; TYPE_1__ del_arp_cache_entry; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_4__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*) ;
 int FUNC_2 (struct i40iw_device*,scalar_t__*,int,unsigned char*,scalar_t__) ;
 struct i40iw_cqp_request* FUNC_3 (TYPE_5__*,int) ;
 scalar_t__ FUNC_4 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct i40iw_add_arp_cache_entry_info*,int ,int) ;

void FUNC_7(struct i40iw_device *VAR_3,
       unsigned char *VAR_4,
       u32 *VAR_5,
       bool VAR_6,
       u32 VAR_7)
{
 struct i40iw_add_arp_cache_entry_info *VAR_8;
 struct i40iw_cqp_request *VAR_9;
 struct cqp_commands_info *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_5, VAR_6, VAR_4, VAR_7);
 if (VAR_11 == -1)
  return;
 VAR_9 = FUNC_3(&VAR_3->cqp, 0);
 if (!VAR_9)
  return;

 VAR_10 = &VAR_9->info;
 if (VAR_7 == VAR_0) {
  VAR_10->cqp_cmd = VAR_1;
  VAR_8 = &VAR_10->in.u.add_arp_cache_entry.info;
  FUNC_6(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->arp_index = FUNC_0((u16)VAR_11);
  VAR_8->permanent = 1;
  FUNC_1(VAR_8->mac_addr, VAR_4);
  VAR_10->in.u.add_arp_cache_entry.scratch = (uintptr_t)VAR_9;
  VAR_10->in.u.add_arp_cache_entry.cqp = &VAR_3->cqp.sc_cqp;
 } else {
  VAR_10->cqp_cmd = VAR_2;
  VAR_10->in.u.del_arp_cache_entry.scratch = (uintptr_t)VAR_9;
  VAR_10->in.u.del_arp_cache_entry.cqp = &VAR_3->cqp.sc_cqp;
  VAR_10->in.u.del_arp_cache_entry.arp_index = VAR_11;
 }

 VAR_10->in.u.add_arp_cache_entry.cqp = &VAR_3->cqp.sc_cqp;
 VAR_10->in.u.add_arp_cache_entry.scratch = (uintptr_t)VAR_9;
 VAR_10->post_sq = 1;
 if (FUNC_4(VAR_3, VAR_9))
  FUNC_5("CQP-OP Add/Del Arp Cache entry fail");
}
