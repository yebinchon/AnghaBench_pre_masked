
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_2__ {int length; scalar_t__ iova; } ;
struct mlx5_ib_mr {int desc_size; int max_descs; TYPE_1__ ibmr; int data_length; int pi_iova; scalar_t__ data_iova; int desc_map; scalar_t__ meta_length; scalar_t__ meta_ndescs; scalar_t__ ndescs; struct mlx5_ib_mr* klm_mr; } ;
struct ib_mr {int length; int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct mlx5_ib_mr*,struct scatterlist*,int,unsigned int*,struct scatterlist*,int,unsigned int*) ;
 struct mlx5_ib_mr* FUNC_3 (struct ib_mr*) ;

__attribute__((used)) static int
FUNC_4(struct ib_mr *VAR_1, struct scatterlist *VAR_2,
    int VAR_3, unsigned int *VAR_4,
    struct scatterlist *VAR_5, int VAR_6,
    unsigned int *VAR_7)
{
 struct mlx5_ib_mr *VAR_8 = FUNC_3(VAR_1);
 struct mlx5_ib_mr *VAR_9 = VAR_8->klm_mr;
 int VAR_10;

 VAR_9->ndescs = 0;
 VAR_9->meta_ndescs = 0;
 VAR_9->meta_length = 0;

 FUNC_0(VAR_1->device, VAR_9->desc_map,
       VAR_9->desc_size * VAR_9->max_descs,
       VAR_0);

 VAR_10 = FUNC_2(VAR_9, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7);

 FUNC_1(VAR_1->device, VAR_9->desc_map,
          VAR_9->desc_size * VAR_9->max_descs,
          VAR_0);


 VAR_9->data_iova = 0;
 VAR_9->ibmr.iova = 0;
 VAR_9->pi_iova = VAR_9->data_length;
 VAR_1->length = VAR_9->ibmr.length;

 return VAR_10;
}
