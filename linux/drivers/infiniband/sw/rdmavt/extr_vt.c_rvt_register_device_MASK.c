
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * dma_ops; } ;
struct TYPE_4__ {unsigned long long uverbs_cmd_mask; int num_comp_vectors; TYPE_3__ dev; int node_type; } ;
struct rvt_dev_info {TYPE_1__ ibdev; scalar_t__ n_pds_allocated; int n_pds_lock; int n_cqs_lock; scalar_t__ n_ahs_allocated; int n_ahs_lock; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 unsigned long long VAR_22 ;
 unsigned long long VAR_23 ;
 unsigned long long VAR_24 ;
 unsigned long long VAR_25 ;
 unsigned long long VAR_26 ;
 unsigned long long VAR_27 ;
 unsigned long long VAR_28 ;
 unsigned long long VAR_29 ;
 unsigned long long VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_0 (struct rvt_dev_info*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_33 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct rvt_dev_info*) ;
 int VAR_34 ;
 int FUNC_6 (struct rvt_dev_info*) ;
 int FUNC_7 (struct rvt_dev_info*) ;
 int FUNC_8 (struct rvt_dev_info*) ;
 int FUNC_9 (struct rvt_dev_info*) ;
 int FUNC_10 (struct rvt_dev_info*) ;
 int FUNC_11 (struct rvt_dev_info*) ;
 int FUNC_12 (struct rvt_dev_info*,char*) ;
 int FUNC_13 (struct rvt_dev_info*,char*) ;
 int FUNC_14 (struct rvt_dev_info*) ;
 int FUNC_15 (struct rvt_dev_info*) ;
 int FUNC_16 (struct rvt_dev_info*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct rvt_dev_info*,char*) ;

int FUNC_19(struct rvt_dev_info *VAR_35)
{
 int VAR_36 = 0, VAR_37;

 if (!VAR_35)
  return -VAR_0;





 for (VAR_37 = 0; VAR_37 < VAR_32; VAR_37++)
  if (FUNC_0(VAR_35, VAR_37)) {
   FUNC_4("Driver support req not met at %d\n", VAR_37);
   return -VAR_0;
  }

 FUNC_3(&VAR_35->ibdev, &VAR_34);


 FUNC_18(VAR_35, "Driver attempting registration");
 FUNC_10(VAR_35);


 VAR_36 = FUNC_8(VAR_35);
 if (VAR_36) {
  FUNC_4("Error in driver QP init.\n");
  return -VAR_0;
 }


 FUNC_17(&VAR_35->n_ahs_lock);
 VAR_35->n_ahs_allocated = 0;


 FUNC_9(VAR_35);


 FUNC_6(VAR_35);


 VAR_36 = FUNC_7(VAR_35);
 if (VAR_36) {
  FUNC_4("Error in driver MR init.\n");
  goto bail_no_mr;
 }


 VAR_36 = FUNC_16(VAR_35);
 if (VAR_36) {
  FUNC_12(VAR_35, "Error in WSS init.\n");
  goto bail_mr;
 }


 FUNC_17(&VAR_35->n_cqs_lock);


 VAR_35->ibdev.dev.dma_ops = VAR_35->ibdev.dev.dma_ops ? : &VAR_33;


 FUNC_17(&VAR_35->n_pds_lock);
 VAR_35->n_pds_allocated = 0;







 VAR_35->ibdev.uverbs_cmd_mask =
  (1ull << VAR_15) |
  (1ull << VAR_24) |
  (1ull << VAR_25) |
  (1ull << VAR_1) |
  (1ull << VAR_8) |
  (1ull << VAR_3) |
  (1ull << VAR_16) |
  (1ull << VAR_23) |
  (1ull << VAR_10) |
  (1ull << VAR_28) |
  (1ull << VAR_9) |
  (1ull << VAR_4) |
  (1ull << VAR_5) |
  (1ull << VAR_30) |
  (1ull << VAR_11) |
  (1ull << VAR_19) |
  (1ull << VAR_29) |
  (1ull << VAR_6) |
  (1ull << VAR_26) |
  (1ull << VAR_17) |
  (1ull << VAR_12) |
  (1ull << VAR_21) |
  (1ull << VAR_20) |
  (1ull << VAR_2) |
  (1ull << VAR_14) |
  (1ull << VAR_7) |
  (1ull << VAR_18) |
  (1ull << VAR_27) |
  (1ull << VAR_13) |
  (1ull << VAR_22);
 VAR_35->ibdev.node_type = VAR_31;
 if (!VAR_35->ibdev.num_comp_vectors)
  VAR_35->ibdev.num_comp_vectors = 1;


 VAR_36 = FUNC_2(&VAR_35->ibdev, FUNC_1(&VAR_35->ibdev.dev));
 if (VAR_36) {
  FUNC_12(VAR_35, "Failed to register driver with ib core.\n");
  goto bail_wss;
 }

 FUNC_5(VAR_35);

 FUNC_13(VAR_35, "Registration with rdmavt done.\n");
 return VAR_36;

bail_wss:
 FUNC_15(VAR_35);
bail_mr:
 FUNC_11(VAR_35);

bail_no_mr:
 FUNC_14(VAR_35);

 return VAR_36;
}
