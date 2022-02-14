
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * parent; } ;
struct ib_device {unsigned int phys_port_cnt; int num_comp_vectors; int node_desc; TYPE_1__ dev; scalar_t__ node_guid; } ;
struct hfi1_ibport {int rvp; } ;
struct hfi1_pportdata {int pkeys; struct hfi1_ibport ibport_data; } ;
struct TYPE_12__ {int qpn_inc; int qpn_res_start; int qpn_res_end; int core_cap_flags; unsigned int nports; int reserved_operations; int extra_rdma_atomic; int wss_clean_period; int wss_threshold; int sge_copy_mode; int npkeys; int lkey_table_size; int node; int max_mad_size; int psn_modify_mask; int psn_shift; int psn_mask; int max_rdma_atomic; int qos_shift; scalar_t__ qpn_start; int qp_table_size; } ;
struct TYPE_11__ {int comp_vect_cpu_lookup; int setup_wqe; int notify_restart_rc; int modify_qp; int check_modify_qp; int mtu_to_path_mtu; int mtu_from_qp; void* notify_error_qp; int quiesce_qp; int stop_send_queue; int flush_qp_waiters; int get_pmtu_from_attr; int schedule_send_no_lock; int schedule_send; int do_send; int notify_qp_reset; int free_all_qps; int qp_priv_free; int qp_priv_init; int qp_priv_alloc; int cap_mask_chg; int shut_down_port; int query_port_state; int get_guid_be; int notify_new_ah; int check_ah; int get_pci_dev; } ;
struct TYPE_13__ {struct ib_device ibdev; int wc_opcode; int post_parms; TYPE_4__ dparms; scalar_t__ flags; TYPE_3__ driver_f; } ;
struct hfi1_ibdev {TYPE_5__ rdi; int memwait; int txwait; int txwait_lock; int iowait_lock; int mem_timer; } ;
struct hfi1_devdata {unsigned int num_pports; struct hfi1_ibdev verbs_dev; struct hfi1_pportdata* pport; int node; int comp_vect_possible_cpus; int qos_shift; TYPE_2__* pcidev; } ;
struct TYPE_14__ {int nodename; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct hfi1_ibport*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int VAR_20 ;
 int FUNC_4 (struct hfi1_devdata*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (struct hfi1_devdata*) ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int FUNC_6 (struct ib_device*,int *) ;
 int FUNC_7 (struct hfi1_pportdata*) ;
 TYPE_8__* FUNC_8 () ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_9 (struct ib_device*,int *) ;
 int FUNC_10 (TYPE_5__*,int *,unsigned int,int ) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (struct hfi1_ibdev*) ;
 int FUNC_17 (struct hfi1_ibdev*) ;
 int VAR_46 ;
 int VAR_47 ;

int FUNC_18(struct hfi1_devdata *VAR_48)
{
 struct hfi1_ibdev *VAR_49 = &VAR_48->verbs_dev;
 struct ib_device *VAR_50 = &VAR_49->rdi.ibdev;
 struct hfi1_pportdata *VAR_51 = VAR_48->pport;
 struct hfi1_ibport *VAR_52 = &VAR_51->ibport_data;
 unsigned VAR_53;
 int VAR_54;

 for (VAR_53 = 0; VAR_53 < VAR_48->num_pports; VAR_53++)
  FUNC_7(VAR_51 + VAR_53);



 FUNC_15(&VAR_49->mem_timer, VAR_34, 0);

 FUNC_13(&VAR_49->iowait_lock);
 FUNC_13(&VAR_49->txwait_lock);
 FUNC_0(&VAR_49->txwait);
 FUNC_0(&VAR_49->memwait);

 VAR_54 = FUNC_17(VAR_49);
 if (VAR_54)
  goto err_verbs_txreq;


 VAR_50->node_guid = FUNC_2(VAR_52, VAR_1);






 if (!VAR_31)
  VAR_31 = VAR_50->node_guid;
 VAR_50->phys_port_cnt = VAR_48->num_pports;
 VAR_50->dev.parent = &VAR_48->pcidev->dev;

 FUNC_6(VAR_50, &VAR_18);

 FUNC_14(VAR_50->node_desc, FUNC_8()->nodename,
  sizeof(VAR_50->node_desc));




 VAR_48->verbs_dev.rdi.driver_f.get_pci_dev = VAR_12;
 VAR_48->verbs_dev.rdi.driver_f.check_ah = VAR_15;
 VAR_48->verbs_dev.rdi.driver_f.notify_new_ah = VAR_23;
 VAR_48->verbs_dev.rdi.driver_f.get_guid_be = VAR_20;
 VAR_48->verbs_dev.rdi.driver_f.query_port_state = VAR_41;
 VAR_48->verbs_dev.rdi.driver_f.shut_down_port = VAR_44;
 VAR_48->verbs_dev.rdi.driver_f.cap_mask_chg = VAR_14;



 FUNC_3(VAR_48);


 VAR_48->verbs_dev.rdi.dparms.qp_table_size = VAR_26;
 VAR_48->verbs_dev.rdi.dparms.qpn_start = 0;
 VAR_48->verbs_dev.rdi.dparms.qpn_inc = 1;
 VAR_48->verbs_dev.rdi.dparms.qos_shift = VAR_48->qos_shift;
 VAR_48->verbs_dev.rdi.dparms.qpn_res_start = VAR_33 << 16;
 VAR_48->verbs_dev.rdi.dparms.qpn_res_end =
 VAR_48->verbs_dev.rdi.dparms.qpn_res_start + 65535;
 VAR_48->verbs_dev.rdi.dparms.max_rdma_atomic = VAR_0;
 VAR_48->verbs_dev.rdi.dparms.psn_mask = VAR_4;
 VAR_48->verbs_dev.rdi.dparms.psn_shift = VAR_6;
 VAR_48->verbs_dev.rdi.dparms.psn_modify_mask = VAR_5;
 VAR_48->verbs_dev.rdi.dparms.core_cap_flags = VAR_8 |
      VAR_7;
 VAR_48->verbs_dev.rdi.dparms.max_mad_size = VAR_3;

 VAR_48->verbs_dev.rdi.driver_f.qp_priv_alloc = VAR_39;
 VAR_48->verbs_dev.rdi.driver_f.qp_priv_init = VAR_25;
 VAR_48->verbs_dev.rdi.driver_f.qp_priv_free = VAR_40;
 VAR_48->verbs_dev.rdi.driver_f.free_all_qps = VAR_11;
 VAR_48->verbs_dev.rdi.driver_f.notify_qp_reset = VAR_38;
 VAR_48->verbs_dev.rdi.driver_f.do_send = VAR_19;
 VAR_48->verbs_dev.rdi.driver_f.schedule_send = VAR_28;
 VAR_48->verbs_dev.rdi.driver_f.schedule_send_no_lock = VAR_9;
 VAR_48->verbs_dev.rdi.driver_f.get_pmtu_from_attr = VAR_13;
 VAR_48->verbs_dev.rdi.driver_f.notify_error_qp = VAR_37;
 VAR_48->verbs_dev.rdi.driver_f.flush_qp_waiters = VAR_10;
 VAR_48->verbs_dev.rdi.driver_f.stop_send_queue = VAR_45;
 VAR_48->verbs_dev.rdi.driver_f.quiesce_qp = VAR_42;
 VAR_48->verbs_dev.rdi.driver_f.notify_error_qp = VAR_37;
 VAR_48->verbs_dev.rdi.driver_f.mtu_from_qp = VAR_35;
 VAR_48->verbs_dev.rdi.driver_f.mtu_to_path_mtu = VAR_36;
 VAR_48->verbs_dev.rdi.driver_f.check_modify_qp = VAR_16;
 VAR_48->verbs_dev.rdi.driver_f.modify_qp = VAR_22;
 VAR_48->verbs_dev.rdi.driver_f.notify_restart_rc = VAR_27;
 VAR_48->verbs_dev.rdi.driver_f.setup_wqe = VAR_29;
 VAR_48->verbs_dev.rdi.driver_f.comp_vect_cpu_lookup =
      VAR_17;


 VAR_48->verbs_dev.rdi.ibdev.num_comp_vectors = VAR_48->comp_vect_possible_cpus;
 VAR_48->verbs_dev.rdi.dparms.node = VAR_48->node;


 VAR_48->verbs_dev.rdi.flags = 0;
 VAR_48->verbs_dev.rdi.dparms.lkey_table_size = VAR_21;
 VAR_48->verbs_dev.rdi.dparms.nports = VAR_48->num_pports;
 VAR_48->verbs_dev.rdi.dparms.npkeys = FUNC_4(VAR_48);
 VAR_48->verbs_dev.rdi.dparms.sge_copy_mode = VAR_43;
 VAR_48->verbs_dev.rdi.dparms.wss_threshold = VAR_47;
 VAR_48->verbs_dev.rdi.dparms.wss_clean_period = VAR_46;
 VAR_48->verbs_dev.rdi.dparms.reserved_operations = 1;
 VAR_48->verbs_dev.rdi.dparms.extra_rdma_atomic = VAR_2;


 VAR_48->verbs_dev.rdi.post_parms = VAR_24;


 VAR_48->verbs_dev.rdi.wc_opcode = VAR_32;

 VAR_51 = VAR_48->pport;
 for (VAR_53 = 0; VAR_53 < VAR_48->num_pports; VAR_53++, VAR_51++)
  FUNC_10(&VAR_48->verbs_dev.rdi,
         &VAR_51->ibport_data.rvp,
         VAR_53,
         VAR_51->pkeys);

 FUNC_9(&VAR_48->verbs_dev.rdi.ibdev,
        &VAR_30);

 VAR_54 = FUNC_11(&VAR_48->verbs_dev.rdi);
 if (VAR_54)
  goto err_verbs_txreq;

 VAR_54 = FUNC_5(VAR_48);
 if (VAR_54)
  goto err_class;

 return VAR_54;

err_class:
 FUNC_12(&VAR_48->verbs_dev.rdi);
err_verbs_txreq:
 FUNC_16(VAR_49);
 FUNC_1(VAR_48, "cannot register verbs: %d!\n", -VAR_54);
 return VAR_54;
}
