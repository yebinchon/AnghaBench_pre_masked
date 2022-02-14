
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int interface_id; int subnet_prefix; } ;
struct TYPE_10__ {TYPE_3__ global; } ;
struct TYPE_7__ {struct srpt_port* priv; } ;
struct TYPE_6__ {struct srpt_port* priv; } ;
struct srpt_port {int port; TYPE_4__* sdev; int * mad_agent; int port_gid; TYPE_5__ gid; TYPE_2__ port_gid_wwn; int port_guid; TYPE_1__ port_guid_wwn; int lid; int sm_lid; } ;
struct ib_port_modify {void* clr_port_cap_mask; void* set_port_cap_mask; int method_mask; int mgmt_class_version; int mgmt_class; } ;
struct ib_port_attr {int lid; int sm_lid; } ;
struct ib_mad_reg_req {void* clr_port_cap_mask; void* set_port_cap_mask; int method_mask; int mgmt_class_version; int mgmt_class; } ;
typedef int reg_req ;
typedef int port_modify ;
struct TYPE_9__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,struct ib_port_modify*) ;
 int FUNC_4 (int ,int ,struct ib_port_attr*) ;
 int * FUNC_5 (int ,int ,int ,struct ib_port_modify*,int ,int ,int ,struct srpt_port*,int ) ;
 int FUNC_6 (struct ib_port_modify*,int ,int) ;
 int FUNC_7 (int ,int ,int ,TYPE_5__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,char*,int ,int ) ;
 int FUNC_10 (int ,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct srpt_port *VAR_8)
{
 struct ib_mad_reg_req VAR_9;
 struct ib_port_modify VAR_10;
 struct ib_port_attr VAR_11;
 int VAR_12;

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.set_port_cap_mask = VAR_4;
 VAR_10.clr_port_cap_mask = 0;

 VAR_12 = FUNC_3(VAR_8->sdev->device, VAR_8->port, 0, &VAR_10);
 if (VAR_12)
  goto err_mod_port;

 VAR_12 = FUNC_4(VAR_8->sdev->device, VAR_8->port, &VAR_11);
 if (VAR_12)
  goto err_query_port;

 VAR_8->sm_lid = VAR_11.sm_lid;
 VAR_8->lid = VAR_11.lid;

 VAR_12 = FUNC_7(VAR_8->sdev->device, VAR_8->port, 0, &VAR_8->gid);
 if (VAR_12)
  goto err_query_port;

 VAR_8->port_guid_wwn.priv = VAR_8;
 FUNC_10(VAR_8->port_guid, sizeof(VAR_8->port_guid),
    &VAR_8->gid.global.interface_id);
 VAR_8->port_gid_wwn.priv = VAR_8;
 FUNC_9(VAR_8->port_gid, sizeof(VAR_8->port_gid),
   "0x%016llx%016llx",
   FUNC_2(VAR_8->gid.global.subnet_prefix),
   FUNC_2(VAR_8->gid.global.interface_id));

 if (!VAR_8->mad_agent) {
  FUNC_6(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.mgmt_class = VAR_1;
  VAR_9.mgmt_class_version = VAR_0;
  FUNC_8(VAR_2, VAR_9.method_mask);
  FUNC_8(VAR_3, VAR_9.method_mask);

  VAR_8->mad_agent = FUNC_5(VAR_8->sdev->device,
        VAR_8->port,
        VAR_5,
        &VAR_9, 0,
        VAR_7,
        VAR_6,
        VAR_8, 0);
  if (FUNC_0(VAR_8->mad_agent)) {
   VAR_12 = FUNC_1(VAR_8->mad_agent);
   VAR_8->mad_agent = ((void*)0);
   goto err_query_port;
  }
 }

 return 0;

err_query_port:

 VAR_10.set_port_cap_mask = 0;
 VAR_10.clr_port_cap_mask = VAR_4;
 FUNC_3(VAR_8->sdev->device, VAR_8->port, 0, &VAR_10);

err_mod_port:

 return VAR_12;
}
