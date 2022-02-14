
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucmd ;
struct mlx5_ib_resize_cq {int cqe_size; int buf_addr; scalar_t__ reserved1; scalar_t__ reserved0; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_ib_cq {struct ib_umem* resize_umem; } ;
struct ib_umem {int dummy; } ;
struct ib_udata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_umem*) ;
 int FUNC_1 (struct ib_umem*) ;
 int VAR_2 ;
 int FUNC_2 (struct mlx5_ib_resize_cq*,struct ib_udata*,int) ;
 struct ib_umem* FUNC_3 (struct ib_udata*,int ,size_t,int ,int) ;
 int FUNC_4 (struct ib_umem*,int ,int ,int*,int*,int*,int *) ;

__attribute__((used)) static int FUNC_5(struct mlx5_ib_dev *VAR_3, struct mlx5_ib_cq *VAR_4,
         int VAR_5, struct ib_udata *VAR_6, int *VAR_7,
         int *VAR_8, int *VAR_9)
{
 struct mlx5_ib_resize_cq VAR_10;
 struct ib_umem *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(&VAR_10, VAR_6, sizeof(VAR_10));
 if (VAR_12)
  return VAR_12;

 if (VAR_10.reserved0 || VAR_10.reserved1)
  return -VAR_0;


 if (VAR_10.cqe_size && VAR_2 / VAR_10.cqe_size <= VAR_5 - 1)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_6, VAR_10.buf_addr,
      (size_t)VAR_10.cqe_size * VAR_5,
      VAR_1, 1);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  return VAR_12;
 }

 FUNC_4(VAR_11, VAR_10.buf_addr, 0, &VAR_13, VAR_8,
      VAR_7, ((void*)0));

 VAR_4->resize_umem = VAR_11;
 *VAR_9 = VAR_10.cqe_size;

 return 0;
}
