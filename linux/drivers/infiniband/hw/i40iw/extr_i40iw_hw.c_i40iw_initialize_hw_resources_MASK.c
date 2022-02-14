
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_qp {int dummy; } ;
struct TYPE_6__ {TYPE_2__* hmc_info; } ;
struct i40iw_device {int max_cqe; int max_qp; int max_mr; int max_cq; unsigned long max_pd; int arp_table_size; int device_cap_flags; int mr_stagmask; int qptable_lock; int resource_lock; int * allocated_pds; int * allocated_cqs; int * allocated_qps; int * allocated_arps; int * allocated_mrs; struct i40iw_qp** qp_table; void* mem_resources; struct i40iw_arp_entry* arp_table; TYPE_3__ sc_dev; } ;
struct i40iw_arp_entry {int dummy; } ;
struct TYPE_5__ {TYPE_1__* hmc_obj; } ;
struct TYPE_4__ {int cnt; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;

u32 FUNC_6(struct i40iw_device *VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 void *VAR_18;

 VAR_14 = VAR_10->sc_dev.hmc_info->hmc_obj[VAR_5].cnt;
 VAR_15 = VAR_10->sc_dev.hmc_info->hmc_obj[VAR_3].cnt;
 VAR_13 = VAR_10->sc_dev.hmc_info->hmc_obj[VAR_4].cnt;
 VAR_16 = VAR_10->sc_dev.hmc_info->hmc_obj[VAR_2].cnt;
 VAR_10->max_cqe = 0xFFFFF;
 VAR_11 = VAR_6;
 VAR_12 = sizeof(struct i40iw_arp_entry) * VAR_16;
 VAR_12 += sizeof(unsigned long) * FUNC_0(VAR_14);
 VAR_12 += sizeof(unsigned long) * FUNC_0(VAR_13);
 VAR_12 += sizeof(unsigned long) * FUNC_0(VAR_15);
 VAR_12 += sizeof(unsigned long) * FUNC_0(VAR_11);
 VAR_12 += sizeof(unsigned long) * FUNC_0(VAR_16);
 VAR_12 += sizeof(struct i40iw_qp **) * VAR_14;
 VAR_10->mem_resources = FUNC_2(VAR_12, VAR_1);

 if (!VAR_10->mem_resources)
  return -VAR_0;

 VAR_10->max_qp = VAR_14;
 VAR_10->max_mr = VAR_13;
 VAR_10->max_cq = VAR_15;
 VAR_10->max_pd = VAR_11;
 VAR_10->arp_table_size = VAR_16;
 VAR_10->arp_table = (struct i40iw_arp_entry *)VAR_10->mem_resources;
 VAR_18 = VAR_10->mem_resources + (sizeof(struct i40iw_arp_entry) * VAR_16);

 VAR_10->device_cap_flags = VAR_7 |
     VAR_9 | VAR_8;

 VAR_10->allocated_qps = VAR_18;
 VAR_10->allocated_cqs = &VAR_10->allocated_qps[FUNC_0(VAR_14)];
 VAR_10->allocated_mrs = &VAR_10->allocated_cqs[FUNC_0(VAR_15)];
 VAR_10->allocated_pds = &VAR_10->allocated_mrs[FUNC_0(VAR_13)];
 VAR_10->allocated_arps = &VAR_10->allocated_pds[FUNC_0(VAR_11)];
 VAR_10->qp_table = (struct i40iw_qp **)(&VAR_10->allocated_arps[FUNC_0(VAR_16)]);
 FUNC_4(0, VAR_10->allocated_mrs);
 FUNC_4(0, VAR_10->allocated_qps);
 FUNC_4(0, VAR_10->allocated_cqs);
 FUNC_4(0, VAR_10->allocated_pds);
 FUNC_4(0, VAR_10->allocated_arps);


 FUNC_4(1, VAR_10->allocated_qps);
 FUNC_4(1, VAR_10->allocated_cqs);
 FUNC_4(1, VAR_10->allocated_pds);
 FUNC_4(2, VAR_10->allocated_cqs);
 FUNC_4(2, VAR_10->allocated_pds);

 FUNC_5(&VAR_10->resource_lock);
 FUNC_5(&VAR_10->qptable_lock);

 VAR_17 = 24 - FUNC_3(FUNC_1(VAR_10->max_mr), 14);
 VAR_10->mr_stagmask = ~(((1 << VAR_17) - 1) << (32 - VAR_17));
 return 0;
}
