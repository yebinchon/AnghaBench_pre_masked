
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int qp_table_size; int node; } ;
struct TYPE_7__ {int notify_restart_rc; int notify_qp_reset; int qp_priv_free; int qp_priv_alloc; int free_all_qps; } ;
struct rvt_dev_info {TYPE_3__* qp_dev; int n_qps_lock; TYPE_2__ dparms; TYPE_1__ driver_f; } ;
struct TYPE_9__ {int qp_table_size; int qpn_table; struct TYPE_9__* qp_table; int qpt_lock; int qp_table_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct rvt_dev_info*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int,int,int ,int ) ;
 TYPE_3__* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct rvt_dev_info *VAR_3)
{
 int VAR_4;
 int VAR_5 = -VAR_1;

 if (!VAR_3->dparms.qp_table_size)
  return -VAR_0;





 if (!VAR_3->driver_f.free_all_qps ||
     !VAR_3->driver_f.qp_priv_alloc ||
     !VAR_3->driver_f.qp_priv_free ||
     !VAR_3->driver_f.notify_qp_reset ||
     !VAR_3->driver_f.notify_restart_rc)
  return -VAR_0;


 VAR_3->qp_dev = FUNC_6(sizeof(*VAR_3->qp_dev), VAR_2,
       VAR_3->dparms.node);
 if (!VAR_3->qp_dev)
  return -VAR_1;


 VAR_3->qp_dev->qp_table_size = VAR_3->dparms.qp_table_size;
 VAR_3->qp_dev->qp_table_bits = FUNC_2(VAR_3->dparms.qp_table_size);
 VAR_3->qp_dev->qp_table =
  FUNC_5(VAR_3->qp_dev->qp_table_size,
        sizeof(*VAR_3->qp_dev->qp_table),
        VAR_2, VAR_3->dparms.node);
 if (!VAR_3->qp_dev->qp_table)
  goto no_qp_table;

 for (VAR_4 = 0; VAR_4 < VAR_3->qp_dev->qp_table_size; VAR_4++)
  FUNC_0(VAR_3->qp_dev->qp_table[VAR_4], ((void*)0));

 FUNC_7(&VAR_3->qp_dev->qpt_lock);


 if (FUNC_3(VAR_3, &VAR_3->qp_dev->qpn_table))
  goto fail_table;

 FUNC_7(&VAR_3->n_qps_lock);

 return 0;

fail_table:
 FUNC_4(VAR_3->qp_dev->qp_table);
 FUNC_1(&VAR_3->qp_dev->qpn_table);

no_qp_table:
 FUNC_4(VAR_3->qp_dev);

 return VAR_5;
}
