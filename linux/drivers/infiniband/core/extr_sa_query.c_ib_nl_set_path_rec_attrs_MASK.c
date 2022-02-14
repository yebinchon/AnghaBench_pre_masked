
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int val64 ;
typedef int val16 ;
typedef int u64 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct sa_path_rec {scalar_t__ reversible; int qos_class; int pkey; int traffic_class; int sgid; int dgid; int service_id; } ;
struct rdma_ls_resolve_header {int path_use; int port_num; int device_name; } ;
struct ib_sa_query {int path_use; TYPE_5__* port; TYPE_2__* mad_buf; } ;
struct TYPE_6__ {int comp_mask; } ;
struct ib_sa_mad {TYPE_1__ sa_hdr; } ;
typedef int ib_sa_comp_mask ;
struct TYPE_10__ {int port_num; TYPE_4__* agent; } ;
struct TYPE_9__ {TYPE_3__* device; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {struct sa_path_rec** context; struct ib_sa_mad* mad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int,int,int *) ;
 struct rdma_ls_resolve_header* FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_17,
         struct ib_sa_query *VAR_18)
{
 struct sa_path_rec *VAR_19 = VAR_18->mad_buf->context[1];
 struct ib_sa_mad *VAR_20 = VAR_18->mad_buf->mad;
 ib_sa_comp_mask VAR_21 = VAR_20->sa_hdr.comp_mask;
 u16 VAR_22;
 u64 VAR_23;
 struct rdma_ls_resolve_header *VAR_24;

 VAR_18->mad_buf->context[1] = ((void*)0);


 VAR_24 = FUNC_6(VAR_17, FUNC_0(sizeof(*VAR_24)));
 FUNC_4(VAR_24->device_name, FUNC_3(&VAR_18->port->agent->device->dev),
        VAR_7);
 VAR_24->port_num = VAR_18->port->port_num;

 if ((VAR_21 & VAR_3) &&
     VAR_19->reversible != 0)
  VAR_18->path_use = VAR_14;
 else
  VAR_18->path_use = VAR_15;
 VAR_24->path_use = VAR_18->path_use;


 if (VAR_21 & VAR_4) {
  VAR_23 = FUNC_2(VAR_19->service_id);
  FUNC_5(VAR_17, VAR_16 | VAR_11,
   sizeof(VAR_23), &VAR_23);
 }
 if (VAR_21 & VAR_0)
  FUNC_5(VAR_17, VAR_16 | VAR_8,
   sizeof(VAR_19->dgid), &VAR_19->dgid);
 if (VAR_21 & VAR_5)
  FUNC_5(VAR_17, VAR_16 | VAR_12,
   sizeof(VAR_19->sgid), &VAR_19->sgid);
 if (VAR_21 & VAR_6)
  FUNC_5(VAR_17, VAR_16 | VAR_13,
   sizeof(VAR_19->traffic_class), &VAR_19->traffic_class);

 if (VAR_21 & VAR_1) {
  VAR_22 = FUNC_1(VAR_19->pkey);
  FUNC_5(VAR_17, VAR_16 | VAR_9,
   sizeof(VAR_22), &VAR_22);
 }
 if (VAR_21 & VAR_2) {
  VAR_22 = FUNC_1(VAR_19->qos_class);
  FUNC_5(VAR_17, VAR_16 | VAR_10,
   sizeof(VAR_22), &VAR_22);
 }
}
