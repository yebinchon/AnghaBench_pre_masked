
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
struct ib_device {int phys_port_cnt; TYPE_1__ attrs; } ;
struct cm_port {int port_num; int mad_agent; struct cm_port** port; int list; int cm_priv_altr_list; int cm_priv_prim_list; struct cm_port* cm_dev; scalar_t__ going_down; int ack_delay; struct ib_device* ib_device; } ;
struct cm_device {int port_num; int mad_agent; struct cm_device** port; int list; int cm_priv_altr_list; int cm_priv_prim_list; struct cm_device* cm_dev; scalar_t__ going_down; int ack_delay; struct ib_device* ib_device; } ;
struct TYPE_4__ {int device_lock; int device_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct cm_port*) ;
 int VAR_8 ;
 int FUNC_3 (struct cm_port*) ;
 int VAR_9 ;
 int FUNC_4 (struct ib_device*,int,int ,struct ib_port_modify*) ;
 int FUNC_5 (struct ib_device*,int,int ,struct ib_mad_reg_req*,int ,int ,int ,struct cm_port*,int ) ;
 int FUNC_6 (struct ib_device*,int *,struct cm_port*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cm_port*) ;
 struct cm_port* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct ib_device*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct cm_port*,struct cm_port*,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_16(struct ib_device *VAR_10)
{
 struct cm_device *VAR_11;
 struct cm_port *VAR_12;
 struct ib_mad_reg_req VAR_13 = {
  .mgmt_class = VAR_2,
  .mgmt_class_version = VAR_1,
 };
 struct ib_port_modify VAR_14 = {
  .set_port_cap_mask = VAR_4
 };
 unsigned long VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 u8 VAR_18;

 VAR_11 = FUNC_9(FUNC_13(VAR_11, VAR_12, VAR_10->phys_port_cnt),
    VAR_0);
 if (!VAR_11)
  return;

 VAR_11->ib_device = VAR_10;
 VAR_11->ack_delay = VAR_10->attrs.local_ca_ack_delay;
 VAR_11->going_down = 0;

 FUNC_12(VAR_3, VAR_13.method_mask);
 for (VAR_18 = 1; VAR_18 <= VAR_10->phys_port_cnt; VAR_18++) {
  if (!FUNC_11(VAR_10, VAR_18))
   continue;

  VAR_12 = FUNC_9(sizeof *VAR_12, VAR_0);
  if (!VAR_12)
   goto error1;

  VAR_11->port[VAR_18-1] = VAR_12;
  VAR_12->cm_dev = VAR_11;
  VAR_12->port_num = VAR_18;

  FUNC_0(&VAR_12->cm_priv_prim_list);
  FUNC_0(&VAR_12->cm_priv_altr_list);

  VAR_16 = FUNC_2(VAR_12);
  if (VAR_16)
   goto error1;

  VAR_12->mad_agent = FUNC_5(VAR_10, VAR_18,
       VAR_5,
       &VAR_13,
       0,
       VAR_9,
       VAR_8,
       VAR_12,
       0);
  if (FUNC_1(VAR_12->mad_agent))
   goto error2;

  VAR_16 = FUNC_4(VAR_10, VAR_18, 0, &VAR_14);
  if (VAR_16)
   goto error3;

  VAR_17++;
 }

 if (!VAR_17)
  goto free;

 FUNC_6(VAR_10, &VAR_7, VAR_11);

 FUNC_14(&VAR_6.device_lock, VAR_15);
 FUNC_10(&VAR_11->list, &VAR_6.device_list);
 FUNC_15(&VAR_6.device_lock, VAR_15);
 return;

error3:
 FUNC_7(VAR_12->mad_agent);
error2:
 FUNC_3(VAR_12);
error1:
 VAR_14.set_port_cap_mask = 0;
 VAR_14.clr_port_cap_mask = VAR_4;
 FUNC_8(VAR_12);
 while (--VAR_18) {
  if (!FUNC_11(VAR_10, VAR_18))
   continue;

  VAR_12 = VAR_11->port[VAR_18-1];
  FUNC_4(VAR_10, VAR_12->port_num, 0, &VAR_14);
  FUNC_7(VAR_12->mad_agent);
  FUNC_3(VAR_12);
  FUNC_8(VAR_12);
 }
free:
 FUNC_8(VAR_11);
}
