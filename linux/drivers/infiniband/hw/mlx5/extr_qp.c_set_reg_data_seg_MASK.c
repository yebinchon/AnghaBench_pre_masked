
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wqe_data_seg {void* lkey; void* byte_count; int addr; } ;
struct TYPE_2__ {int local_dma_lkey; } ;
struct mlx5_ib_pd {TYPE_1__ ibpd; } ;
struct mlx5_ib_mr {int desc_size; int ndescs; int meta_ndescs; int desc_map; } ;


 int FUNC_0 (int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_wqe_data_seg *VAR_0,
        struct mlx5_ib_mr *VAR_1,
        struct mlx5_ib_pd *VAR_2)
{
 int VAR_3 = VAR_1->desc_size * (VAR_1->ndescs + VAR_1->meta_ndescs);

 VAR_0->addr = FUNC_2(VAR_1->desc_map);
 VAR_0->byte_count = FUNC_1(FUNC_0(VAR_3, 64));
 VAR_0->lkey = FUNC_1(VAR_2->ibpd.local_dma_lkey);
}
