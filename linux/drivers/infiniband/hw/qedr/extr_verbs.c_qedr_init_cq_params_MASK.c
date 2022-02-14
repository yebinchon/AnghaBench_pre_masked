
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qedr_ucontext {int dpi; } ;
struct qedr_dev {int dpi; } ;
struct qedr_cq {int dummy; } ;
struct qed_rdma_create_cq_in_params {int cnq_id; int cq_size; int pbl_num_pages; scalar_t__ pbl_two_level; int pbl_ptr; int dpi; int cq_handle_lo; int cq_handle_hi; } ;


 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (struct qed_rdma_create_cq_in_params*,int ,int) ;
 int FUNC_2 (uintptr_t) ;

__attribute__((used)) static inline void FUNC_3(struct qedr_cq *VAR_0,
           struct qedr_ucontext *VAR_1,
           struct qedr_dev *VAR_2, int VAR_3,
           int VAR_4, int VAR_5,
           u64 VAR_6,
           struct qed_rdma_create_cq_in_params
           *VAR_7)
{
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->cq_handle_hi = FUNC_2((uintptr_t)VAR_0);
 VAR_7->cq_handle_lo = FUNC_0((uintptr_t)VAR_0);
 VAR_7->cnq_id = VAR_3;
 VAR_7->cq_size = VAR_4 - 1;
 VAR_7->dpi = (VAR_1) ? VAR_1->dpi : VAR_2->dpi;
 VAR_7->pbl_num_pages = VAR_5;
 VAR_7->pbl_ptr = VAR_6;
 VAR_7->pbl_two_level = 0;
}
