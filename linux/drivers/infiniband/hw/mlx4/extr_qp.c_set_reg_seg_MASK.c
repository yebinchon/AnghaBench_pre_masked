
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqe_fmr_seg {scalar_t__* reserved; void* page_size; scalar_t__ offset; void* reg_len; void* start_addr; void* buf_list; void* mem_key; int flags; } ;
struct TYPE_2__ {int page_size; int length; int iova; } ;
struct mlx4_ib_mr {TYPE_1__ ibmr; int page_map; } ;
struct ib_reg_wr {int key; int access; int mr; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mlx4_ib_mr* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mlx4_wqe_fmr_seg *VAR_0,
   const struct ib_reg_wr *VAR_1)
{
 struct mlx4_ib_mr *VAR_2 = FUNC_4(VAR_1->mr);

 VAR_0->flags = FUNC_0(VAR_1->access);
 VAR_0->mem_key = FUNC_1(VAR_1->key);
 VAR_0->buf_list = FUNC_2(VAR_2->page_map);
 VAR_0->start_addr = FUNC_2(VAR_2->ibmr.iova);
 VAR_0->reg_len = FUNC_2(VAR_2->ibmr.length);
 VAR_0->offset = 0;
 VAR_0->page_size = FUNC_1(FUNC_3(VAR_2->ibmr.page_size));
 VAR_0->reserved[0] = 0;
 VAR_0->reserved[1] = 0;
}
