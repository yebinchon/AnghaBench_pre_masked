
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ngnf_show_header {int dummy; } ;
struct ng_netflow_v9info {int dummy; } ;
struct ng_netflow_settimeouts {int active_timeout; int inactive_timeout; } ;
struct ng_netflow_settemplate {int time; int packets; } ;
struct ng_netflow_setmtu {int mtu; } ;
struct ng_netflow_setifindex {size_t const iface; int index; } ;
struct ng_netflow_setdlt {size_t const iface; int dlt; } ;
struct ng_netflow_setconfig {size_t const iface; int conf; } ;
struct ng_netflow_info {int dummy; } ;
struct ng_netflow_ifinfo {int dummy; } ;
struct TYPE_8__ {int ifinfo_dlt; int conf; int ifinfo_index; } ;
struct ng_netflow_iface {TYPE_1__ info; int * hook; } ;
struct TYPE_9__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_2__ header; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_10__ {int mtu; int templ_time; int templ_packets; struct ng_netflow_iface* ifaces; int nfinfo_act_t; int nfinfo_inact_t; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 int VAR_5 ;
 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 size_t const VAR_6 ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (void*,void*,int) ;
 int FUNC_7 (TYPE_3__* const,struct ng_netflow_info*) ;
 int FUNC_8 (TYPE_3__* const,struct ng_netflow_v9info*) ;
 int FUNC_9 (TYPE_3__* const,struct ngnf_show_header*,struct ngnf_show_header*) ;

__attribute__((used)) static int
FUNC_10 (node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 const priv_p VAR_10 = FUNC_4(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 struct ng_mesg *VAR_13;

 FUNC_1(VAR_8, VAR_13);


 switch (VAR_13->header.typecookie) {
 case 138:
  switch (VAR_13->header.cmd) {
  case 136:
      {
   struct ng_netflow_info *VAR_14;

   FUNC_3(VAR_11, VAR_13, sizeof(struct ng_netflow_info),
       VAR_4);
   VAR_14 = (struct ng_netflow_info *)VAR_11->data;
   FUNC_7(VAR_10, VAR_14);

   break;
      }
  case 137:
      {
   struct ng_netflow_ifinfo *VAR_15;
   const uint16_t *VAR_16;

   if (VAR_13->header.arglen != sizeof(uint16_t))
     FUNC_0(VAR_0);

   VAR_16 = (uint16_t *)VAR_13->data;
   if (*VAR_16 >= VAR_6)
    FUNC_0(VAR_0);


   if (VAR_10->ifaces[*VAR_16].hook == ((void*)0))
     FUNC_0(VAR_0);

   FUNC_3(VAR_11, VAR_13,
        sizeof(struct ng_netflow_ifinfo), VAR_4);
   VAR_15 = (struct ng_netflow_ifinfo *)VAR_11->data;
   FUNC_6((void *)VAR_15, (void *)&VAR_10->ifaces[*VAR_16].info,
       sizeof(VAR_10->ifaces[*VAR_16].info));

   break;
      }
  case 134:
      {
   struct ng_netflow_setdlt *VAR_17;
   struct ng_netflow_iface *VAR_18;

   if (VAR_13->header.arglen !=
       sizeof(struct ng_netflow_setdlt))
    FUNC_0(VAR_0);

   VAR_17 = (struct ng_netflow_setdlt *)VAR_13->data;
   if (VAR_17->iface >= VAR_6)
    FUNC_0(VAR_0);
   VAR_18 = &VAR_10->ifaces[VAR_17->iface];


   if (VAR_18->hook == ((void*)0))
    FUNC_0(VAR_0);

   switch (VAR_17->dlt) {
   case 140:
    VAR_18->info.ifinfo_dlt = 140;
    break;
   case 139:
    VAR_18->info.ifinfo_dlt = 139;
    break;
   default:
    FUNC_0(VAR_0);
   }
   break;
      }
  case 133:
      {
   struct ng_netflow_setifindex *VAR_19;
   struct ng_netflow_iface *VAR_20;

   if (VAR_13->header.arglen !=
       sizeof(struct ng_netflow_setifindex))
    FUNC_0(VAR_0);

   VAR_19 = (struct ng_netflow_setifindex *)VAR_13->data;
   if (VAR_19->iface >= VAR_6)
    FUNC_0(VAR_0);
   VAR_20 = &VAR_10->ifaces[VAR_19->iface];


   if (VAR_20->hook == ((void*)0))
    FUNC_0(VAR_0);

   VAR_20->info.ifinfo_index = VAR_19->index;

   break;
      }
  case 130:
      {
   struct ng_netflow_settimeouts *VAR_21;

   if (VAR_13->header.arglen !=
       sizeof(struct ng_netflow_settimeouts))
    FUNC_0(VAR_0);

   VAR_21 = (struct ng_netflow_settimeouts *)VAR_13->data;

   VAR_10->nfinfo_inact_t = VAR_21->inactive_timeout;
   VAR_10->nfinfo_act_t = VAR_21->active_timeout;

   break;
      }
  case 135:
      {
   struct ng_netflow_setconfig *VAR_22;

   if (VAR_13->header.arglen !=
       sizeof(struct ng_netflow_setconfig))
    FUNC_0(VAR_0);

   VAR_22 = (struct ng_netflow_setconfig *)VAR_13->data;

   if (VAR_22->iface >= VAR_6)
    FUNC_0(VAR_0);

   VAR_10->ifaces[VAR_22->iface].info.conf = VAR_22->conf;

   break;
      }
  case 131:
      {
   struct ng_netflow_settemplate *VAR_23;

   if (VAR_13->header.arglen !=
       sizeof(struct ng_netflow_settemplate))
    FUNC_0(VAR_0);

   VAR_23 = (struct ng_netflow_settemplate *)VAR_13->data;

   VAR_10->templ_packets = VAR_23->packets;
   VAR_10->templ_time = VAR_23->time;

   break;
      }
  case 132:
      {
   struct ng_netflow_setmtu *VAR_24;

   if (VAR_13->header.arglen !=
       sizeof(struct ng_netflow_setmtu))
    FUNC_0(VAR_0);

   VAR_24 = (struct ng_netflow_setmtu *)VAR_13->data;
   if ((VAR_24->mtu < VAR_3) || (VAR_24->mtu > VAR_2))
    FUNC_0(VAR_0);

   VAR_10->mtu = VAR_24->mtu;

   break;
      }
  case 129:
   if (VAR_13->header.arglen !=
       sizeof(struct ngnf_show_header))
    FUNC_0(VAR_0);

   FUNC_3(VAR_11, VAR_13, VAR_5, VAR_4);

   if (!VAR_11)
    FUNC_0(VAR_1);

   VAR_12 = FUNC_9(VAR_10,
       (struct ngnf_show_header *)VAR_13->data,
       (struct ngnf_show_header *)VAR_11->data);

   if (VAR_12)
    FUNC_2(VAR_11);

   break;
  case 128:
      {
   struct ng_netflow_v9info *VAR_25;

   FUNC_3(VAR_11, VAR_13,
       sizeof(struct ng_netflow_v9info), VAR_4);
   VAR_25 = (struct ng_netflow_v9info *)VAR_11->data;
   FUNC_8(VAR_10, VAR_25);

   break;
      }
  default:
   FUNC_0(VAR_0);
   break;
  }
  break;
 default:
  FUNC_0(VAR_0);
  break;
 }





done:
 FUNC_5(VAR_12, VAR_7, VAR_8, VAR_11);
 FUNC_2(VAR_13);

 return (VAR_12);
}
