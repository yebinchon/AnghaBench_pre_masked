
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {int dummy; } ;
struct devx_umem_reg_cmd {void* in; } ;
struct devx_umem {TYPE_1__* umem; scalar_t__ page_shift; scalar_t__ page_offset; int ncont; } ;
typedef void __be64 ;
struct TYPE_2__ {scalar_t__ writable; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*,void*,void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,void*,int ,scalar_t__) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct mlx5_ib_dev*,TYPE_1__*,scalar_t__,void*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_dev *VAR_9,
        struct devx_umem *VAR_10,
        struct devx_umem_reg_cmd *VAR_11)
{
 void *VAR_12;
 __be64 *VAR_13;

 VAR_12 = FUNC_0(VAR_4, VAR_11->in, VAR_12);
 VAR_13 = (__be64 *)FUNC_0(VAR_12, VAR_12, VAR_13);

 FUNC_1(VAR_4, VAR_11->in, VAR_7, VAR_1);
 FUNC_2(VAR_12, VAR_12, VAR_6, VAR_10->ncont);
 FUNC_1(VAR_12, VAR_12, VAR_5, VAR_10->page_shift -
         VAR_0);
 FUNC_1(VAR_12, VAR_12, VAR_8, VAR_10->page_offset);
 FUNC_3(VAR_9, VAR_10->umem, VAR_10->page_shift, VAR_13,
        (VAR_10->umem->writable ? VAR_3 : 0) |
        VAR_2);
}
