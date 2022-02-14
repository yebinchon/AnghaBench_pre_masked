
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mlx5_ib_mr {int meta_length; struct mlx5_ib_mr* pi_mr; struct mlx5_ib_mr* klm_mr; struct mlx5_ib_mr* mtt_mr; scalar_t__ pi_iova; scalar_t__ meta_ndescs; scalar_t__ data_iova; scalar_t__ data_length; scalar_t__ ndescs; } ;
struct ib_mr {scalar_t__ type; TYPE_1__* sig_attrs; scalar_t__ iova; } ;
struct TYPE_2__ {int meta_length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_mr*,struct scatterlist*,int,unsigned int*,struct scatterlist*,int,unsigned int*) ;
 int FUNC_2 (struct ib_mr*,struct scatterlist*,int,unsigned int*,struct scatterlist*,int,unsigned int*) ;
 int FUNC_3 (struct ib_mr*,struct scatterlist*,int,unsigned int*,struct scatterlist*,int,unsigned int*) ;
 struct mlx5_ib_mr* FUNC_4 (struct ib_mr*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ib_mr *VAR_2, struct scatterlist *VAR_3,
    int VAR_4, unsigned int *VAR_5,
    struct scatterlist *VAR_6, int VAR_7,
    unsigned int *VAR_8)
{
 struct mlx5_ib_mr *VAR_9 = FUNC_4(VAR_2);
 struct mlx5_ib_mr *VAR_10 = ((void*)0);
 int VAR_11;

 FUNC_0(VAR_2->type != VAR_1);

 VAR_9->ndescs = 0;
 VAR_9->data_length = 0;
 VAR_9->data_iova = 0;
 VAR_9->meta_ndescs = 0;
 VAR_9->pi_iova = 0;






 VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_7,
        VAR_8);
 if (VAR_11 == VAR_4 + VAR_7)
  goto out;
 VAR_10 = VAR_9->mtt_mr;
 VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7,
         VAR_8);
 if (VAR_11 == VAR_4 + VAR_7)
  goto out;

 VAR_10 = VAR_9->klm_mr;
 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7,
         VAR_8);
 if (FUNC_5(VAR_11 != VAR_4 + VAR_7))
  return -VAR_0;

out:

 VAR_2->iova = 0;
 VAR_9->pi_mr = VAR_10;
 if (VAR_10)
  VAR_2->sig_attrs->meta_length = VAR_10->meta_length;
 else
  VAR_2->sig_attrs->meta_length = VAR_9->meta_length;

 return 0;
}
