
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct iw_cm_conn_param {void* private_data; int ord; int ird; void* private_data_len; } ;
struct i40iw_device {int dummy; } ;
struct TYPE_4__ {int addr; void* size; } ;
struct TYPE_3__ {int client; void* rcv_wscale; void* snd_wscale; int rcv_wnd; int snd_wnd; int max_snd_wnd; int loc_seq_num; int rcv_nxt; } ;
struct i40iw_cm_node {scalar_t__ ord_size; scalar_t__ ird_size; int state; int pdata_buf; TYPE_2__ pdata; TYPE_1__ tcp_cntxt; struct i40iw_cm_node* loopbackpartner; int vlan_id; int rem_port; } ;
struct i40iw_cm_listener {int cm_id; } ;
struct i40iw_cm_info {int ipv4; int cm_id; int loc_port; int rem_port; int rem_addr; int loc_addr; } ;
struct i40iw_cm_core {int stats_loopbacks; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i40iw_cm_node* FUNC_0 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct i40iw_cm_listener* FUNC_1 (struct i40iw_cm_core*,int ,int ,int ,int ) ;
 struct i40iw_cm_node* FUNC_2 (struct i40iw_cm_core*,struct i40iw_device*,struct i40iw_cm_info*,struct i40iw_cm_listener*) ;
 int FUNC_3 (struct i40iw_cm_node*,int ,int ) ;
 int FUNC_4 (struct i40iw_cm_node*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,void const*,void*) ;

__attribute__((used)) static struct i40iw_cm_node *FUNC_7(
     struct i40iw_cm_core *VAR_6,
     struct i40iw_device *VAR_7,
     struct iw_cm_conn_param *VAR_8,
     struct i40iw_cm_info *VAR_9)
{
 struct i40iw_cm_node *VAR_10;
 struct i40iw_cm_listener *VAR_11;
 struct i40iw_cm_node *VAR_12;
 struct i40iw_cm_info VAR_13;

 u16 VAR_14 = VAR_8->private_data_len;
 const void *VAR_15 = VAR_8->private_data;


 VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_9, ((void*)0));
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->tcp_cntxt.client = 1;
 VAR_10->tcp_cntxt.rcv_wscale = VAR_2;

 FUNC_3(VAR_10, VAR_8->ird, VAR_8->ord);

 if (!FUNC_5(VAR_9->loc_addr, VAR_9->rem_addr, sizeof(VAR_9->loc_addr))) {
  VAR_11 = FUNC_1(
      VAR_6,
      VAR_9->rem_addr,
      VAR_10->rem_port,
      VAR_10->vlan_id,
      VAR_3);
  if (!VAR_11) {
   FUNC_4(VAR_10);
   return FUNC_0(-VAR_0);
  } else {
   VAR_13 = *VAR_9;
   VAR_13.loc_port = VAR_9->rem_port;
   VAR_13.rem_port = VAR_9->loc_port;
   VAR_13.cm_id = VAR_11->cm_id;
   VAR_13.ipv4 = VAR_9->ipv4;
   VAR_12 = FUNC_2(VAR_6,
         VAR_7,
         &VAR_13,
         VAR_11);
   if (!VAR_12) {
    FUNC_4(VAR_10);
    return FUNC_0(-VAR_1);
   }
   VAR_6->stats_loopbacks++;
   VAR_12->loopbackpartner = VAR_10;
   VAR_12->tcp_cntxt.rcv_wscale =
    VAR_2;
   VAR_10->loopbackpartner = VAR_12;
   FUNC_6(VAR_12->pdata_buf, VAR_15,
          VAR_14);
   VAR_12->pdata.size = VAR_14;

   if (VAR_12->ord_size > VAR_10->ird_size)
    VAR_12->ord_size =
     VAR_10->ird_size;

   VAR_10->state = VAR_4;
   VAR_10->tcp_cntxt.rcv_nxt =
    VAR_12->tcp_cntxt.loc_seq_num;
   VAR_12->tcp_cntxt.rcv_nxt =
    VAR_10->tcp_cntxt.loc_seq_num;
   VAR_10->tcp_cntxt.max_snd_wnd =
    VAR_12->tcp_cntxt.rcv_wnd;
   VAR_12->tcp_cntxt.max_snd_wnd = VAR_10->tcp_cntxt.rcv_wnd;
   VAR_10->tcp_cntxt.snd_wnd = VAR_12->tcp_cntxt.rcv_wnd;
   VAR_12->tcp_cntxt.snd_wnd = VAR_10->tcp_cntxt.rcv_wnd;
   VAR_10->tcp_cntxt.snd_wscale = VAR_12->tcp_cntxt.rcv_wscale;
   VAR_12->tcp_cntxt.snd_wscale = VAR_10->tcp_cntxt.rcv_wscale;
  }
  return VAR_10;
 }

 VAR_10->pdata.size = VAR_14;
 VAR_10->pdata.addr = VAR_10->pdata_buf;

 FUNC_6(VAR_10->pdata_buf, VAR_15, VAR_14);

 VAR_10->state = VAR_5;
 return VAR_10;
}
