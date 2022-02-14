
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ib_port_modify {scalar_t__ clr_port_cap_mask; scalar_t__ set_port_cap_mask; } ;
struct ib_mad_reg_req {int method_mask; int mgmt_class_version; int mgmt_class; } ;
struct TYPE_3__ {int local_ca_ack_delay; } ;
struct ib_device {int phys_port_cnt; int name; int dev; TYPE_1__ attrs; } ;
struct cm_port {int port_num; int mad_agent; int cm_priv_altr_list; int cm_priv_prim_list; struct cm_device* cm_dev; } ;
struct cm_device {int device; struct cm_port** port; int list; scalar_t__ going_down; int ack_delay; struct ib_device* ib_device; } ;
struct TYPE_4__ {int device_lock; int device_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct cm_port*) ;
 int VAR_9 ;
 int FUNC_4 (struct cm_port*) ;
 int VAR_10 ;
 int FUNC_5 (int *,int *,int ,int *,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ib_device*,int,int ,struct ib_port_modify*) ;
 int FUNC_8 (struct ib_device*,int,int ,struct ib_mad_reg_req*,int ,int ,int ,struct cm_port*,int ) ;
 int FUNC_9 (struct ib_device*,int *,struct cm_device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct cm_device*) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct ib_device*,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_18(struct ib_device *VAR_11)
{
 struct cm_device *VAR_12;
 struct cm_port *VAR_13;
 struct ib_mad_reg_req VAR_14 = {
  .mgmt_class = VAR_2,
  .mgmt_class_version = VAR_1,
 };
 struct ib_port_modify VAR_15 = {
  .set_port_cap_mask = VAR_4
 };
 unsigned long VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 u8 VAR_19;

 VAR_12 = FUNC_12(sizeof(*VAR_12) + sizeof(*VAR_13) *
    VAR_11->phys_port_cnt, VAR_0);
 if (!VAR_12)
  return;

 VAR_12->ib_device = VAR_11;
 VAR_12->ack_delay = VAR_11->attrs.local_ca_ack_delay;
 VAR_12->going_down = 0;
 VAR_12->device = FUNC_5(&VAR_7, &VAR_11->dev,
           FUNC_2(0, 0), ((void*)0),
           "%s", VAR_11->name);
 if (FUNC_1(VAR_12->device)) {
  FUNC_11(VAR_12);
  return;
 }

 FUNC_15(VAR_3, VAR_14.method_mask);
 for (VAR_19 = 1; VAR_19 <= VAR_11->phys_port_cnt; VAR_19++) {
  if (!FUNC_14(VAR_11, VAR_19))
   continue;

  VAR_13 = FUNC_12(sizeof *VAR_13, VAR_0);
  if (!VAR_13)
   goto error1;

  VAR_12->port[VAR_19-1] = VAR_13;
  VAR_13->cm_dev = VAR_12;
  VAR_13->port_num = VAR_19;

  FUNC_0(&VAR_13->cm_priv_prim_list);
  FUNC_0(&VAR_13->cm_priv_altr_list);

  VAR_17 = FUNC_3(VAR_13);
  if (VAR_17)
   goto error1;

  VAR_13->mad_agent = FUNC_8(VAR_11, VAR_19,
       VAR_5,
       &VAR_14,
       0,
       VAR_10,
       VAR_9,
       VAR_13,
       0);
  if (FUNC_1(VAR_13->mad_agent))
   goto error2;

  VAR_17 = FUNC_7(VAR_11, VAR_19, 0, &VAR_15);
  if (VAR_17)
   goto error3;

  VAR_18++;
 }

 if (!VAR_18)
  goto free;

 FUNC_9(VAR_11, &VAR_8, VAR_12);

 FUNC_16(&VAR_6.device_lock, VAR_16);
 FUNC_13(&VAR_12->list, &VAR_6.device_list);
 FUNC_17(&VAR_6.device_lock, VAR_16);
 return;

error3:
 FUNC_10(VAR_13->mad_agent);
error2:
 FUNC_4(VAR_13);
error1:
 VAR_15.set_port_cap_mask = 0;
 VAR_15.clr_port_cap_mask = VAR_4;
 while (--VAR_19) {
  if (!FUNC_14(VAR_11, VAR_19))
   continue;

  VAR_13 = VAR_12->port[VAR_19-1];
  FUNC_7(VAR_11, VAR_13->port_num, 0, &VAR_15);
  FUNC_10(VAR_13->mad_agent);
  FUNC_4(VAR_13);
 }
free:
 FUNC_6(VAR_12->device);
 FUNC_11(VAR_12);
}
