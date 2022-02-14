
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; int shiftcount; int optionnum; } ;
struct TYPE_4__ {int length; int mss; int optionnum; } ;
union all_known_options {int as_end; TYPE_2__ as_windowscale; TYPE_1__ as_mss; } ;
typedef scalar_t__ u32 ;
struct option_windowscale {int dummy; } ;
struct option_mss {int dummy; } ;
struct option_base {int dummy; } ;
struct i40iw_puda_buf {int dummy; } ;
struct i40iw_kmem_info {char* addr; int size; } ;
struct TYPE_6__ {int rcv_wscale; int mss; } ;
struct i40iw_cm_node {TYPE_3__ tcp_cntxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct i40iw_puda_buf* FUNC_1 (struct i40iw_cm_node*,struct i40iw_kmem_info*,int *,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct i40iw_cm_node*,struct i40iw_puda_buf*,int ,int,int ) ;

int FUNC_4(struct i40iw_cm_node *VAR_8, u32 VAR_9)
{
 struct i40iw_puda_buf *VAR_10;
 int VAR_11 = VAR_6;
 char VAR_12[sizeof(struct option_mss) +
      sizeof(struct option_windowscale) +
      sizeof(struct option_base) + VAR_7];
 struct i40iw_kmem_info VAR_13;

 int VAR_14 = 0;

 union all_known_options *VAR_15;

 VAR_13.addr = VAR_12;
 if (!VAR_8) {
  FUNC_2("no cm_node\n");
  return -VAR_0;
 }

 VAR_15 = (union all_known_options *)&VAR_12[VAR_14];
 VAR_15->as_mss.optionnum = VAR_3;
 VAR_15->as_mss.length = sizeof(struct option_mss);
 VAR_15->as_mss.mss = FUNC_0(VAR_8->tcp_cntxt.mss);
 VAR_14 += sizeof(struct option_mss);

 VAR_15 = (union all_known_options *)&VAR_12[VAR_14];
 VAR_15->as_windowscale.optionnum = VAR_4;
 VAR_15->as_windowscale.length = sizeof(struct option_windowscale);
 VAR_15->as_windowscale.shiftcount = VAR_8->tcp_cntxt.rcv_wscale;
 VAR_14 += sizeof(struct option_windowscale);
 VAR_15 = (union all_known_options *)&VAR_12[VAR_14];
 VAR_15->as_end = VAR_2;
 VAR_14 += 1;

 if (VAR_9)
  VAR_11 |= VAR_5;

 VAR_13.size = VAR_14;

 VAR_10 = FUNC_1(VAR_8, &VAR_13, ((void*)0), ((void*)0), VAR_11);
 if (!VAR_10) {
  FUNC_2("no sqbuf\n");
  return -1;
 }
 return FUNC_3(VAR_8, VAR_10, VAR_1, 1, 0);
}
