
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mr {int device; } ;
struct mlx5_ib_mr {struct ib_mr ibmr; int * umem; } ;
typedef struct mlx5_ib_mr u32 ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 int FUNC_0 (struct mlx5_ib_mr,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_1 (int) ;
 int VAR_2 ;



 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct mlx5_ib_mr*) ;
 struct mlx5_ib_mr* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ib_pd*,struct mlx5_ib_mr*,struct mlx5_ib_mr,struct mlx5_ib_mr,struct mlx5_ib_mr*,int) ;
 int FUNC_6 (struct ib_pd*,struct mlx5_ib_mr*,int,struct mlx5_ib_mr*,int) ;
 int FUNC_7 (struct ib_pd*,struct mlx5_ib_mr*,int,struct mlx5_ib_mr*,int) ;
 int FUNC_8 (struct mlx5_ib_dev*,char*,int) ;
 struct mlx5_ib_dev* FUNC_9 (int ) ;

__attribute__((used)) static struct ib_mr *FUNC_10(struct ib_pd *VAR_4,
     enum ib_mr_type VAR_5, u32 VAR_6,
     u32 VAR_7)
{
 struct mlx5_ib_dev *VAR_8 = FUNC_9(VAR_4->device);
 int VAR_9 = FUNC_2(VAR_3);
 int VAR_10 = FUNC_0(VAR_6, 4);
 struct mlx5_ib_mr *VAR_11;
 u32 *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_1(-VAR_1);

 VAR_12 = FUNC_4(VAR_9, VAR_2);
 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto err_free;
 }

 VAR_11->ibmr.device = VAR_4->device;
 VAR_11->umem = ((void*)0);

 switch (VAR_5) {
 case 129:
  VAR_13 = FUNC_6(VAR_4, VAR_11, VAR_10, VAR_12, VAR_9);
  break;
 case 128:
  VAR_13 = FUNC_7(VAR_4, VAR_11, VAR_10, VAR_12, VAR_9);
  break;
 case 130:
  VAR_13 = FUNC_5(VAR_4, VAR_11, VAR_6,
       VAR_7, VAR_12, VAR_9);
  break;
 default:
  FUNC_8(VAR_8, "Invalid mr type %d\n", VAR_5);
  VAR_13 = -VAR_0;
 }

 if (VAR_13)
  goto err_free_in;

 FUNC_3(VAR_12);

 return &VAR_11->ibmr;

err_free_in:
 FUNC_3(VAR_12);
err_free:
 FUNC_3(VAR_11);
 return FUNC_1(VAR_13);
}
